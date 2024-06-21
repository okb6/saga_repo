// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from septentrio_gnss_driver:msg/RFBand.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/rf_band__rosidl_typesupport_fastrtps_cpp.hpp"
#include "septentrio_gnss_driver/msg/detail/rf_band__struct.hpp"

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

namespace septentrio_gnss_driver
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_septentrio_gnss_driver
cdr_serialize(
  const septentrio_gnss_driver::msg::RFBand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: frequency
  cdr << ros_message.frequency;
  // Member: bandwidth
  cdr << ros_message.bandwidth;
  // Member: info
  cdr << ros_message.info;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_septentrio_gnss_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  septentrio_gnss_driver::msg::RFBand & ros_message)
{
  // Member: frequency
  cdr >> ros_message.frequency;

  // Member: bandwidth
  cdr >> ros_message.bandwidth;

  // Member: info
  cdr >> ros_message.info;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_septentrio_gnss_driver
get_serialized_size(
  const septentrio_gnss_driver::msg::RFBand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: frequency
  {
    size_t item_size = sizeof(ros_message.frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bandwidth
  {
    size_t item_size = sizeof(ros_message.bandwidth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: info
  {
    size_t item_size = sizeof(ros_message.info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_septentrio_gnss_driver
max_serialized_size_RFBand(
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


  // Member: frequency
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bandwidth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: info
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _RFBand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const septentrio_gnss_driver::msg::RFBand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RFBand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<septentrio_gnss_driver::msg::RFBand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RFBand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const septentrio_gnss_driver::msg::RFBand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RFBand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RFBand(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RFBand__callbacks = {
  "septentrio_gnss_driver::msg",
  "RFBand",
  _RFBand__cdr_serialize,
  _RFBand__cdr_deserialize,
  _RFBand__get_serialized_size,
  _RFBand__max_serialized_size
};

static rosidl_message_type_support_t _RFBand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RFBand__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace septentrio_gnss_driver

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_septentrio_gnss_driver
const rosidl_message_type_support_t *
get_message_type_support_handle<septentrio_gnss_driver::msg::RFBand>()
{
  return &septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::_RFBand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, septentrio_gnss_driver, msg, RFBand)() {
  return &septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::_RFBand__handle;
}

#ifdef __cplusplus
}
#endif
