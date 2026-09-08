import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/masa/TASK_12.2/TASK12.2/task12_2_ws/install/maze_control'
