#!/usr/bin/env python3
import threading
import time

import rclpy
from nav_msgs.msg import Odometry
from rclpy.action import ActionClient
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from std_srvs.srv import SetBool
from pid_interfaces.action import YawPid
from pid_interfaces.action import LinearPid
GATE_SERVICE = 'toggle_walls_1_2'
time_out = 30.0


class SolveMaze(Node):

    def __init__(self):
        super().__init__('solve_maze')

        self.callback_group = ReentrantCallbackGroup()

        self.gate_client = self.create_client(
            SetBool, GATE_SERVICE, callback_group=self.callback_group)

        self.odom_seen = False
        self.odom_sub = self.create_subscription(
            Odometry, '/odom', self._odom_callback, 10,
            callback_group=self.callback_group)
        self.YawPid_client = ActionClient(
            self, YawPid, 'target_yaw', callback_group=self.callback_group)
        self.LinearPid_client = ActionClient(
            self, LinearPid, 'target_distance', callback_group=self.callback_group)

    def _odom_callback(self, _msg):
        self.odom_seen = True

    def wait_for_odom(self, timeout_s):
        deadline = time.monotonic() + timeout_s
        while time.monotonic() < deadline:
            if self.odom_seen:
                return True
            time.sleep(0.1)
        return False

    def open_gate(self , status):
        self.get_logger().info('Waiting for the gate service...')
        if not self.gate_client.wait_for_service(timeout_sec=time_out):
            self.get_logger().error('Gate service never appeared.')
            return False

        request = SetBool.Request()
        request.data = status
        future = self.gate_client.call_async(request)
        while not future.done():
            time.sleep(0.1)
        return future.result().success

    def send_goal_and_wait(self, action_client, goal_msg, label):
       
        if not action_client.wait_for_server(timeout_sec=time_out):
            self.get_logger().error(f'{label}: action server never appeared.')
            return False

        send_future = action_client.send_goal_async(goal_msg)
        while not send_future.done():
            time.sleep(0.1)

        goal_handle = send_future.result()
        if not goal_handle.accepted:
            self.get_logger().error(f'{label}: goal rejected.')
            return False

        result_future = goal_handle.get_result_async()
        while not result_future.done():
            time.sleep(0.1)

        result = result_future.result().result
        return result.success

    def solve_maze(self) -> bool:
        self.get_logger().info('Waiting for the robot to be spawned...')
        if not self.wait_for_odom(time_out):
            self.get_logger().error('No /odom -- robot was never spawned.')
            return False
        if not self.open_gate(True):
            self.get_logger().error('Failed to open the gate.')
            return False

      
        self.get_logger().info('--- first yaw  ---')
        pid_goal = YawPid.Goal()
        pid_goal.target_yaw = 1.64
        if not self.send_goal_and_wait(
                self.YawPid_client, pid_goal, 'first yaw'):
            self.get_logger().error('first yaw failed. Aborting.')
            return False


        self.get_logger().info('--- move forward  ---')
        pid_goal = LinearPid.Goal()
        pid_goal.target_distance = 1.25

        if not self.send_goal_and_wait(
            self.LinearPid_client, pid_goal, 'target distance'):
            self.get_logger().error('move forward failed. Aborting.')
            return False

        #robot is supposed to stop here or not , it depeneds on the distnaces , i don't remember if we stpped the robot or opened the gate early so it finishes faster 
       

        if not self.open_gate(False):
            self.get_logger().error('Failed to open the gate.')
            return False
        
        self.get_logger().info('--- move forward  ---')
        pid_goal = LinearPid.Goal()
        pid_goal.target_distance = 1.0
        if not self.send_goal_and_wait(
            self.LinearPid_client, pid_goal, 'target distance'):
            self.get_logger().error('move forward failed. Aborting.')
            return False


        self.get_logger().info('--- 2nd yaw  ---')
        pid_goal = YawPid.Goal()
        pid_goal.target_yaw = -0.2
        if not self.send_goal_and_wait(
            self.YawPid_client, pid_goal, 'second yaw'):
            self.get_logger().error('second yaw failed. Aborting.')
            return False
        self.get_logger().info('--- move forward  ---')
        pid_goal = LinearPid.Goal()
        pid_goal.target_distance = 5.0
        if not self.send_goal_and_wait(
            self.LinearPid_client, pid_goal, 'target distance'):
            self.get_logger().error('move forward failed. Aborting.')
            return False
        self.get_logger().info('Maze run complete.')
        return True
        


def main(args=None):
    rclpy.init(args=args)
    node = SolveMaze()

    executor = MultiThreadedExecutor()
    executor.add_node(node)
    spin_thread = threading.Thread(target=executor.spin, daemon=True)
    spin_thread.start()

    try:
        succeeded = node.solve_maze()
    finally:
        executor.shutdown()
        node.destroy_node()
        rclpy.shutdown()

    return 0 if succeeded else 1


if __name__ == '__main__':
    main()