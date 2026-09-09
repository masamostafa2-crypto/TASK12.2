cmake_minimum_required(VERSION 3.8)
project(pid_interfaces)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wdeprecated)
endif()

# Find the critical build tools
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(action_msgs REQUIRED)

# Generate the custom action modules
rosidl_generate_interfaces(${PROJECT_NAME}
  "action/YawPid.action"
  "action/LinearPid.action"
  DEPENDENCIES action_msgs
)

ament_package()
