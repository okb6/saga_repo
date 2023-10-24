// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:msg/EnclosureState.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__ENCLOSURE_STATE__STRUCT_H_
#define LOKI_MSGS__MSG__DETAIL__ENCLOSURE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'WAS_NEVER_ONLINE'.
enum
{
  loki_msgs__msg__EnclosureState__WAS_NEVER_ONLINE = -3
};

/// Constant 'LAST_WAS_UNKNOWN'.
enum
{
  loki_msgs__msg__EnclosureState__LAST_WAS_UNKNOWN = -2
};

/// Constant 'LAST_WAS_ERROR'.
enum
{
  loki_msgs__msg__EnclosureState__LAST_WAS_ERROR = -1
};

/// Constant 'WAS_ONLINE'.
enum
{
  loki_msgs__msg__EnclosureState__WAS_ONLINE = 0
};

/// Constant 'IS_ONLINE'.
enum
{
  loki_msgs__msg__EnclosureState__IS_ONLINE = 1
};

// Include directives for member types
// Member 'digital_pin_numbers'
// Member 'digital_pin_values'
// Member 'analog_pin_numbers'
// Member 'analog_pin_values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/EnclosureState in the package loki_msgs.
typedef struct loki_msgs__msg__EnclosureState
{
  int16_t communication_state;
  bool esd_ok;
  bool contactors_on;
  bool motor_power_control_on;
  bool rl3_on;
  bool rl5_on;
  rosidl_runtime_c__int32__Sequence digital_pin_numbers;
  rosidl_runtime_c__boolean__Sequence digital_pin_values;
  rosidl_runtime_c__int32__Sequence analog_pin_numbers;
  rosidl_runtime_c__int32__Sequence analog_pin_values;
} loki_msgs__msg__EnclosureState;

// Struct for a sequence of loki_msgs__msg__EnclosureState.
typedef struct loki_msgs__msg__EnclosureState__Sequence
{
  loki_msgs__msg__EnclosureState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__msg__EnclosureState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__MSG__DETAIL__ENCLOSURE_STATE__STRUCT_H_
