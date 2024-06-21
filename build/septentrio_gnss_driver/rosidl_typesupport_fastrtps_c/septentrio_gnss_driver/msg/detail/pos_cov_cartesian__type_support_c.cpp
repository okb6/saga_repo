// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from septentrio_gnss_driver:msg/PosCovCartesian.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/pos_cov_cartesian__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "septentrio_gnss_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "septentrio_gnss_driver/msg/detail/pos_cov_cartesian__struct.h"
#include "septentrio_gnss_driver/msg/detail/pos_cov_cartesian__functions.h"
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

#include "septentrio_gnss_driver/msg/detail/block_header__functions.h"  // block_header
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_septentrio_gnss_driver__msg__BlockHeader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_septentrio_gnss_driver__msg__BlockHeader(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, BlockHeader)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_septentrio_gnss_driver
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_septentrio_gnss_driver
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_septentrio_gnss_driver
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _PosCovCartesian__ros_msg_type = septentrio_gnss_driver__msg__PosCovCartesian;

static bool _PosCovCartesian__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PosCovCartesian__ros_msg_type * ros_message = static_cast<const _PosCovCartesian__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: block_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, BlockHeader
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->block_header, cdr))
    {
      return false;
    }
  }

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: error
  {
    cdr << ros_message->error;
  }

  // Field name: cov_xx
  {
    cdr << ros_message->cov_xx;
  }

  // Field name: cov_yy
  {
    cdr << ros_message->cov_yy;
  }

  // Field name: cov_zz
  {
    cdr << ros_message->cov_zz;
  }

  // Field name: cov_bb
  {
    cdr << ros_message->cov_bb;
  }

  // Field name: cov_xy
  {
    cdr << ros_message->cov_xy;
  }

  // Field name: cov_xz
  {
    cdr << ros_message->cov_xz;
  }

  // Field name: cov_xb
  {
    cdr << ros_message->cov_xb;
  }

  // Field name: cov_yz
  {
    cdr << ros_message->cov_yz;
  }

  // Field name: cov_yb
  {
    cdr << ros_message->cov_yb;
  }

  // Field name: cov_zb
  {
    cdr << ros_message->cov_zb;
  }

  return true;
}

static bool _PosCovCartesian__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PosCovCartesian__ros_msg_type * ros_message = static_cast<_PosCovCartesian__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: block_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, BlockHeader
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->block_header))
    {
      return false;
    }
  }

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: error
  {
    cdr >> ros_message->error;
  }

  // Field name: cov_xx
  {
    cdr >> ros_message->cov_xx;
  }

  // Field name: cov_yy
  {
    cdr >> ros_message->cov_yy;
  }

  // Field name: cov_zz
  {
    cdr >> ros_message->cov_zz;
  }

  // Field name: cov_bb
  {
    cdr >> ros_message->cov_bb;
  }

  // Field name: cov_xy
  {
    cdr >> ros_message->cov_xy;
  }

  // Field name: cov_xz
  {
    cdr >> ros_message->cov_xz;
  }

  // Field name: cov_xb
  {
    cdr >> ros_message->cov_xb;
  }

  // Field name: cov_yz
  {
    cdr >> ros_message->cov_yz;
  }

  // Field name: cov_yb
  {
    cdr >> ros_message->cov_yb;
  }

  // Field name: cov_zb
  {
    cdr >> ros_message->cov_zb;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_septentrio_gnss_driver
size_t get_serialized_size_septentrio_gnss_driver__msg__PosCovCartesian(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PosCovCartesian__ros_msg_type * ros_message = static_cast<const _PosCovCartesian__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name block_header

  current_alignment += get_serialized_size_septentrio_gnss_driver__msg__BlockHeader(
    &(ros_message->block_header), current_alignment);
  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error
  {
    size_t item_size = sizeof(ros_message->error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov_xx
  {
    size_t item_size = sizeof(ros_message->cov_xx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov_yy
  {
    size_t item_size = sizeof(ros_message->cov_yy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov_zz
  {
    size_t item_size = sizeof(ros_message->cov_zz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov_bb
  {
    size_t item_size = sizeof(ros_message->cov_bb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov_xy
  {
    size_t item_size = sizeof(ros_message->cov_xy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov_xz
  {
    size_t item_size = sizeof(ros_message->cov_xz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov_xb
  {
    size_t item_size = sizeof(ros_message->cov_xb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov_yz
  {
    size_t item_size = sizeof(ros_message->cov_yz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov_yb
  {
    size_t item_size = sizeof(ros_message->cov_yb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov_zb
  {
    size_t item_size = sizeof(ros_message->cov_zb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PosCovCartesian__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_septentrio_gnss_driver__msg__PosCovCartesian(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_septentrio_gnss_driver
size_t max_serialized_size_septentrio_gnss_driver__msg__PosCovCartesian(
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

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: block_header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_septentrio_gnss_driver__msg__BlockHeader(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cov_xx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cov_yy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cov_zz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cov_bb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cov_xy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cov_xz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cov_xb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cov_yz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cov_yb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cov_zb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PosCovCartesian__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_septentrio_gnss_driver__msg__PosCovCartesian(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PosCovCartesian = {
  "septentrio_gnss_driver::msg",
  "PosCovCartesian",
  _PosCovCartesian__cdr_serialize,
  _PosCovCartesian__cdr_deserialize,
  _PosCovCartesian__get_serialized_size,
  _PosCovCartesian__max_serialized_size
};

static rosidl_message_type_support_t _PosCovCartesian__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PosCovCartesian,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, PosCovCartesian)() {
  return &_PosCovCartesian__type_support;
}

#if defined(__cplusplus)
}
#endif
