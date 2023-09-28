# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_loki_twist_mux_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED loki_twist_mux_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(loki_twist_mux_FOUND FALSE)
  elseif(NOT loki_twist_mux_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(loki_twist_mux_FOUND FALSE)
  endif()
  return()
endif()
set(_loki_twist_mux_CONFIG_INCLUDED TRUE)

# output package information
if(NOT loki_twist_mux_FIND_QUIETLY)
  message(STATUS "Found loki_twist_mux: 2.0.0 (${loki_twist_mux_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'loki_twist_mux' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${loki_twist_mux_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(loki_twist_mux_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${loki_twist_mux_DIR}/${_extra}")
endforeach()
