cmake_minimum_required(VERSION 3.8)
project(rasberry_gazebo)

# Find packages and libraries
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(control_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(trajectory_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(gazebo_ros_pkgs REQUIRED)
find_package(nav2_map_server REQUIRED)
find_package(rcl_interfaces REQUIRED)
find_package(rcl_action REQUIRED)
find_package(navigation2 REQUIRED)
find_package(robot_localization REQUIRED)
find_package(robot_state_publisher REQUIRED)

# Install scripts and directories
install(PROGRAMS
  scripts/move_base_seq.py
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  launch
  worlds
  DESTINATION share/${PROJECT_NAME}
)

# Specify dependencies of the project (if any libraries or executables are defined, add them here)
# ament_target_dependencies(
#   ${PROJECT_NAME}
#   ...
# )

ament_package()