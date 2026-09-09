# TASK12.2
- to run the simulation and the nodes : 
## in the first terminal : 
```

cd ~/TASK_12.2/TASK12.2/task12_2_ws
colcon build --symlink-install --packages-select pid_turtlebot
source install/setup.bash
ros2 launch pid_turtlebot turtle_pid.launch.py
```
## in the gazebo simulation terminal : 
```
ros2 launch maze_control maze_simulation_tb3.launch.py
```
## Note
- since the /cmd_vel topic can still hold values to be published even after the simulation is closed . to prevent the robot from moving before running the nodes once again ,paste this in terminal first then launch the maze  :
 ```
  pkill -9 -f yaw_pid
  pkill -9 -f linear_pid
  pkill -9 -f solve_maze
  pkill -9 -f gz
  pkill -9 -f gazebo
```
