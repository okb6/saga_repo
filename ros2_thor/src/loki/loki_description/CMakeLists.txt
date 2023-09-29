cmake_minimum_required(VERSION 3.5)
project(loki_description)

# Find packages and libraries for ROS 2
find_package(ament_cmake REQUIRED)
find_package(controller_manager REQUIRED)
find_package(robot_state_publisher REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(xacro REQUIRED)

# Declare the package dependencies
set(dependencies
  controller_manager
  robot_state_publisher
  rclcpp
  rclpy
  xacro
)

# Generate the executable or libraries if needed

# Install launch files, meshes, URDF, and config files
install(DIRECTORY launch meshes urdf 
  DESTINATION share/${PROJECT_NAME}
)

ament_package()


