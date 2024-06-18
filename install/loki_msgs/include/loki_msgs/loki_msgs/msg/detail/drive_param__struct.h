// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:msg/DriveParam.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__DRIVE_PARAM__STRUCT_H_
#define LOKI_MSGS__MSG__DETAIL__DRIVE_PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DriveParam in the package loki_msgs.
typedef struct loki_msgs__msg__DriveParam
{
  int32_t index;
  rosidl_runtime_c__String type;
  double value;
} loki_msgs__msg__DriveParam;

// Struct for a sequence of loki_msgs__msg__DriveParam.
typedef struct loki_msgs__msg__DriveParam__Sequence
{
  loki_msgs__msg__DriveParam * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__msg__DriveParam__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__MSG__DETAIL__DRIVE_PARAM__STRUCT_H_
