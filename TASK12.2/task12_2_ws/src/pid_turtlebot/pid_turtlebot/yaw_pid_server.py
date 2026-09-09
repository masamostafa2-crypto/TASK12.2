#!/usr/bin/env python3


import rclpy
import math
import threading
import time
from std_msgs.msg import Float32
from pid_interfaces.action import YawPid 
from nav_msgs.msg import Odometry
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from geometry_msgs.msg import Twist
from rclpy.node import Node
def normalize_angle(angle: float) -> float:
    return math.atan2(math.sin(angle), math.cos(angle))

class YawPid_Node(Node):
    def __init__(self):
        super().__init__('YawPid_node')
        self.get_logger().info("Node Started")
        self.callback_group = ReentrantCallbackGroup()
        self._action_server = ActionServer(
        self,
        YawPid,
        'target_yaw',
        self.execute_callback,
         callback_group=self.callback_group)
        self.odom_sub = self.create_subscription(
                    Odometry,
                    '/odom',
                    self.odom_callback,
                    10,
                    callback_group=self.callback_group)
        self.lock = threading.Lock()        # <-- add this
        self.current_yaw = None    
        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)         # <-- add this too, if not already present
    def odom_callback(self, msg):
        q = msg.pose.pose.orientation
        yaw = math.atan2(2.0 * (q.w * q.z + q.x * q.y),
                          1.0 - 2.0 * (q.y * q.y + q.z * q.z))
        with self.lock:
            self.current_yaw = yaw
    
    def execute_callback(self, goal_handle):
   
        target_yaw = goal_handle.request.target_yaw
        self.get_logger().info(f'Received target_yaw = {target_yaw}')
        Kp=1.0
        Ki=0.06
        Kd=0.01
        deadzone = 0.14
        integral = 0.0
        previous_error = 0.0
        max_angular_speed = 1.2
        feedback = YawPid.Feedback()
        msg = Twist()
        while True:
            with self.lock:
                current_yaw = self.current_yaw

            if current_yaw is None:
                time.sleep(0.1)
                continue

            error = normalize_angle(target_yaw - current_yaw)

            if abs(error) < deadzone:
               self.cmd_vel_pub.publish(Twist())   # stop immediately
               time.sleep(3)                     # let the robot fully settle
               with self.lock:
                 current_yaw = self.current_yaw  # re-read fresh odom
               error = normalize_angle(target_yaw - current_yaw)
               if abs(error) < deadzone:
                break
    # else: fall through and keep correcting
               continue

            integral += error
            derivative = error - previous_error
            previous_error = error
            angular_speed = Kp * error + Ki * integral + Kd * derivative
            MIN_ANGULAR_SPEED = 0.15
            if 0 < abs(angular_speed) < MIN_ANGULAR_SPEED:
              angular_speed = math.copysign(MIN_ANGULAR_SPEED, angular_speed)

            angular_speed = max(min(angular_speed, max_angular_speed), -max_angular_speed)
            angular_speed = max(min(angular_speed, max_angular_speed), -max_angular_speed)
            msg.angular.z = angular_speed
            self.cmd_vel_pub.publish(msg)
            self.get_logger().info(f'current_yaw = {current_yaw}, target_yaw = {target_yaw}, error = {error}')
            feedback.current_yaw = current_yaw
            goal_handle.publish_feedback(feedback)

            time.sleep(0.1)

        self.cmd_vel_pub.publish(Twist())
        goal_handle.succeed()

        result = YawPid.Result()
        result.success = True
        result.message = 'Reached target yaw.'
        return result


def main(args=None):
    rclpy.init(args=args)
    node = YawPid_Node()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    finally:
        executor.shutdown()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()