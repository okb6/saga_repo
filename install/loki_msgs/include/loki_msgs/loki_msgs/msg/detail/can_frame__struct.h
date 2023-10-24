// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:msg/CANFrame.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CAN_FRAME__STRUCT_H_
#define LOKI_MSGS__MSG__DETAIL__CAN_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CANFrame in the package loki_msgs.
typedef struct loki_msgs__msg__CANFrame
{
  uint32_t id;
  uint8_t length;
  rosidl_runtime_c__uint8__Sequence data;
} loki_msgs__msg__CANFrame;

// Struct for a sequence of loki_msgs__msg__CANFrame.
typedef struct loki_msgs__msg__CANFrame__Sequence
{
  loki_msgs__msg__CANFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__msg__CANFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__MSG__DETAIL__CAN_FRAME__STRUCT_H_
