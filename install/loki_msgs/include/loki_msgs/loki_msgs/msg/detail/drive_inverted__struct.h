// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:msg/DriveInverted.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__DRIVE_INVERTED__STRUCT_H_
#define LOKI_MSGS__MSG__DETAIL__DRIVE_INVERTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DriveInverted in the package loki_msgs.
typedef struct loki_msgs__msg__DriveInverted
{
  bool drive;
} loki_msgs__msg__DriveInverted;

// Struct for a sequence of loki_msgs__msg__DriveInverted.
typedef struct loki_msgs__msg__DriveInverted__Sequence
{
  loki_msgs__msg__DriveInverted * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__msg__DriveInverted__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__MSG__DETAIL__DRIVE_INVERTED__STRUCT_H_
