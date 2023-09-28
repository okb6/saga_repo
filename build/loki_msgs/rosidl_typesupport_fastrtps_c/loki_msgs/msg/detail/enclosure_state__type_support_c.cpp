// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from loki_msgs:msg/EnclosureState.idl
// generated code does not contain a copyright notice
#include "loki_msgs/msg/detail/enclosure_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "loki_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "loki_msgs/msg/detail/enclosure_state__struct.h"
#include "loki_msgs/msg/detail/enclosure_state__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // analog_pin_numbers, analog_pin_values, digital_pin_numbers, digital_pin_values
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // analog_pin_numbers, analog_pin_values, digital_pin_numbers, digital_pin_values

// forward declare type support functions


using _EnclosureState__ros_msg_type = loki_msgs__msg__EnclosureState;

static bool _EnclosureState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EnclosureState__ros_msg_type * ros_message = static_cast<const _EnclosureState__ros_msg_type *>(untyped_ros_message);
  // Field name: communication_state
  {
    cdr << ros_message->communication_state;
  }

  // Field name: esd_ok
  {
    cdr << (ros_message->esd_ok ? true : false);
  }

  // Field name: contactors_on
  {
    cdr << (ros_message->contactors_on ? true : false);
  }

  // Field name: motor_power_control_on
  {
    cdr << (ros_message->motor_power_control_on ? true : false);
  }

  // Field name: rl3_on
  {
    cdr << (ros_message->rl3_on ? true : false);
  }

  // Field name: rl5_on
  {
    cdr << (ros_message->rl5_on ? true : false);
  }

  // Field name: digital_pin_numbers
  {
    size_t size = ros_message->digital_pin_numbers.size;
    auto array_ptr = ros_message->digital_pin_numbers.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: digital_pin_values
  {
    size_t size = ros_message->digital_pin_values.size;
    auto array_ptr = ros_message->digital_pin_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: analog_pin_numbers
  {
    size_t size = ros_message->analog_pin_numbers.size;
    auto array_ptr = ros_message->analog_pin_numbers.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: analog_pin_values
  {
    size_t size = ros_message->analog_pin_values.size;
    auto array_ptr = ros_message->analog_pin_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _EnclosureState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EnclosureState__ros_msg_type * ros_message = static_cast<_EnclosureState__ros_msg_type *>(untyped_ros_message);
  // Field name: communication_state
  {
    cdr >> ros_message->communication_state;
  }

  // Field name: esd_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->esd_ok = tmp ? true : false;
  }

  // Field name: contactors_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->contactors_on = tmp ? true : false;
  }

  // Field name: motor_power_control_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->motor_power_control_on = tmp ? true : false;
  }

  // Field name: rl3_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rl3_on = tmp ? true : false;
  }

  // Field name: rl5_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rl5_on = tmp ? true : false;
  }

  // Field name: digital_pin_numbers
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->digital_pin_numbers.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->digital_pin_numbers);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->digital_pin_numbers, size)) {
      fprintf(stderr, "failed to create array for field 'digital_pin_numbers'");
      return false;
    }
    auto array_ptr = ros_message->digital_pin_numbers.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: digital_pin_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->digital_pin_values.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->digital_pin_values);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->digital_pin_values, size)) {
      fprintf(stderr, "failed to create array for field 'digital_pin_values'");
      return false;
    }
    auto array_ptr = ros_message->digital_pin_values.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: analog_pin_numbers
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->analog_pin_numbers.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->analog_pin_numbers);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->analog_pin_numbers, size)) {
      fprintf(stderr, "failed to create array for field 'analog_pin_numbers'");
      return false;
    }
    auto array_ptr = ros_message->analog_pin_numbers.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: analog_pin_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->analog_pin_values.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->analog_pin_values);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->analog_pin_values, size)) {
      fprintf(stderr, "failed to create array for field 'analog_pin_values'");
      return false;
    }
    auto array_ptr = ros_message->analog_pin_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_loki_msgs
size_t get_serialized_size_loki_msgs__msg__EnclosureState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EnclosureState__ros_msg_type * ros_message = static_cast<const _EnclosureState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name communication_state
  {
    size_t item_size = sizeof(ros_message->communication_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name esd_ok
  {
    size_t item_size = sizeof(ros_message->esd_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name contactors_on
  {
    size_t item_size = sizeof(ros_message->contactors_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_power_control_on
  {
    size_t item_size = sizeof(ros_message->motor_power_control_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rl3_on
  {
    size_t item_size = sizeof(ros_message->rl3_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rl5_on
  {
    size_t item_size = sizeof(ros_message->rl5_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name digital_pin_numbers
  {
    size_t array_size = ros_message->digital_pin_numbers.size;
    auto array_ptr = ros_message->digital_pin_numbers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name digital_pin_values
  {
    size_t array_size = ros_message->digital_pin_values.size;
    auto array_ptr = ros_message->digital_pin_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name analog_pin_numbers
  {
    size_t array_size = ros_message->analog_pin_numbers.size;
    auto array_ptr = ros_message->analog_pin_numbers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name analog_pin_values
  {
    size_t array_size = ros_message->analog_pin_values.size;
    auto array_ptr = ros_message->analog_pin_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EnclosureState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_loki_msgs__msg__EnclosureState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_loki_msgs
size_t max_serialized_size_loki_msgs__msg__EnclosureState(
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

  // member: communication_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: esd_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: contactors_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motor_power_control_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rl3_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rl5_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: digital_pin_numbers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: digital_pin_values
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: analog_pin_numbers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: analog_pin_values
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

static size_t _EnclosureState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_loki_msgs__msg__EnclosureState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EnclosureState = {
  "loki_msgs::msg",
  "EnclosureState",
  _EnclosureState__cdr_serialize,
  _EnclosureState__cdr_deserialize,
  _EnclosureState__get_serialized_size,
  _EnclosureState__max_serialized_size
};

static rosidl_message_type_support_t _EnclosureState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EnclosureState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, msg, EnclosureState)() {
  return &_EnclosureState__type_support;
}

#if defined(__cplusplus)
}
#endif
