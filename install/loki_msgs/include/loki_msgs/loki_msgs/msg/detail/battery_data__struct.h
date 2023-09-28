// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:msg/BatteryData.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__BATTERY_DATA__STRUCT_H_
#define LOKI_MSGS__MSG__DETAIL__BATTERY_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_OFFLINE'.
enum
{
  loki_msgs__msg__BatteryData__STATUS_OFFLINE = -99
};

/// Constant 'STATUS_ONLINE'.
enum
{
  loki_msgs__msg__BatteryData__STATUS_ONLINE = -98
};

// Include directives for member types
// Member 'temperatures'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'battery_alarms'
#include "loki_msgs/msg/detail/battery_alarms__struct.h"

/// Struct defined in msg/BatteryData in the package loki_msgs.
typedef struct loki_msgs__msg__BatteryData
{
  int16_t battery_id;
  int16_t battery_state;
  rosidl_runtime_c__double__Sequence temperatures;
  loki_msgs__msg__BatteryAlarms battery_alarms;
  bool charge_fet_on;
  bool discharge_fet_on;
  double battery_voltage;
  double battery_current;
  int16_t state_of_charge;
  int16_t state_of_health;
  int16_t cycle_count;
  int16_t battery_capacity;
} loki_msgs__msg__BatteryData;

// Struct for a sequence of loki_msgs__msg__BatteryData.
typedef struct loki_msgs__msg__BatteryData__Sequence
{
  loki_msgs__msg__BatteryData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__msg__BatteryData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__MSG__DETAIL__BATTERY_DATA__STRUCT_H_
