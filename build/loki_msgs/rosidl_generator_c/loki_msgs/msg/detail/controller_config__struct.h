// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:msg/ControllerConfig.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_CONFIG__STRUCT_H_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'type'
// Member 'version'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ControllerConfig in the package loki_msgs.
typedef struct loki_msgs__msg__ControllerConfig
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String version;
  int16_t can_id;
  int8_t drive_direction;
  int16_t home_speed;
  int32_t home_count;
} loki_msgs__msg__ControllerConfig;

// Struct for a sequence of loki_msgs__msg__ControllerConfig.
typedef struct loki_msgs__msg__ControllerConfig__Sequence
{
  loki_msgs__msg__ControllerConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__msg__ControllerConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_CONFIG__STRUCT_H_
