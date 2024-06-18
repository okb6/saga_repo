// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from loki_msgs:srv/MotCot.idl
// generated code does not contain a copyright notice
#include "loki_msgs/srv/detail/mot_cot__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "loki_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "loki_msgs/srv/detail/mot_cot__struct.h"
#include "loki_msgs/srv/detail/mot_cot__functions.h"
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


using _MotCot_Request__ros_msg_type = loki_msgs__srv__MotCot_Request;

static bool _MotCot_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotCot_Request__ros_msg_type * ros_message = static_cast<const _MotCot_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: can_id
  {
    cdr << ros_message->can_id;
  }

  // Field name: setup_id
  {
    cdr << ros_message->setup_id;
  }

  // Field name: setup_value
  {
    cdr << ros_message->setup_value;
  }

  return true;
}

static bool _MotCot_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotCot_Request__ros_msg_type * ros_message = static_cast<_MotCot_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: can_id
  {
    cdr >> ros_message->can_id;
  }

  // Field name: setup_id
  {
    cdr >> ros_message->setup_id;
  }

  // Field name: setup_value
  {
    cdr >> ros_message->setup_value;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_loki_msgs
size_t get_serialized_size_loki_msgs__srv__MotCot_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotCot_Request__ros_msg_type * ros_message = static_cast<const _MotCot_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name can_id
  {
    size_t item_size = sizeof(ros_message->can_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name setup_id
  {
    size_t item_size = sizeof(ros_message->setup_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name setup_value
  {
    size_t item_size = sizeof(ros_message->setup_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotCot_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_loki_msgs__srv__MotCot_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_loki_msgs
size_t max_serialized_size_loki_msgs__srv__MotCot_Request(
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

  // member: can_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: setup_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: setup_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MotCot_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_loki_msgs__srv__MotCot_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotCot_Request = {
  "loki_msgs::srv",
  "MotCot_Request",
  _MotCot_Request__cdr_serialize,
  _MotCot_Request__cdr_deserialize,
  _MotCot_Request__get_serialized_size,
  _MotCot_Request__max_serialized_size
};

static rosidl_message_type_support_t _MotCot_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotCot_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, srv, MotCot_Request)() {
  return &_MotCot_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "loki_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "loki_msgs/srv/detail/mot_cot__struct.h"
// already included above
// #include "loki_msgs/srv/detail/mot_cot__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _MotCot_Response__ros_msg_type = loki_msgs__srv__MotCot_Response;

static bool _MotCot_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotCot_Response__ros_msg_type * ros_message = static_cast<const _MotCot_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: setup
  {
    cdr << (ros_message->setup ? true : false);
  }

  return true;
}

static bool _MotCot_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotCot_Response__ros_msg_type * ros_message = static_cast<_MotCot_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: setup
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->setup = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_loki_msgs
size_t get_serialized_size_loki_msgs__srv__MotCot_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotCot_Response__ros_msg_type * ros_message = static_cast<const _MotCot_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name setup
  {
    size_t item_size = sizeof(ros_message->setup);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotCot_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_loki_msgs__srv__MotCot_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_loki_msgs
size_t max_serialized_size_loki_msgs__srv__MotCot_Response(
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

  // member: setup
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _MotCot_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_loki_msgs__srv__MotCot_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotCot_Response = {
  "loki_msgs::srv",
  "MotCot_Response",
  _MotCot_Response__cdr_serialize,
  _MotCot_Response__cdr_deserialize,
  _MotCot_Response__get_serialized_size,
  _MotCot_Response__max_serialized_size
};

static rosidl_message_type_support_t _MotCot_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotCot_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, srv, MotCot_Response)() {
  return &_MotCot_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "loki_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "loki_msgs/srv/mot_cot.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MotCot__callbacks = {
  "loki_msgs::srv",
  "MotCot",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, srv, MotCot_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, srv, MotCot_Response)(),
};

static rosidl_service_type_support_t MotCot__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MotCot__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, srv, MotCot)() {
  return &MotCot__handle;
}

#if defined(__cplusplus)
}
#endif
