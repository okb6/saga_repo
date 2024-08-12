project(loki_rviz)
cmake_minimum_required(VERSION 3.22)
find_package(ament_cmake REQUIRED)

install(
  DIRECTORY rviz
  DESTINATION share/${PROJECT_NAME}
)

ament_package()