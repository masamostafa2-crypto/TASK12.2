import math 

import rclpy 
from rclpy.node import Node 
from nav_msgs.msg import Odometry 
from rcl_interfaces.msg import SetParametersResult


# heading correction pid controller 

class HeadingPID:

    def __init__(self,kp,ki,kd, integral_limit):
        self.kp=kp
        self.ki=ki
        self.kd=kd

        self.integral=0.0
        self.last_error=0.0
        self.first_update=True

        self.integral_limit=integral_limit #maximum allowed integral value

        self.add_on_set_parameters_callback(self.parameter_callback)

    def parameter_callback(self, params):

        for param in params:
            if param.name == 'heading_kp':
                self.heading_pid.kp = param.value

            elif param.name == 'heading_ki':
                self.heading_pid.ki = param.value

            elif param.name == 'heading_kd':
                self.heading_pid.kd = param.value

            elif param.name == 'heading_integral_limit':
                self.heading_pid.integral_limit = param.value

            elif param.name == 'heading_deadzone':
                self.heading_deadzone = param.value

            elif param.name == 'max_angular_velocity':
                self.max_angular_velocity = param.value

        return SetParametersResult(successful=True)

    def reset(self):

        self.integral=0.0
        self.last_error=None
        self.first_update=True

    def update(self,error,dt):

        if dt<=0.0:
            return 0.0

        # equations of derivative, integral term 
        p= self.kp*error

        self.integral+=error*dt

        # Zero-Crossing Reset: if the error change sign 

        if (self.last_error is not None and error*self.last_error<0.0):
            self.integral=0.0

        else:
            self.integral+=error*dt # only while the error keeps the same sign 

        #Integral Anti-Windup (Clamping)
        # this step for keeping the integral within its anti-windup limit
        self.initegral=max(-self.integral_limit, min(self.integral, self.integral_limit))

        # then
        i=self.ki*self.integral

        if self.first_update:
            derivative=0.0
            self.first_update=False

        else:
            derivative=(error-self.last_error)/dt

        d=self.kd*derivative

        # save the updated error for the next update
        self.last_error=error

        # then PID output
        PID= p+i+d

class HeadingFeedback(Node):


    def __init__(self):
        super().__init__("heading_feedback")

        #firstly subscribe to /odom to receive the robot orientation
        self.current_yaw=0.0
        self.odom_received=False

        self.odom_subscriber=self.create_subscription(
            Odom,
            "/odom",
            self.odom_callback,
            10
        )

        # heading PID gains 
        self.heading_pid=HeadingPID(kp=self.get_parameter("heading_kp").value,
                                    ki=self.get_parameter('heading_ki').value,
                                    kd=self.get_parameter('heading_kd').value,
                                    integral_limit=self.get_parameter('heading_integral_limit').value)

        #deadzone
        self.heading_deadzone=self.get_parameter("heading_deadzone").value

        # maximum angular correction
        self.max_angular_velocity=self.get_parameter("max_angular_velocity").value

        # put the start yaw equel None beacouse the start yaw will be saved when the movement starts
        self.start_yaw=None

        # Dynamic parameters 
        self.declare_parameter("heading_kp",1.0)
        self.declare_parameter("heading_ki",0.0)
        self.declare_parameter("heading_kd",0.0)

        self.declare_parameter("heading_iintegral_limit",0.5)
        self.declare_parameter("max_angular_velocity",0.5)
        self.declare_paremeter("heading_deadzone",0.02)

    # function to get current yaw from /odom
    def odom_callback(self,msg):

        q=msg.pose.pose.orientation

        # Quaternion components 

        x= q.x
        y= q.y
        z= q.z
        w= q.w

        # ->yaw
        t3 = 2.0*(w*z+x*y)
        t4 = 1.0-2.0*(y*y+z*z)

        self.current_yaw=math.atan2(t3,t4)
        self.odom_received=True


    # call this function when move_robot_x starts 
    def start_heading_feedback(self):

        if not self.odom_revived:
            return False

        self.start_yaw=self.current_yaw

        # to reset PID repeatly 
        self.Heading_pid.reset()
        return True

    # calculate normalize heading error 
    def heading_error(self):

        if self.start_yaw is None:
            return 0.0

        error=self.start_yaw-self.current_yaw

        error=math.atan2(math.sin(error),math.cos(error))

        return error 

    # finally heading correction 

    def heading_correction(self,dt):

        heading_error=self.heading_error()

        # condition to compare the error with deadzone 
        # the idea: if the heading error is very small, no correction is needed
        if abs(heading_error)<self.heading_deadzone: # we compare the absolute becouse the desdzone treated with error not the direction of robot
            return 0.0

        correction=self.heading_pid_update(heading_error,dt)

        #control output clamping
        correction = max(-self.max_angular_velocity,min(correction, self.max_angular_velocity))

        return correction




    #def main(args=None):

    #rclpy.init(args=args)

    #node = HeadingFeedback()

    #rclpy.spin(node)

    #node.destroy_node()
    #rclpy.shutdown()


#if __name__ == '__main__':
#    main()