# Install script for directory: /home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/cairlab/Documents/GitHub/saga_repo/install/loki_msgs")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/loki_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/loki_msgs/loki_msgs" TYPE DIRECTORY FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_generator_c/loki_msgs/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/environment" TYPE FILE FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/environment" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/libloki_msgs__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_generator_c.so"
         OLD_RPATH "/home/cairlab/Documents/GitHub/saga_repo/install/sensor_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/geometry_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/std_msgs/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_generator_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/loki_msgs/loki_msgs" TYPE DIRECTORY FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_typesupport_fastrtps_c/loki_msgs/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/libloki_msgs__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs:/home/cairlab/Documents/GitHub/saga_repo/install/sensor_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/geometry_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/std_msgs/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/loki_msgs/loki_msgs" TYPE DIRECTORY FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_generator_cpp/loki_msgs/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/loki_msgs/loki_msgs" TYPE DIRECTORY FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_typesupport_fastrtps_cpp/loki_msgs/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/libloki_msgs__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/home/cairlab/Documents/GitHub/saga_repo/install/sensor_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/geometry_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/std_msgs/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/loki_msgs/loki_msgs" TYPE DIRECTORY FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_typesupport_introspection_c/loki_msgs/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/libloki_msgs__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs:/home/cairlab/Documents/GitHub/saga_repo/install/sensor_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/geometry_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/std_msgs/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/libloki_msgs__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_c.so"
         OLD_RPATH "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs:/home/cairlab/Documents/GitHub/saga_repo/install/sensor_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/geometry_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/std_msgs/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/loki_msgs/loki_msgs" TYPE DIRECTORY FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_typesupport_introspection_cpp/loki_msgs/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/libloki_msgs__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/home/cairlab/Documents/GitHub/saga_repo/install/sensor_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/geometry_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/std_msgs/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/libloki_msgs__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_cpp.so"
         OLD_RPATH "/home/cairlab/Documents/GitHub/saga_repo/install/sensor_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/geometry_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/std_msgs/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/environment" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/environment" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs-2.0.0-py3.10.egg-info" TYPE DIRECTORY FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_python/loki_msgs/loki_msgs.egg-info/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs" TYPE DIRECTORY FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_generator_py/loki_msgs/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3.10" "-m" "compileall"
        "/home/cairlab/Documents/GitHub/saga_repo/install/loki_msgs/local/lib/python3.10/dist-packages/loki_msgs"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs" TYPE SHARED_LIBRARY FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_generator_py/loki_msgs/loki_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_generator_py/loki_msgs:/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs:/home/cairlab/Documents/GitHub/saga_repo/install/sensor_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/geometry_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/std_msgs/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs" TYPE SHARED_LIBRARY FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_generator_py/loki_msgs/loki_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_generator_py/loki_msgs:/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs:/home/cairlab/Documents/GitHub/saga_repo/install/sensor_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/geometry_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/std_msgs/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs" TYPE SHARED_LIBRARY FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_generator_py/loki_msgs/loki_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_generator_py/loki_msgs:/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs:/home/cairlab/Documents/GitHub/saga_repo/install/sensor_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/geometry_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/std_msgs/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/loki_msgs/loki_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_generator_py.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_generator_py.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_generator_py/loki_msgs/libloki_msgs__rosidl_generator_py.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_generator_py.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_generator_py.so"
         OLD_RPATH "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs:/home/cairlab/Documents/GitHub/saga_repo/install/sensor_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/geometry_msgs/lib:/home/cairlab/Documents/GitHub/saga_repo/install/std_msgs/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libloki_msgs__rosidl_generator_py.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/msg/ThorvaldIO.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/msg/BaseState.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/msg/BatteryAlarms.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/msg/BatteryArray.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/msg/BatteryData.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/msg/CANFrame.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/msg/ControllerArray.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/msg/ControllerConfig.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/msg/ControllerData.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/msg/ControllerInfo.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/msg/ControllerState.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/msg/DriveParam.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/msg/EnclosureState.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/msg/IOArray.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/msg/IOState.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/msg/MotorState.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/msg/ControllerStatusFlag.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/DigitalWrite.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/CanID.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/DriveParams.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/MotorControllerSetup.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/SwitchBool.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/BatteryVars.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/ContArray.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/CotMap.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/DeviceCmds.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/DriveCmds.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/EvalCanBuffer.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/GetSetBool.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/HomesteeringAll.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/InitPltf.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/MotCot.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/PosZero.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/PosZeroAll.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/SetBools.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/SimDrive.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/StateBase.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/StatesOfIO.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_adapter/loki_msgs/srv/Params.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/msg/ThorvaldIO.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/msg/BaseState.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/msg/BatteryAlarms.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/msg/BatteryArray.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/msg/BatteryData.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/msg/CANFrame.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/msg/ControllerArray.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/msg/ControllerConfig.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/msg/ControllerData.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/msg/ControllerInfo.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/msg/ControllerState.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/msg/DriveParam.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/msg/EnclosureState.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/msg/IOArray.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/msg/IOState.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/msg/MotorState.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/msg" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/msg/ControllerStatusFlag.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/DigitalWrite.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/DigitalWrite_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/DigitalWrite_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/CanID.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/CanID_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/CanID_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/DriveParams.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/DriveParams_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/DriveParams_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/MotorControllerSetup.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/MotorControllerSetup_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/MotorControllerSetup_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/SwitchBool.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/SwitchBool_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/SwitchBool_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/BatteryVars.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/BatteryVars_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/BatteryVars_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/ContArray.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/ContArray_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/ContArray_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/CotMap.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/CotMap_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/CotMap_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/DeviceCmds.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/DeviceCmds_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/DeviceCmds_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/DriveCmds.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/DriveCmds_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/DriveCmds_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/EvalCanBuffer.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/EvalCanBuffer_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/EvalCanBuffer_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/GetSetBool.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/GetSetBool_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/GetSetBool_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/HomesteeringAll.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/HomesteeringAll_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/HomesteeringAll_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/InitPltf.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/InitPltf_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/InitPltf_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/MotCot.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/MotCot_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/MotCot_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/PosZero.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/PosZero_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/PosZero_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/PosZeroAll.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/PosZeroAll_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/PosZeroAll_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/SetBools.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/SetBools_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/SetBools_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/SimDrive.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/SimDrive_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/SimDrive_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/StateBase.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/StateBase_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/StateBase_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/StatesOfIO.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/StatesOfIO_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/StatesOfIO_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/srv/Params.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/Params_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/srv" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/srv/Params_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/loki_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/loki_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/environment" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/environment" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_index/share/ament_index/resource_index/packages/loki_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_cExport.cmake"
         "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_typesupport_fastrtps_cExport.cmake"
         "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/export_loki_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_typesupport_fastrtps_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_typesupport_fastrtps_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/export_loki_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/export_loki_msgs__rosidl_typesupport_fastrtps_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_cppExport.cmake"
         "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_cppExport.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_typesupport_fastrtps_cppExport.cmake"
         "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/export_loki_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_typesupport_fastrtps_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_typesupport_fastrtps_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/export_loki_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/export_loki_msgs__rosidl_typesupport_fastrtps_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_introspection_cExport.cmake"
         "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_introspection_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_introspection_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_introspection_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_introspection_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_cExport.cmake"
         "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_introspection_cppExport.cmake"
         "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_introspection_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_introspection_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_introspection_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_cppExport.cmake"
         "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/loki_msgs__rosidl_typesupport_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_pyExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_pyExport.cmake"
         "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_pyExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_pyExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_pyExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_pyExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/CMakeFiles/Export/share/loki_msgs/cmake/export_loki_msgs__rosidl_generator_pyExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs/cmake" TYPE FILE FILES
    "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_core/loki_msgsConfig.cmake"
    "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/ament_cmake_core/loki_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/loki_msgs" TYPE FILE FILES "/home/cairlab/Documents/GitHub/saga_repo/ros2_thor/src/loki/loki_msgs/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/loki_msgs__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/cairlab/Documents/GitHub/saga_repo/build/loki_msgs/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
