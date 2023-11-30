cmake_minimum_required(VERSION 3.8)
project(loki_bringup)


# Find required ROS2 packages
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
# find_package(loki_base REQUIRED)
find_package(loki_description REQUIRED)
find_package(loki_twist_mux REQUIRED)

# Add the package's include directory to the include path
include_directories(include)

# Install the 'launch' directory to the appropriate share location
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

# Export information about other packages that depend on this package
ament_export_include_directories(include)
ament_package()
