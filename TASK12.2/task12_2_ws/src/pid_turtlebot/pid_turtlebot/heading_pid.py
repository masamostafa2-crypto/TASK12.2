import math

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

    def compute(self, error, dt):
        if dt <= 0.0:
            return 0.0

        if abs(error) < self.deadzone:
            self.integral = 0.0  # Reset integral inside deadzone
            self.previous_error = error
            return 0.0


        if (error * self.previous_error) < 0.0:
            self.integral = 0.0


        p_term = self.kp * error


        self.integral += error * dt

        self.integral = max(min(self.integral, self.windup_limit), -self.windup_limit)
        i_term = self.ki * self.integral


        derivative = (error - self.previous_error) / dt
        d_term = self.kd * derivative

        output = p_term + i_term + d_term

        self.previous_error = error

        output = max(min(output, self.max_output), self.min_output)

        return output

    def reset(self):
        self.integral = 0.0
        self.previous_error = 0.0