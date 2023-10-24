// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:msg/ControllerArray.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_ARRAY__STRUCT_H_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_ARRAY__STRUCT_H_

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
// Member 'controller_data'
#include "loki_msgs/msg/detail/controller_data__struct.h"

/// Struct defined in msg/ControllerArray in the package loki_msgs.
typedef struct loki_msgs__msg__ControllerArray
{
  std_msgs__msg__Header header;
  loki_msgs__msg__ControllerData__Sequence controller_data;
} loki_msgs__msg__ControllerArray;

// Struct for a sequence of loki_msgs__msg__ControllerArray.
typedef struct loki_msgs__msg__ControllerArray__Sequence
{
  loki_msgs__msg__ControllerArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__msg__ControllerArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_ARRAY__STRUCT_H_
