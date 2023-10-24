// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from loki_msgs:msg/BatteryAlarms.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__BATTERY_ALARMS__STRUCT_H_
#define LOKI_MSGS__MSG__DETAIL__BATTERY_ALARMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BatteryAlarms in the package loki_msgs.
typedef struct loki_msgs__msg__BatteryAlarms
{
  bool over_voltage_protection;
  bool under_voltage_protection;
  bool over_temperature_protection;
  bool under_temperature_protection;
  bool over_charge_current;
  bool over_discharge_current;
  bool can_communication_fail;
  bool cell_voltage_sensing_fault;
  bool bms_fail;
  bool short_circuit_discharge;
  bool temperature_sensing_fault;
  bool over_voltage_fault;
  bool under_voltage_fault;
  bool pack_voltage_sensing_fault;
} loki_msgs__msg__BatteryAlarms;

// Struct for a sequence of loki_msgs__msg__BatteryAlarms.
typedef struct loki_msgs__msg__BatteryAlarms__Sequence
{
  loki_msgs__msg__BatteryAlarms * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} loki_msgs__msg__BatteryAlarms__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOKI_MSGS__MSG__DETAIL__BATTERY_ALARMS__STRUCT_H_
