// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from loki_msgs:msg/BatteryData.idl
// generated code does not contain a copyright notice
#include "loki_msgs/msg/detail/battery_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "loki_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "loki_msgs/msg/detail/battery_data__struct.h"
#include "loki_msgs/msg/detail/battery_data__functions.h"
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

#include "loki_msgs/msg/detail/battery_alarms__functions.h"  // battery_alarms
#include "rosidl_runtime_c/primitives_sequence.h"  // temperatures
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // temperatures

// forward declare type support functions
size_t get_serialized_size_loki_msgs__msg__BatteryAlarms(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_loki_msgs__msg__BatteryAlarms(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, msg, BatteryAlarms)();


using _BatteryData__ros_msg_type = loki_msgs__msg__BatteryData;

static bool _BatteryData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BatteryData__ros_msg_type * ros_message = static_cast<const _BatteryData__ros_msg_type *>(untyped_ros_message);
  // Field name: battery_id
  {
    cdr << ros_message->battery_id;
  }

  // Field name: battery_state
  {
    cdr << ros_message->battery_state;
  }

  // Field name: temperatures
  {
    size_t size = ros_message->temperatures.size;
    auto array_ptr = ros_message->temperatures.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: battery_alarms
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, loki_msgs, msg, BatteryAlarms
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->battery_alarms, cdr))
    {
      return false;
    }
  }

  // Field name: charge_fet_on
  {
    cdr << (ros_message->charge_fet_on ? true : false);
  }

  // Field name: discharge_fet_on
  {
    cdr << (ros_message->discharge_fet_on ? true : false);
  }

  // Field name: battery_voltage
  {
    cdr << ros_message->battery_voltage;
  }

  // Field name: battery_current
  {
    cdr << ros_message->battery_current;
  }

  // Field name: state_of_charge
  {
    cdr << ros_message->state_of_charge;
  }

  // Field name: state_of_health
  {
    cdr << ros_message->state_of_health;
  }

  // Field name: cycle_count
  {
    cdr << ros_message->cycle_count;
  }

  // Field name: battery_capacity
  {
    cdr << ros_message->battery_capacity;
  }

  return true;
}

static bool _BatteryData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BatteryData__ros_msg_type * ros_message = static_cast<_BatteryData__ros_msg_type *>(untyped_ros_message);
  // Field name: battery_id
  {
    cdr >> ros_message->battery_id;
  }

  // Field name: battery_state
  {
    cdr >> ros_message->battery_state;
  }

  // Field name: temperatures
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->temperatures.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->temperatures);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->temperatures, size)) {
      fprintf(stderr, "failed to create array for field 'temperatures'");
      return false;
    }
    auto array_ptr = ros_message->temperatures.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: battery_alarms
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, loki_msgs, msg, BatteryAlarms
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->battery_alarms))
    {
      return false;
    }
  }

  // Field name: charge_fet_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->charge_fet_on = tmp ? true : false;
  }

  // Field name: discharge_fet_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->discharge_fet_on = tmp ? true : false;
  }

  // Field name: battery_voltage
  {
    cdr >> ros_message->battery_voltage;
  }

  // Field name: battery_current
  {
    cdr >> ros_message->battery_current;
  }

  // Field name: state_of_charge
  {
    cdr >> ros_message->state_of_charge;
  }

  // Field name: state_of_health
  {
    cdr >> ros_message->state_of_health;
  }

  // Field name: cycle_count
  {
    cdr >> ros_message->cycle_count;
  }

  // Field name: battery_capacity
  {
    cdr >> ros_message->battery_capacity;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_loki_msgs
size_t get_serialized_size_loki_msgs__msg__BatteryData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BatteryData__ros_msg_type * ros_message = static_cast<const _BatteryData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name battery_id
  {
    size_t item_size = sizeof(ros_message->battery_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_state
  {
    size_t item_size = sizeof(ros_message->battery_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperatures
  {
    size_t array_size = ros_message->temperatures.size;
    auto array_ptr = ros_message->temperatures.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_alarms

  current_alignment += get_serialized_size_loki_msgs__msg__BatteryAlarms(
    &(ros_message->battery_alarms), current_alignment);
  // field.name charge_fet_on
  {
    size_t item_size = sizeof(ros_message->charge_fet_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name discharge_fet_on
  {
    size_t item_size = sizeof(ros_message->discharge_fet_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_voltage
  {
    size_t item_size = sizeof(ros_message->battery_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_current
  {
    size_t item_size = sizeof(ros_message->battery_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state_of_charge
  {
    size_t item_size = sizeof(ros_message->state_of_charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state_of_health
  {
    size_t item_size = sizeof(ros_message->state_of_health);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cycle_count
  {
    size_t item_size = sizeof(ros_message->cycle_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_capacity
  {
    size_t item_size = sizeof(ros_message->battery_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BatteryData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_loki_msgs__msg__BatteryData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_loki_msgs
size_t max_serialized_size_loki_msgs__msg__BatteryData(
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

  // member: battery_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: battery_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: temperatures
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: battery_alarms
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_loki_msgs__msg__BatteryAlarms(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: charge_fet_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: discharge_fet_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: battery_voltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: battery_current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: state_of_charge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: state_of_health
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: cycle_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: battery_capacity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BatteryData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_loki_msgs__msg__BatteryData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BatteryData = {
  "loki_msgs::msg",
  "BatteryData",
  _BatteryData__cdr_serialize,
  _BatteryData__cdr_deserialize,
  _BatteryData__get_serialized_size,
  _BatteryData__max_serialized_size
};

static rosidl_message_type_support_t _BatteryData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BatteryData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, msg, BatteryData)() {
  return &_BatteryData__type_support;
}

#if defined(__cplusplus)
}
#endif
