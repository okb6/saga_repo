// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from loki_msgs:msg/ControllerInfo.idl
// generated code does not contain a copyright notice
#include "loki_msgs/msg/detail/controller_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "loki_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "loki_msgs/msg/detail/controller_info__struct.h"
#include "loki_msgs/msg/detail/controller_info__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // drive_directions, home_counts
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // drive_directions, home_counts

// forward declare type support functions


using _ControllerInfo__ros_msg_type = loki_msgs__msg__ControllerInfo;

static bool _ControllerInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControllerInfo__ros_msg_type * ros_message = static_cast<const _ControllerInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: drive_directions
  {
    size_t size = ros_message->drive_directions.size;
    auto array_ptr = ros_message->drive_directions.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: home_counts
  {
    size_t size = ros_message->home_counts.size;
    auto array_ptr = ros_message->home_counts.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _ControllerInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControllerInfo__ros_msg_type * ros_message = static_cast<_ControllerInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: drive_directions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->drive_directions.data) {
      rosidl_runtime_c__int16__Sequence__fini(&ros_message->drive_directions);
    }
    if (!rosidl_runtime_c__int16__Sequence__init(&ros_message->drive_directions, size)) {
      fprintf(stderr, "failed to create array for field 'drive_directions'");
      return false;
    }
    auto array_ptr = ros_message->drive_directions.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: home_counts
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->home_counts.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->home_counts);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->home_counts, size)) {
      fprintf(stderr, "failed to create array for field 'home_counts'");
      return false;
    }
    auto array_ptr = ros_message->home_counts.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_loki_msgs
size_t get_serialized_size_loki_msgs__msg__ControllerInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControllerInfo__ros_msg_type * ros_message = static_cast<const _ControllerInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name drive_directions
  {
    size_t array_size = ros_message->drive_directions.size;
    auto array_ptr = ros_message->drive_directions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name home_counts
  {
    size_t array_size = ros_message->home_counts.size;
    auto array_ptr = ros_message->home_counts.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ControllerInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_loki_msgs__msg__ControllerInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_loki_msgs
size_t max_serialized_size_loki_msgs__msg__ControllerInfo(
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

  // member: drive_directions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: home_counts
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

static size_t _ControllerInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_loki_msgs__msg__ControllerInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControllerInfo = {
  "loki_msgs::msg",
  "ControllerInfo",
  _ControllerInfo__cdr_serialize,
  _ControllerInfo__cdr_deserialize,
  _ControllerInfo__get_serialized_size,
  _ControllerInfo__max_serialized_size
};

static rosidl_message_type_support_t _ControllerInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControllerInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, msg, ControllerInfo)() {
  return &_ControllerInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
