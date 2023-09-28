// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:msg/ThorvaldIO.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__THORVALD_IO__STRUCT_H_
#define LOKI_MSGS__MSG__DETAIL__THORVALD_IO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'analogs'
// Member 'digitals'
// Member 'ranges'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ThorvaldIO in the package loki_msgs.
typedef struct loki_msgs__msg__ThorvaldIO
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__int16__Sequence analogs;
  rosidl_runtime_c__boolean__Sequence digitals;
  rosidl_runtime_c__int16__Sequence ranges;
} loki_msgs__msg__ThorvaldIO;

// Struct for a sequence of loki_msgs__msg__ThorvaldIO.
typedef struct loki_msgs__msg__ThorvaldIO__Sequence
{
  loki_msgs__msg__ThorvaldIO * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__msg__ThorvaldIO__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__MSG__DETAIL__THORVALD_IO__STRUCT_H_
