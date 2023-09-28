// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:msg/BaseState.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__BASE_STATE__STRUCT_H_
#define LOKI_MSGS__MSG__DETAIL__BASE_STATE__STRUCT_H_

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
// Member 'prop_speed'
// Member 'prop_pos'
// Member 'steer_speed'
// Member 'steer_pos'
// Member 'steer_max_speed'
// Member 'channel'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/BaseState in the package loki_msgs.
typedef struct loki_msgs__msg__BaseState
{
  std_msgs__msg__Header header;
  int16_t drive_mode;
  rosidl_runtime_c__double__Sequence prop_speed;
  rosidl_runtime_c__double__Sequence prop_pos;
  rosidl_runtime_c__double__Sequence steer_speed;
  rosidl_runtime_c__double__Sequence steer_pos;
  rosidl_runtime_c__double__Sequence steer_max_speed;
  rosidl_runtime_c__int32__Sequence channel;
} loki_msgs__msg__BaseState;

// Struct for a sequence of loki_msgs__msg__BaseState.
typedef struct loki_msgs__msg__BaseState__Sequence
{
  loki_msgs__msg__BaseState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__msg__BaseState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__MSG__DETAIL__BASE_STATE__STRUCT_H_
