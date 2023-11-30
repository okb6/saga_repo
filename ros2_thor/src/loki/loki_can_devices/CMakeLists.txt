cmake_minimum_required(VERSION 3.8)
project(loki_can_devices)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(std_srvs REQUIRED)
find_package(angles REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(loki_msgs REQUIRED)

include(ConfigExtras.cmake)

add_library(
  can
  SHARED 
  src/RoboteqFbl2360.cpp 
  src/RoboteqFbl2360Diff.cpp 
  src/kc_battery.cpp 
  src/can_io_v1pcb.cpp 
  src/can_io_v1uv.cpp 
  src/can_frame.cpp 
  src/can_line_socketcan.cpp
  src/can_ctrl_pltf.cpp
  src/can_line_dummy.cpp
)

add_executable(
  pytocpp 
  src/py_to_cpp.cpp
)

target_include_directories(can 
  PUBLIC  
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
    "$<INSTALL_INTERFACE:include/${PROJECT_NAME}>")

target_link_libraries(pytocpp
  PUBLIC 
  can
  ${Boost_LIBRARIES})


ament_target_dependencies(
  can
  PUBLIC
  loki_msgs 
  rclcpp
  angles
  std_msgs
  std_srvs
)
ament_target_dependencies(
  pytocpp
  PUBLIC
  rclcpp
  loki_msgs
  std_srvs
)


#Install
install(
  DIRECTORY include/
  DESTINATION include
)

install(DIRECTORY 
  launch
  DESTINATION share/${PROJECT_NAME}
)

install(
  TARGETS can
  EXPORT export_${PROJECT_NAME} 
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib 
  RUNTIME DESTINATION bin
  INCLUDES DESTINATION include
)

install(TARGETS pytocpp
  DESTINATION lib/${PROJECT_NAME})


ament_export_dependencies(loki_msgs rclcpp angles std_msgs std_srvs)
ament_export_include_directories("include/${PROJECT_NAME}")
ament_export_libraries(can)

ament_package(CONFIG_EXTRAS ConfigExtras.cmake)