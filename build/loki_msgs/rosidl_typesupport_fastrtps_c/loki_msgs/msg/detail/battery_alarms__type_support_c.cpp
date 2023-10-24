// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from loki_msgs:msg/BatteryAlarms.idl
// generated code does not contain a copyright notice
#include "loki_msgs/msg/detail/battery_alarms__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "loki_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "loki_msgs/msg/detail/battery_alarms__struct.h"
#include "loki_msgs/msg/detail/battery_alarms__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _BatteryAlarms__ros_msg_type = loki_msgs__msg__BatteryAlarms;

static bool _BatteryAlarms__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BatteryAlarms__ros_msg_type * ros_message = static_cast<const _BatteryAlarms__ros_msg_type *>(untyped_ros_message);
  // Field name: over_voltage_protection
  {
    cdr << (ros_message->over_voltage_protection ? true : false);
  }

  // Field name: under_voltage_protection
  {
    cdr << (ros_message->under_voltage_protection ? true : false);
  }

  // Field name: over_temperature_protection
  {
    cdr << (ros_message->over_temperature_protection ? true : false);
  }

  // Field name: under_temperature_protection
  {
    cdr << (ros_message->under_temperature_protection ? true : false);
  }

  // Field name: over_charge_current
  {
    cdr << (ros_message->over_charge_current ? true : false);
  }

  // Field name: over_discharge_current
  {
    cdr << (ros_message->over_discharge_current ? true : false);
  }

  // Field name: can_communication_fail
  {
    cdr << (ros_message->can_communication_fail ? true : false);
  }

  // Field name: cell_voltage_sensing_fault
  {
    cdr << (ros_message->cell_voltage_sensing_fault ? true : false);
  }

  // Field name: bms_fail
  {
    cdr << (ros_message->bms_fail ? true : false);
  }

  // Field name: short_circuit_discharge
  {
    cdr << (ros_message->short_circuit_discharge ? true : false);
  }

  // Field name: temperature_sensing_fault
  {
    cdr << (ros_message->temperature_sensing_fault ? true : false);
  }

  // Field name: over_voltage_fault
  {
    cdr << (ros_message->over_voltage_fault ? true : false);
  }

  // Field name: under_voltage_fault
  {
    cdr << (ros_message->under_voltage_fault ? true : false);
  }

  // Field name: pack_voltage_sensing_fault
  {
    cdr << (ros_message->pack_voltage_sensing_fault ? true : false);
  }

  return true;
}

static bool _BatteryAlarms__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BatteryAlarms__ros_msg_type * ros_message = static_cast<_BatteryAlarms__ros_msg_type *>(untyped_ros_message);
  // Field name: over_voltage_protection
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->over_voltage_protection = tmp ? true : false;
  }

  // Field name: under_voltage_protection
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->under_voltage_protection = tmp ? true : false;
  }

  // Field name: over_temperature_protection
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->over_temperature_protection = tmp ? true : false;
  }

  // Field name: under_temperature_protection
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->under_temperature_protection = tmp ? true : false;
  }

  // Field name: over_charge_current
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->over_charge_current = tmp ? true : false;
  }

  // Field name: over_discharge_current
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->over_discharge_current = tmp ? true : false;
  }

  // Field name: can_communication_fail
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_communication_fail = tmp ? true : false;
  }

  // Field name: cell_voltage_sensing_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cell_voltage_sensing_fault = tmp ? true : false;
  }

  // Field name: bms_fail
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->bms_fail = tmp ? true : false;
  }

  // Field name: short_circuit_discharge
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->short_circuit_discharge = tmp ? true : false;
  }

  // Field name: temperature_sensing_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->temperature_sensing_fault = tmp ? true : false;
  }

  // Field name: over_voltage_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->over_voltage_fault = tmp ? true : false;
  }

  // Field name: under_voltage_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->under_voltage_fault = tmp ? true : false;
  }

  // Field name: pack_voltage_sensing_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pack_voltage_sensing_fault = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_loki_msgs
size_t get_serialized_size_loki_msgs__msg__BatteryAlarms(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BatteryAlarms__ros_msg_type * ros_message = static_cast<const _BatteryAlarms__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name over_voltage_protection
  {
    size_t item_size = sizeof(ros_message->over_voltage_protection);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name under_voltage_protection
  {
    size_t item_size = sizeof(ros_message->under_voltage_protection);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name over_temperature_protection
  {
    size_t item_size = sizeof(ros_message->over_temperature_protection);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name under_temperature_protection
  {
    size_t item_size = sizeof(ros_message->under_temperature_protection);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name over_charge_current
  {
    size_t item_size = sizeof(ros_message->over_charge_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name over_discharge_current
  {
    size_t item_size = sizeof(ros_message->over_discharge_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_communication_fail
  {
    size_t item_size = sizeof(ros_message->can_communication_fail);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cell_voltage_sensing_fault
  {
    size_t item_size = sizeof(ros_message->cell_voltage_sensing_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bms_fail
  {
    size_t item_size = sizeof(ros_message->bms_fail);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name short_circuit_discharge
  {
    size_t item_size = sizeof(ros_message->short_circuit_discharge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature_sensing_fault
  {
    size_t item_size = sizeof(ros_message->temperature_sensing_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name over_voltage_fault
  {
    size_t item_size = sizeof(ros_message->over_voltage_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name under_voltage_fault
  {
    size_t item_size = sizeof(ros_message->under_voltage_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pack_voltage_sensing_fault
  {
    size_t item_size = sizeof(ros_message->pack_voltage_sensing_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BatteryAlarms__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_loki_msgs__msg__BatteryAlarms(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_loki_msgs
size_t max_serialized_size_loki_msgs__msg__BatteryAlarms(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: over_voltage_protection
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: under_voltage_protection
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: over_temperature_protection
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: under_temperature_protection
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: over_charge_current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: over_discharge_current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_communication_fail
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cell_voltage_sensing_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bms_fail
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: short_circuit_discharge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: temperature_sensing_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: over_voltage_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: under_voltage_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pack_voltage_sensing_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _BatteryAlarms__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_loki_msgs__msg__BatteryAlarms(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BatteryAlarms = {
  "loki_msgs::msg",
  "BatteryAlarms",
  _BatteryAlarms__cdr_serialize,
  _BatteryAlarms__cdr_deserialize,
  _BatteryAlarms__get_serialized_size,
  _BatteryAlarms__max_serialized_size
};

static rosidl_message_type_support_t _BatteryAlarms__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BatteryAlarms,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, msg, BatteryAlarms)() {
  return &_BatteryAlarms__type_support;
}

#if defined(__cplusplus)
}
#endif
