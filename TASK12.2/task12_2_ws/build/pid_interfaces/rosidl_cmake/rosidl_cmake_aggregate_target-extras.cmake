# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target pid_interfaces::pid_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${pid_interfaces_TARGETS}.
if(pid_interfaces_TARGETS AND NOT TARGET pid_interfaces::pid_interfaces)
  add_library(pid_interfaces::pid_interfaces INTERFACE IMPORTED)
  set_target_properties(pid_interfaces::pid_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${pid_interfaces_TARGETS}")
endif()
