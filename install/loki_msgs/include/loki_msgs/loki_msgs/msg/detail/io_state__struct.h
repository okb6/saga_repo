// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:msg/IOState.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__IO_STATE__STRUCT_H_
#define LOKI_MSGS__MSG__DETAIL__IO_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'version'
// Member 'analog_names'
// Member 'digital_names'
#include "rosidl_runtime_c/string.h"
// Member 'analog_values'
// Member 'digital_values'
// Member 'ranges'
// Member 'temps'
// Member 'humidities'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__struct.h"

/// Struct defined in msg/IOState in the package loki_msgs.
typedef struct loki_msgs__msg__IOState
{
  int16_t id;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String version;
  rosidl_runtime_c__String__Sequence analog_names;
  rosidl_runtime_c__int32__Sequence analog_values;
  rosidl_runtime_c__String__Sequence digital_names;
  rosidl_runtime_c__boolean__Sequence digital_values;
  rosidl_runtime_c__double__Sequence ranges;
  rosidl_runtime_c__double__Sequence temps;
  rosidl_runtime_c__double__Sequence humidities;
  sensor_msgs__msg__Imu imu;
} loki_msgs__msg__IOState;

// Struct for a sequence of loki_msgs__msg__IOState.
typedef struct loki_msgs__msg__IOState__Sequence
{
  loki_msgs__msg__IOState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__msg__IOState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__MSG__DETAIL__IO_STATE__STRUCT_H_
