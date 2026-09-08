#!/usr/bin/env python3
import rclpy
import math
import threading
import time
from std_msgs.msg import Float32
from pid_interfaces.action import yaw_pid 
from nav_msgs.msg import Odometry
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from geometry_msgs.msg import Twist
from rclpy.node import Node
def normalize_angle(angle: float) -> float:
    return math.atan2(math.sin(angle), math.cos(angle))

integral = 0.0
previous_err_yaw = 0.0
output_yaw = 0.0
class yaw_PID_Node(Node):
    def __init__(self):
        super().__init__('yaw_pid_node')
        self.get_logger().info("Node Started")
        
        self._action_server = ActionServer(
            self,
            yaw_pid,
            'target_yaw',
            self.execute_callback)
        self.odom_sub = self.create_subscription(
                    Odometry,
                    '/odom',
                    self.odom_callback,
                    10,
                    callback_group=self.callback_group)
    def odom_callback(self, msg):
        q = msg.pose.pose.orientation
        yaw = math.atan2(2.0 * (q.w * q.z + q.x * q.y),
                          1.0 - 2.0 * (q.y * q.y + q.z * q.z))
        with self.lock:
            self.current_yaw = yaw

    def execute_callback(self, goal_handle):
        target_yaw = goal_handle.request.target_yaw

        Kp=2.0
        Ki=0.1
        Kd=0.01
        deadzone = 0.01
        integral = 0.0
        previous_error = 0.0
        feedback = yaw_pid.Feedback()
        msg = Twist()
        while True:
            with self.lock:
                current_yaw = self.current_yaw

            if current_yaw is None:
                time.sleep(0.1)
                continue

            error = normalize_angle(target_yaw - current_yaw)

            if abs(error) < deadzone:
                break

            integral += error
            derivative = error - previous_error
            previous_error = error

            msg.angular.z = Kp * error + Ki * integral + Kd * derivative
            self.cmd_vel_pub.publish(msg)

            feedback.current_yaw = current_yaw
            goal_handle.publish_feedback(feedback)

            time.sleep(0.1)

        self.cmd_vel_pub.publish(Twist())
        goal_handle.succeed()

        result = yaw_pid.Result()
        result.success = True
        result.message = 'Reached target yaw.'
        return result


def main(args=None):
    rclpy.init(args=args)
    node = yaw_PID_Node()
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