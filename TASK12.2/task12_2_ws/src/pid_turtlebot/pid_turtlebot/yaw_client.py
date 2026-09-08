
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle
from std_srvs.srv import SetBool
from pid_interfaces.action import yaw_pid 


class yawClient(Node):
    def __init__(self):
       
        super().__init__('yaw_client')

        # Create an ActionClient for the target_yaw action server
        self._action_client = ActionClient(self, yaw_pid, 'target_yaw')

    def send_goal(self, angle_rad):
        # Wait for the action server to be available
        self._action_client.wait_for_server()
        goal_msg = yaw_pid.Goal()
        goal_msg.target_yaw =  angle_rad 
        # Log the goal message being sent
        self.get_logger().info(f'Sending goal: target_yaw={goal_msg.target_yaw}')

        # Send the goal asynchronously and add a callback for feedback
        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg, feedback_callback=self.feedback_callback)
        
        # Add a done callback to handle the result after goal is accepted
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        # Callback function to handle the result of the goal response
        self.goal_handle: ClientGoalHandle = future.result()  # Get the goal handle from the future result
        if self.goal_handle.accepted:
            # If the goal was accepted, log the success and wait for the result
            self.get_logger().info('Goal accepted :)')
            self.goal_handle.get_result_async().add_done_callback(self.get_result_callback)
        else:
            # If the goal was rejected, log the rejection
            self.get_logger().info('Goal rejected :(')

    def get_result_callback(self, future):
        # Callback function to handle the final result of the goal execution
        result = future.result().result  # Get the result of the goal
        self.get_logger().info("Result " + str(result.success))  # Log the result of the goal execution
        self.get_logger().info('Reached Goal :)')
    def feedback_callback(self, feedback_msg):
        # Callback function to handle feedback messages during goal execution
        current_yaw = feedback_msg.feedback.current_yaw  # Get the current yaw from feedback
        # Log the received feedback
        self.get_logger().info(f"Feedback received - Current Yaw: {current_yaw}")

def main(args=None):
    rclpy.init(args=args)
    client = yawClient()
    angle_rad = float(input("Enter the desired yaw angle in radians: "))
    client.send_goal(angle_rad)
    rclpy.spin(client)
if __name__ == '__main__':
    main()