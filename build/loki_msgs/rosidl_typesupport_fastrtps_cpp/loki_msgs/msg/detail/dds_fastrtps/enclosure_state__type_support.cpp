// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from loki_msgs:msg/EnclosureState.idl
// generated code does not contain a copyright notice
#include "loki_msgs/msg/detail/enclosure_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "loki_msgs/msg/detail/enclosure_state__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_loki_msgs
cdr_serialize(
  const loki_msgs::msg::EnclosureState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: communication_state
  cdr << ros_message.communication_state;
  // Member: esd_ok
  cdr << (ros_message.esd_ok ? true : false);
  // Member: contactors_on
  cdr << (ros_message.contactors_on ? true : false);
  // Member: motor_power_control_on
  cdr << (ros_message.motor_power_control_on ? true : false);
  // Member: rl3_on
  cdr << (ros_message.rl3_on ? true : false);
  // Member: rl5_on
  cdr << (ros_message.rl5_on ? true : false);
  // Member: digital_pin_numbers
  {
    cdr << ros_message.digital_pin_numbers;
  }
  // Member: digital_pin_values
  {
    cdr << ros_message.digital_pin_values;
  }
  // Member: analog_pin_numbers
  {
    cdr << ros_message.analog_pin_numbers;
  }
  // Member: analog_pin_values
  {
    cdr << ros_message.analog_pin_values;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_loki_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  loki_msgs::msg::EnclosureState & ros_message)
{
  // Member: communication_state
  cdr >> ros_message.communication_state;

  // Member: esd_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.esd_ok = tmp ? true : false;
  }

  // Member: contactors_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.contactors_on = tmp ? true : false;
  }

  // Member: motor_power_control_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.motor_power_control_on = tmp ? true : false;
  }

  // Member: rl3_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rl3_on = tmp ? true : false;
  }

  // Member: rl5_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rl5_on = tmp ? true : false;
  }

  // Member: digital_pin_numbers
  {
    cdr >> ros_message.digital_pin_numbers;
  }

  // Member: digital_pin_values
  {
    cdr >> ros_message.digital_pin_values;
  }

  // Member: analog_pin_numbers
  {
    cdr >> ros_message.analog_pin_numbers;
  }

  // Member: analog_pin_values
  {
    cdr >> ros_message.analog_pin_values;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_loki_msgs
get_serialized_size(
  const loki_msgs::msg::EnclosureState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: communication_state
  {
    size_t item_size = sizeof(ros_message.communication_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: esd_ok
  {
    size_t item_size = sizeof(ros_message.esd_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: contactors_on
  {
    size_t item_size = sizeof(ros_message.contactors_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_power_control_on
  {
    size_t item_size = sizeof(ros_message.motor_power_control_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rl3_on
  {
    size_t item_size = sizeof(ros_message.rl3_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rl5_on
  {
    size_t item_size = sizeof(ros_message.rl5_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: digital_pin_numbers
  {
    size_t array_size = ros_message.digital_pin_numbers.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.digital_pin_numbers[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: digital_pin_values
  {
    size_t array_size = ros_message.digital_pin_values.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.digital_pin_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: analog_pin_numbers
  {
    size_t array_size = ros_message.analog_pin_numbers.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.analog_pin_numbers[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: analog_pin_values
  {
    size_t array_size = ros_message.analog_pin_values.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.analog_pin_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_loki_msgs
max_serialized_size_EnclosureState(
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


  // Member: communication_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: esd_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: contactors_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motor_power_control_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rl3_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rl5_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: digital_pin_numbers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: digital_pin_values
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: analog_pin_numbers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: analog_pin_values
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _EnclosureState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const loki_msgs::msg::EnclosureState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EnclosureState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<loki_msgs::msg::EnclosureState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EnclosureState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const loki_msgs::msg::EnclosureState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EnclosureState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EnclosureState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EnclosureState__callbacks = {
  "loki_msgs::msg",
  "EnclosureState",
  _EnclosureState__cdr_serialize,
  _EnclosureState__cdr_deserialize,
  _EnclosureState__get_serialized_size,
  _EnclosureState__max_serialized_size
};

static rosidl_message_type_support_t _EnclosureState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EnclosureState__callbacks,
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
get_message_type_support_handle<loki_msgs::msg::EnclosureState>()
{
  return &loki_msgs::msg::typesupport_fastrtps_cpp::_EnclosureState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, loki_msgs, msg, EnclosureState)() {
  return &loki_msgs::msg::typesupport_fastrtps_cpp::_EnclosureState__handle;
}

#ifdef __cplusplus
}
#endif
