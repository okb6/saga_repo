// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATE__STRUCT_H_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'temps'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'status_flags'
#include "loki_msgs/msg/detail/controller_status_flag__struct.h"

/// Struct defined in msg/ControllerState in the package loki_msgs.
typedef struct loki_msgs__msg__ControllerState
{
  int8_t controller_mode;
  float battery_volts;
  float battery_amps;
  rosidl_runtime_c__int16__Sequence temps;
  loki_msgs__msg__ControllerStatusFlag__Sequence status_flags;
} loki_msgs__msg__ControllerState;

// Struct for a sequence of loki_msgs__msg__ControllerState.
typedef struct loki_msgs__msg__ControllerState__Sequence
{
  loki_msgs__msg__ControllerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__msg__ControllerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATE__STRUCT_H_
