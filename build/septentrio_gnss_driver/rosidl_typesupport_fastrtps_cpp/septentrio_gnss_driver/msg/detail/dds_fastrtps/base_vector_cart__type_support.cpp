// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from septentrio_gnss_driver:msg/BaseVectorCart.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/base_vector_cart__rosidl_typesupport_fastrtps_cpp.hpp"
#include "septentrio_gnss_driver/msg/detail/base_vector_cart__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace septentrio_gnss_driver
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const septentrio_gnss_driver::msg::BlockHeader &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  septentrio_gnss_driver::msg::BlockHeader &);
size_t get_serialized_size(
  const septentrio_gnss_driver::msg::BlockHeader &,
  size_t current_alignment);
size_t
max_serialized_size_BlockHeader(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace septentrio_gnss_driver

namespace septentrio_gnss_driver
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const septentrio_gnss_driver::msg::VectorInfoCart &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  septentrio_gnss_driver::msg::VectorInfoCart &);
size_t get_serialized_size(
  const septentrio_gnss_driver::msg::VectorInfoCart &,
  size_t current_alignment);
size_t
max_serialized_size_VectorInfoCart(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace septentrio_gnss_driver


namespace septentrio_gnss_driver
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_septentrio_gnss_driver
cdr_serialize(
  const septentrio_gnss_driver::msg::BaseVectorCart & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: block_header
  septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.block_header,
    cdr);
  // Member: n
  cdr << ros_message.n;
  // Member: sb_length
  cdr << ros_message.sb_length;
  // Member: vector_info_cart
  {
    size_t size = ros_message.vector_info_cart.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.vector_info_cart[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_septentrio_gnss_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  septentrio_gnss_driver::msg::BaseVectorCart & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: block_header
  septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.block_header);

  // Member: n
  cdr >> ros_message.n;

  // Member: sb_length
  cdr >> ros_message.sb_length;

  // Member: vector_info_cart
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.vector_info_cart.resize(size);
    for (size_t i = 0; i < size; i++) {
      septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.vector_info_cart[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_septentrio_gnss_driver
get_serialized_size(
  const septentrio_gnss_driver::msg::BaseVectorCart & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: block_header

  current_alignment +=
    septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.block_header, current_alignment);
  // Member: n
  {
    size_t item_size = sizeof(ros_message.n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sb_length
  {
    size_t item_size = sizeof(ros_message.sb_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vector_info_cart
  {
    size_t array_size = ros_message.vector_info_cart.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.vector_info_cart[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_septentrio_gnss_driver
max_serialized_size_BaseVectorCart(
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


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: block_header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::max_serialized_size_BlockHeader(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: n
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sb_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vector_info_cart
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
        septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::max_serialized_size_VectorInfoCart(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _BaseVectorCart__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const septentrio_gnss_driver::msg::BaseVectorCart *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BaseVectorCart__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<septentrio_gnss_driver::msg::BaseVectorCart *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BaseVectorCart__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const septentrio_gnss_driver::msg::BaseVectorCart *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BaseVectorCart__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BaseVectorCart(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BaseVectorCart__callbacks = {
  "septentrio_gnss_driver::msg",
  "BaseVectorCart",
  _BaseVectorCart__cdr_serialize,
  _BaseVectorCart__cdr_deserialize,
  _BaseVectorCart__get_serialized_size,
  _BaseVectorCart__max_serialized_size
};

static rosidl_message_type_support_t _BaseVectorCart__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BaseVectorCart__callbacks,
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
get_message_type_support_handle<septentrio_gnss_driver::msg::BaseVectorCart>()
{
  return &septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::_BaseVectorCart__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, septentrio_gnss_driver, msg, BaseVectorCart)() {
  return &septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::_BaseVectorCart__handle;
}

#ifdef __cplusplus
}
#endif
