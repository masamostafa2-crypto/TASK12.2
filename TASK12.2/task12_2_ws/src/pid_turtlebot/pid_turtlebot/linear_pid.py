#move_x action server


import math
import threading
import time

import rclpy
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from turtlebot_interface.action import MoveX

from mia_task7.maze_config import (
    CONTROL_HZ,
    GOAL_TIMEOUT_S,
    ODOM_STARTUP_TIMEOUT_S,
)


class PIDController:
    
    def __init__(self, kp=0.0, ki=0.0, kd=0.0, max_output=1.0, min_output=-1.0, 
                 deadzone=0.0, windup_limit=1.0):
        self.kp = kp
        self.ki = ki
        self.kd = kd
        
        self.max_output = max_output
        self.min_output = min_output
        self.deadzone = deadzone
        self.windup_limit = windup_limit
        
        self.integral = 0.0
        self.previous_error = 0.0 

    def update_parameters(self, kp, ki, kd, max_output, min_output, deadzone, windup_limit):
        #Allows runtime tuning from ROS 2 dynamic parameters.
        self.kp = kp
        self.ki = ki
        self.kd = kd
        self.max_output = max_output
        self.min_output = min_output
        self.deadzone = deadzone
        self.windup_limit = windup_limit

    def compute(self, error, dt):
        #Calculates the control output based on the current error and time step.
        # Target Deadzone: If error is negligible, output zero to prevent jitter
        if abs(error) <= self.deadzone:
            return 0.0

        # Zero-Crossing Reset (Conditional Integration): Clear memory if we overshoot
        if (error > 0 > self.previous_error) or (error < 0 < self.previous_error):
            self.integral = 0.0

        # Proportional term
        p_term = self.kp * error

        # Integral Anti-Windup: Accumulate error and clamp to physical limits
        self.integral += error * dt
        self.integral = max(min(self.integral, self.windup_limit), -self.windup_limit)
        i_term = self.ki * self.integral

        # Derivative term
        d_term = self.kd * (error - self.previous_error) / dt if dt > 0 else 0.0

        # Update previous error for the next loop
        self.previous_error = error

        # Calculate raw output
        output = p_term + i_term + d_term

        # Control Output Clamping
        return max(min(output, self.max_output), self.min_output)


def get_yaw_from_quaternion(q):
    #Converts a quaternion orientation into a 2D yaw angle in radians.
    siny_cosp = 2 * (q.w * q.z + q.x * q.y)
    cosy_cosp = 1 - 2 * (q.y * q.y + q.z * q.z)
    return math.atan2(siny_cosp, cosy_cosp)


