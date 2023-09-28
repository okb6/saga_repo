// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from loki_msgs:srv/EvalCanBuffer.idl
// generated code does not contain a copyright notice
#include "loki_msgs/srv/detail/eval_can_buffer__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "loki_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "loki_msgs/srv/detail/eval_can_buffer__struct.h"
#include "loki_msgs/srv/detail/eval_can_buffer__functions.h"
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

#include "loki_msgs/msg/detail/can_frame__functions.h"  // can_msgs_base, can_msgs_device

// forward declare type support functions
size_t get_serialized_size_loki_msgs__msg__CANFrame(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_loki_msgs__msg__CANFrame(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, msg, CANFrame)();


using _EvalCanBuffer_Request__ros_msg_type = loki_msgs__srv__EvalCanBuffer_Request;

static bool _EvalCanBuffer_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EvalCanBuffer_Request__ros_msg_type * ros_message = static_cast<const _EvalCanBuffer_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: can_msgs_base
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, loki_msgs, msg, CANFrame
      )()->data);
    size_t size = ros_message->can_msgs_base.size;
    auto array_ptr = ros_message->can_msgs_base.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: can_msgs_device
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, loki_msgs, msg, CANFrame
      )()->data);
    size_t size = ros_message->can_msgs_device.size;
    auto array_ptr = ros_message->can_msgs_device.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _EvalCanBuffer_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EvalCanBuffer_Request__ros_msg_type * ros_message = static_cast<_EvalCanBuffer_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: can_msgs_base
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, loki_msgs, msg, CANFrame
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->can_msgs_base.data) {
      loki_msgs__msg__CANFrame__Sequence__fini(&ros_message->can_msgs_base);
    }
    if (!loki_msgs__msg__CANFrame__Sequence__init(&ros_message->can_msgs_base, size)) {
      fprintf(stderr, "failed to create array for field 'can_msgs_base'");
      return false;
    }
    auto array_ptr = ros_message->can_msgs_base.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: can_msgs_device
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, loki_msgs, msg, CANFrame
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->can_msgs_device.data) {
      loki_msgs__msg__CANFrame__Sequence__fini(&ros_message->can_msgs_device);
    }
    if (!loki_msgs__msg__CANFrame__Sequence__init(&ros_message->can_msgs_device, size)) {
      fprintf(stderr, "failed to create array for field 'can_msgs_device'");
      return false;
    }
    auto array_ptr = ros_message->can_msgs_device.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_loki_msgs
