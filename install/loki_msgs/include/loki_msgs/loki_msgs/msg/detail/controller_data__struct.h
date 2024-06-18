// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:msg/ControllerData.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_DATA__STRUCT_H_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'controller_config'
#include "loki_msgs/msg/detail/controller_config__struct.h"
// Member 'controller_state'
#include "loki_msgs/msg/detail/controller_state__struct.h"
// Member 'motor_state'
#include "loki_msgs/msg/detail/motor_state__struct.h"

/// Struct defined in msg/ControllerData in the package loki_msgs.
typedef struct loki_msgs__msg__ControllerData
{
  loki_msgs__msg__ControllerConfig controller_config;
  loki_msgs__msg__ControllerState controller_state;
  loki_msgs__msg__MotorState__Sequence motor_state;
} loki_msgs__msg__ControllerData;

// Struct for a sequence of loki_msgs__msg__ControllerData.
typedef struct loki_msgs__msg__ControllerData__Sequence
{
  loki_msgs__msg__ControllerData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__msg__ControllerData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_DATA__STRUCT_H_