class MoveXActionServer(Node):
    #Serves the move_x action with closed-loop PID and heading correction

    def __init__(self):
        super().__init__('move_x_server')

        # Declare dynamic parameters for runtime tuning without recompiling
        self.declare_parameters(
            namespace='',
            parameters=[
                ('kp_lin', 1.0),
                ('ki_lin', 0.0),
                ('kd_lin', 0.1),
                ('kp_ang', 1.5),
                ('ki_ang', 0.0),
                ('kd_ang', 0.1),
                ('linear_tolerance', 0.05),  # Target Deadzone
                ('max_linear_vel', 0.5),     # Control Output Clamping (Linear)
                ('max_angular_vel', 1.0),    # Control Output Clamping (Angular)
                ('max_integral', 1.0),       # Integral Anti-Windup Limit
                ('odom_timeout_s', 0.5)      # Watchdog Timer Threshold
            ]
        )

        # Reentrant so /odom keeps being delivered while a goal is executing.
        self.callback_group = ReentrantCallbackGroup()

        self._action_server = ActionServer(
            self,
            MoveX,
            'move_x',
            self.execute_callback,
            callback_group=self.callback_group)

        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.odom_sub = self.create_subscription(
            Odometry,
            '/odom',
            self.odom_callback,
            10,
            callback_group=self.callback_group)

        # Written from the odom callback, read from the goal thread.
        self._lock = threading.Lock()
        self.position = None
        self.yaw = None
        self.last_odom_time = None

        self.get_logger().info('move_x action server ready (Closed-Loop PID).')

    def odom_callback(self, msg: Odometry) -> None:
        position = msg.pose.pose.position
        orientation = msg.pose.pose.orientation
        current_yaw = get_yaw_from_quaternion(orientation)
        
        with self._lock:
            self.position = (position.x, position.y)
            self.yaw = current_yaw
            self.last_odom_time = self.get_clock().now()

    def _read_odom(self):
        with self._lock:
            return self.position, self.yaw, self.last_odom_time

    def _wait_for_first_odom(self) -> bool:
        #Block briefly for the first /odom message(False if none arrives)
        deadline = time.monotonic() + ODOM_STARTUP_TIMEOUT_S
        while time.monotonic() < deadline:
            position, _, _ = self._read_odom()
            if position is not None:
                return True
            time.sleep(1.0 / CONTROL_HZ)
        return False

    def stop_robot(self) -> None:
        self.cmd_vel_pub.publish(Twist())

    def _abort(self, goal_handle, message: str, travelled: float):
        self.get_logger().error(message)
        self.stop_robot()
        goal_handle.abort()
        return MoveX.Result(
            success=False, message=message, distance_travelled=travelled)

    def execute_callback(self, goal_handle):
        target_distance = goal_handle.request.target_distance
        self.get_logger().info(f'move_x goal: {target_distance:.3f} m')

        if not self._wait_for_first_odom():
            return self._abort(
                goal_handle,
                'No /odom received -- cannot measure distance.',
                0.0)

        start_position, start_yaw, _ = self._read_odom()
        start_x, start_y = start_position

        # Displacement is a magnitude, so the sign of the goal decides the direction
        goal_magnitude = abs(target_distance)
        direction = math.copysign(1.0, target_distance)

        travelled = 0.0
        start_time = self.get_clock().now()
        feedback = MoveX.Feedback()
        cmd = Twist()

        # Instantiate separate PID controllers for linear motion and heading correction
        linear_pid = PIDController()
        angular_pid = PIDController()

        period = 1.0 / CONTROL_HZ

        while rclpy.ok():
            if not goal_handle.is_active:
                self.stop_robot()
                return MoveX.Result(
                    success=False, message='Goal no longer active.',
                    distance_travelled=travelled)

            elapsed = (self.get_clock().now() - start_time).nanoseconds / 1e9
            if elapsed > GOAL_TIMEOUT_S:
                return self._abort(
                    goal_handle,
                    f'Timed out after {elapsed:.1f}s with '
                    f'{goal_magnitude - travelled:.3f} m still to cover.',
                    travelled)

            position, current_yaw, last_odom_time = self._read_odom()
            
            # WATCHDOG TIMER
            odom_age = (self.get_clock().now() - last_odom_time).nanoseconds / 1e9
            odom_timeout = self.get_parameter('odom_timeout_s').value
            if odom_age > odom_timeout:
                return self._abort(
                    goal_handle,
                    f'/odom went silent {odom_age:.1f}s ago.',
                    travelled)

            # Update PID parameters dynamically from ROS 2 parameter server
            max_v = self.get_parameter('max_linear_vel').value
            linear_pid.update_parameters(
                kp=self.get_parameter('kp_lin').value,
                ki=self.get_parameter('ki_lin').value,
                kd=self.get_parameter('kd_lin').value,
                max_output=max_v,
                min_output=0.0, # Handled by 'direction' multiplier
                deadzone=self.get_parameter('linear_tolerance').value,
                windup_limit=self.get_parameter('max_integral').value
            )

            max_w = self.get_parameter('max_angular_vel').value
            angular_pid.update_parameters(
                kp=self.get_parameter('kp_ang').value,
                ki=self.get_parameter('ki_ang').value,
                kd=self.get_parameter('kd_ang').value,
                max_output=max_w,
                min_output=-max_w,
                deadzone=0.0,
                windup_limit=self.get_parameter('max_integral').value
            )

            # CALCULATE ERRORS
            travelled = math.dist(position, (start_x, start_y))
            error_lin = goal_magnitude - travelled

            # Heading correction error from starting orientation
            error_ang = start_yaw - current_yaw
            
            # ANGLE NORMALIZATION 
            error_ang = math.atan2(math.sin(error_ang), math.cos(error_ang))

            # Target Deadzone Check
            if abs(error_lin) <= linear_pid.deadzone:
                break

            # Reverse driving adjustment for heading correction
            if direction < 0:
                error_ang = -error_ang

            # COMPUTE PID OUTPUTS
            output_lin = linear_pid.compute(error_lin, period)
            output_ang = angular_pid.compute(error_ang, period)

            # Assign scaled velocities to twist message
            cmd.linear.x = direction * output_lin
            cmd.angular.z = output_ang
            self.cmd_vel_pub.publish(cmd)

            feedback.current_distance = travelled
            goal_handle.publish_feedback(feedback)

            time.sleep(period)

        self.stop_robot()
        goal_handle.succeed()

        self.get_logger().info(f'move_x done: covered {travelled:.3f} m.')

        return MoveX.Result(
            success=True,
            message=f'Covered {travelled:.3f} m.',
            distance_travelled=math.copysign(travelled, direction))


def main(args=None):
    rclpy.init(args=args)
    node = MoveXActionServer()

    # the goal thread sleeps, so callbacks need other threads.
    executor = MultiThreadedExecutor()
    executor.add_node(node)

    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        executor.shutdown()
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()