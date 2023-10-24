// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
#define LOKI_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_H_

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

/// Struct defined in msg/MotorState in the package loki_msgs.
typedef struct loki_msgs__msg__MotorState
{
  rosidl_runtime_c__String type;
  float speed;
  float position;
  float motor_amps;
  int16_t relative_power;
} loki_msgs__msg__MotorState;

// Struct for a sequence of loki_msgs__msg__MotorState.
typedef struct loki_msgs__msg__MotorState__Sequence
{
  loki_msgs__msg__MotorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__msg__MotorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
