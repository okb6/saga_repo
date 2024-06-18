// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:msg/ControllerStatusFlag.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATUS_FLAG__STRUCT_H_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATUS_FLAG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'status_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ControllerStatusFlag in the package loki_msgs.
typedef struct loki_msgs__msg__ControllerStatusFlag
{
  rosidl_runtime_c__String status_name;
  bool status_value;
} loki_msgs__msg__ControllerStatusFlag;

// Struct for a sequence of loki_msgs__msg__ControllerStatusFlag.
typedef struct loki_msgs__msg__ControllerStatusFlag__Sequence
{
  loki_msgs__msg__ControllerStatusFlag * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__msg__ControllerStatusFlag__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATUS_FLAG__STRUCT_H_