size_t get_serialized_size_loki_msgs__srv__EvalCanBuffer_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EvalCanBuffer_Request__ros_msg_type * ros_message = static_cast<const _EvalCanBuffer_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name can_msgs_base
  {
    size_t array_size = ros_message->can_msgs_base.size;
    auto array_ptr = ros_message->can_msgs_base.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_loki_msgs__msg__CANFrame(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name can_msgs_device
  {
    size_t array_size = ros_message->can_msgs_device.size;
    auto array_ptr = ros_message->can_msgs_device.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_loki_msgs__msg__CANFrame(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EvalCanBuffer_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_loki_msgs__srv__EvalCanBuffer_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_loki_msgs
size_t max_serialized_size_loki_msgs__srv__EvalCanBuffer_Request(
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

  // member: can_msgs_base
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_loki_msgs__msg__CANFrame(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: can_msgs_device
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_loki_msgs__msg__CANFrame(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _EvalCanBuffer_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_loki_msgs__srv__EvalCanBuffer_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EvalCanBuffer_Request = {
  "loki_msgs::srv",
  "EvalCanBuffer_Request",
  _EvalCanBuffer_Request__cdr_serialize,
  _EvalCanBuffer_Request__cdr_deserialize,
  _EvalCanBuffer_Request__get_serialized_size,
  _EvalCanBuffer_Request__max_serialized_size
};

static rosidl_message_type_support_t _EvalCanBuffer_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EvalCanBuffer_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, srv, EvalCanBuffer_Request)() {
  return &_EvalCanBuffer_Request__type_support;
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
// #include "loki_msgs/srv/detail/eval_can_buffer__struct.h"
// already included above
// #include "loki_msgs/srv/detail/eval_can_buffer__functions.h"
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

// already included above
// #include "loki_msgs/msg/detail/can_frame__functions.h"  // can_msgs_base, can_msgs_device

// forward declare type support functions
size_t get_serialized_size_loki_msgs__msg__CANFrame(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_loki_msgs__msg__CANFrame(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, msg, CANFrame)();


using _EvalCanBuffer_Response__ros_msg_type = loki_msgs__srv__EvalCanBuffer_Response;

static bool _EvalCanBuffer_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EvalCanBuffer_Response__ros_msg_type * ros_message = static_cast<const _EvalCanBuffer_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: can_msgs_base
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, loki_msgs, msg, CANFrame
      )()->data);
    size_t size = ros_message->can_msgs_base.size;
    auto array_ptr = ros_message->can_msgs_base.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: can_msgs_device
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, loki_msgs, msg, CANFrame
      )()->data);
    size_t size = ros_message->can_msgs_device.size;
    auto array_ptr = ros_message->can_msgs_device.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _EvalCanBuffer_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EvalCanBuffer_Response__ros_msg_type * ros_message = static_cast<_EvalCanBuffer_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: can_msgs_base
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, loki_msgs, msg, CANFrame
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->can_msgs_base.data) {
      loki_msgs__msg__CANFrame__Sequence__fini(&ros_message->can_msgs_base);
    }
    if (!loki_msgs__msg__CANFrame__Sequence__init(&ros_message->can_msgs_base, size)) {
      fprintf(stderr, "failed to create array for field 'can_msgs_base'");
      return false;
    }
    auto array_ptr = ros_message->can_msgs_base.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: can_msgs_device
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, loki_msgs, msg, CANFrame
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->can_msgs_device.data) {
      loki_msgs__msg__CANFrame__Sequence__fini(&ros_message->can_msgs_device);
    }
    if (!loki_msgs__msg__CANFrame__Sequence__init(&ros_message->can_msgs_device, size)) {
      fprintf(stderr, "failed to create array for field 'can_msgs_device'");
      return false;
    }
    auto array_ptr = ros_message->can_msgs_device.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_loki_msgs
size_t get_serialized_size_loki_msgs__srv__EvalCanBuffer_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EvalCanBuffer_Response__ros_msg_type * ros_message = static_cast<const _EvalCanBuffer_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name can_msgs_base
  {
    size_t array_size = ros_message->can_msgs_base.size;
    auto array_ptr = ros_message->can_msgs_base.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_loki_msgs__msg__CANFrame(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name can_msgs_device
  {
    size_t array_size = ros_message->can_msgs_device.size;
    auto array_ptr = ros_message->can_msgs_device.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_loki_msgs__msg__CANFrame(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EvalCanBuffer_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_loki_msgs__srv__EvalCanBuffer_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_loki_msgs
size_t max_serialized_size_loki_msgs__srv__EvalCanBuffer_Response(
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

  // member: can_msgs_base
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_loki_msgs__msg__CANFrame(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: can_msgs_device
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_loki_msgs__msg__CANFrame(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _EvalCanBuffer_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_loki_msgs__srv__EvalCanBuffer_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EvalCanBuffer_Response = {
  "loki_msgs::srv",
  "EvalCanBuffer_Response",
  _EvalCanBuffer_Response__cdr_serialize,
  _EvalCanBuffer_Response__cdr_deserialize,
  _EvalCanBuffer_Response__get_serialized_size,
  _EvalCanBuffer_Response__max_serialized_size
};

static rosidl_message_type_support_t _EvalCanBuffer_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EvalCanBuffer_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, srv, EvalCanBuffer_Response)() {
  return &_EvalCanBuffer_Response__type_support;
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
#include "loki_msgs/srv/eval_can_buffer.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t EvalCanBuffer__callbacks = {
  "loki_msgs::srv",
  "EvalCanBuffer",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, srv, EvalCanBuffer_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, srv, EvalCanBuffer_Response)(),
};

static rosidl_service_type_support_t EvalCanBuffer__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &EvalCanBuffer__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, srv, EvalCanBuffer)() {
  return &EvalCanBuffer__handle;
}

#if defined(__cplusplus)
}
#endif
