// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from loki_msgs:msg/ThorvaldIO.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "loki_msgs/msg/detail/thorvald_io__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace loki_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ThorvaldIO_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) loki_msgs::msg::ThorvaldIO(_init);
}

void ThorvaldIO_fini_function(void * message_memory)
{
  auto typed_message = static_cast<loki_msgs::msg::ThorvaldIO *>(message_memory);
  typed_message->~ThorvaldIO();
}

size_t size_function__ThorvaldIO__analogs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ThorvaldIO__analogs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ThorvaldIO__analogs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ThorvaldIO__analogs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__ThorvaldIO__analogs(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__ThorvaldIO__analogs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__ThorvaldIO__analogs(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__ThorvaldIO__analogs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ThorvaldIO__digitals(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__ThorvaldIO__digitals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__ThorvaldIO__digitals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__ThorvaldIO__digitals(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ThorvaldIO__ranges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ThorvaldIO__ranges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ThorvaldIO__ranges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ThorvaldIO__ranges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__ThorvaldIO__ranges(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__ThorvaldIO__ranges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__ThorvaldIO__ranges(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__ThorvaldIO__ranges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ThorvaldIO_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::ThorvaldIO, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "analogs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::ThorvaldIO, analogs),  // bytes offset in struct
    nullptr,  // default value
    size_function__ThorvaldIO__analogs,  // size() function pointer
    get_const_function__ThorvaldIO__analogs,  // get_const(index) function pointer
    get_function__ThorvaldIO__analogs,  // get(index) function pointer
    fetch_function__ThorvaldIO__analogs,  // fetch(index, &value) function pointer
    assign_function__ThorvaldIO__analogs,  // assign(index, value) function pointer
    resize_function__ThorvaldIO__analogs  // resize(index) function pointer
  },
  {
    "digitals",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::ThorvaldIO, digitals),  // bytes offset in struct
    nullptr,  // default value
    size_function__ThorvaldIO__digitals,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__ThorvaldIO__digitals,  // fetch(index, &value) function pointer
    assign_function__ThorvaldIO__digitals,  // assign(index, value) function pointer
    resize_function__ThorvaldIO__digitals  // resize(index) function pointer
  },
  {
    "ranges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::ThorvaldIO, ranges),  // bytes offset in struct
    nullptr,  // default value
    size_function__ThorvaldIO__ranges,  // size() function pointer
    get_const_function__ThorvaldIO__ranges,  // get_const(index) function pointer
    get_function__ThorvaldIO__ranges,  // get(index) function pointer
    fetch_function__ThorvaldIO__ranges,  // fetch(index, &value) function pointer
    assign_function__ThorvaldIO__ranges,  // assign(index, value) function pointer
    resize_function__ThorvaldIO__ranges  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ThorvaldIO_message_members = {
  "loki_msgs::msg",  // message namespace
  "ThorvaldIO",  // message name
  4,  // number of fields
  sizeof(loki_msgs::msg::ThorvaldIO),
  ThorvaldIO_message_member_array,  // message members
  ThorvaldIO_init_function,  // function to initialize message memory (memory has to be allocated)
  ThorvaldIO_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ThorvaldIO_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ThorvaldIO_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace loki_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<loki_msgs::msg::ThorvaldIO>()
{
  return &::loki_msgs::msg::rosidl_typesupport_introspection_cpp::ThorvaldIO_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, loki_msgs, msg, ThorvaldIO)() {
  return &::loki_msgs::msg::rosidl_typesupport_introspection_cpp::ThorvaldIO_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif