// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from loki_msgs:msg/BatteryData.idl
// generated code does not contain a copyright notice
#include "loki_msgs/msg/detail/battery_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "loki_msgs/msg/detail/battery_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace loki_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const loki_msgs::msg::BatteryAlarms &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  loki_msgs::msg::BatteryAlarms &);
size_t get_serialized_size(
  const loki_msgs::msg::BatteryAlarms &,
  size_t current_alignment);
size_t
max_serialized_size_BatteryAlarms(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace loki_msgs


namespace loki_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_loki_msgs
cdr_serialize(
  const loki_msgs::msg::BatteryData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: battery_id
  cdr << ros_message.battery_id;
  // Member: battery_state
  cdr << ros_message.battery_state;
  // Member: temperatures
  {
    cdr << ros_message.temperatures;
  }
  // Member: battery_alarms
  loki_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.battery_alarms,
    cdr);
  // Member: charge_fet_on
  cdr << (ros_message.charge_fet_on ? true : false);
  // Member: discharge_fet_on
  cdr << (ros_message.discharge_fet_on ? true : false);
  // Member: battery_voltage
  cdr << ros_message.battery_voltage;
  // Member: battery_current
  cdr << ros_message.battery_current;
  // Member: state_of_charge
  cdr << ros_message.state_of_charge;
  // Member: state_of_health
  cdr << ros_message.state_of_health;
  // Member: cycle_count
  cdr << ros_message.cycle_count;
  // Member: battery_capacity
  cdr << ros_message.battery_capacity;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_loki_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  loki_msgs::msg::BatteryData & ros_message)
{
  // Member: battery_id
  cdr >> ros_message.battery_id;

  // Member: battery_state
  cdr >> ros_message.battery_state;

  // Member: temperatures
  {
    cdr >> ros_message.temperatures;
  }

  // Member: battery_alarms
  loki_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.battery_alarms);

  // Member: charge_fet_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.charge_fet_on = tmp ? true : false;
  }

  // Member: discharge_fet_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.discharge_fet_on = tmp ? true : false;
  }

  // Member: battery_voltage
  cdr >> ros_message.battery_voltage;

  // Member: battery_current
  cdr >> ros_message.battery_current;

  // Member: state_of_charge
  cdr >> ros_message.state_of_charge;

  // Member: state_of_health
  cdr >> ros_message.state_of_health;

  // Member: cycle_count
  cdr >> ros_message.cycle_count;

  // Member: battery_capacity
  cdr >> ros_message.battery_capacity;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_loki_msgs
get_serialized_size(
  const loki_msgs::msg::BatteryData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: battery_id
  {
    size_t item_size = sizeof(ros_message.battery_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_state
  {
    size_t item_size = sizeof(ros_message.battery_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperatures
  {
    size_t array_size = ros_message.temperatures.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.temperatures[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_alarms

  current_alignment +=
    loki_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.battery_alarms, current_alignment);
  // Member: charge_fet_on
  {
    size_t item_size = sizeof(ros_message.charge_fet_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: discharge_fet_on
  {
    size_t item_size = sizeof(ros_message.discharge_fet_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_voltage
  {
    size_t item_size = sizeof(ros_message.battery_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_current
  {
    size_t item_size = sizeof(ros_message.battery_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: state_of_charge
  {
    size_t item_size = sizeof(ros_message.state_of_charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: state_of_health
  {
    size_t item_size = sizeof(ros_message.state_of_health);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cycle_count
  {
    size_t item_size = sizeof(ros_message.cycle_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_capacity
  {
    size_t item_size = sizeof(ros_message.battery_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_loki_msgs
max_serialized_size_BatteryData(
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


  // Member: battery_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: battery_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: temperatures
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: battery_alarms
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        loki_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BatteryAlarms(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: charge_fet_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: discharge_fet_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: battery_voltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: battery_current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: state_of_charge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: state_of_health
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: cycle_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: battery_capacity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _BatteryData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const loki_msgs::msg::BatteryData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BatteryData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<loki_msgs::msg::BatteryData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BatteryData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const loki_msgs::msg::BatteryData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BatteryData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BatteryData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BatteryData__callbacks = {
  "loki_msgs::msg",
  "BatteryData",
  _BatteryData__cdr_serialize,
  _BatteryData__cdr_deserialize,
  _BatteryData__get_serialized_size,
  _BatteryData__max_serialized_size
};

static rosidl_message_type_support_t _BatteryData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BatteryData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace loki_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_loki_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<loki_msgs::msg::BatteryData>()
{
  return &loki_msgs::msg::typesupport_fastrtps_cpp::_BatteryData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, loki_msgs, msg, BatteryData)() {
  return &loki_msgs::msg::typesupport_fastrtps_cpp::_BatteryData__handle;
}

#ifdef __cplusplus
}
#endif
