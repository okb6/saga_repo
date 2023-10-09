cmake_minimum_required(VERSION 3.5)
project(robot_bringup)

# Find packages and libraries
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclcpp REQUIRED)
# find_package(loki_base REQUIRED)
find_package(loki_description)
find_package(loki_twist_mux)
# find_package(loki_teleop)

set(dependencies
  loki_base
  loki_description
  loki_twist_mux
  loki_teleop
  rclcpp
)


install(DIRECTORY launch 
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
