// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:msg/ControllerInfo.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_INFO__STRUCT_H_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'drive_directions'
// Member 'home_counts'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ControllerInfo in the package loki_msgs.
typedef struct loki_msgs__msg__ControllerInfo
{
  rosidl_runtime_c__int16__Sequence drive_directions;
  rosidl_runtime_c__int32__Sequence home_counts;
} loki_msgs__msg__ControllerInfo;

// Struct for a sequence of loki_msgs__msg__ControllerInfo.
typedef struct loki_msgs__msg__ControllerInfo__Sequence
{
  loki_msgs__msg__ControllerInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__msg__ControllerInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_INFO__STRUCT_H_
