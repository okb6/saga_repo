// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from loki_msgs:msg/IOArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "loki_msgs/msg/detail/io_array__struct.hpp"
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

void IOArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) loki_msgs::msg::IOArray(_init);
}

void IOArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<loki_msgs::msg::IOArray *>(message_memory);
  typed_message->~IOArray();
}

size_t size_function__IOArray__io_states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<loki_msgs::msg::IOState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IOArray__io_states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<loki_msgs::msg::IOState> *>(untyped_member);
  return &member[index];
}

void * get_function__IOArray__io_states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<loki_msgs::msg::IOState> *>(untyped_member);
  return &member[index];
}

void fetch_function__IOArray__io_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const loki_msgs::msg::IOState *>(
    get_const_function__IOArray__io_states(untyped_member, index));
  auto & value = *reinterpret_cast<loki_msgs::msg::IOState *>(untyped_value);
  value = item;
}

void assign_function__IOArray__io_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<loki_msgs::msg::IOState *>(
    get_function__IOArray__io_states(untyped_member, index));
  const auto & value = *reinterpret_cast<const loki_msgs::msg::IOState *>(untyped_value);
  item = value;
}

void resize_function__IOArray__io_states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<loki_msgs::msg::IOState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IOArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::IOArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "io_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<loki_msgs::msg::IOState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::IOArray, io_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOArray__io_states,  // size() function pointer
    get_const_function__IOArray__io_states,  // get_const(index) function pointer
    get_function__IOArray__io_states,  // get(index) function pointer
    fetch_function__IOArray__io_states,  // fetch(index, &value) function pointer
    assign_function__IOArray__io_states,  // assign(index, value) function pointer
    resize_function__IOArray__io_states  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IOArray_message_members = {
  "loki_msgs::msg",  // message namespace
  "IOArray",  // message name
  2,  // number of fields
  sizeof(loki_msgs::msg::IOArray),
  IOArray_message_member_array,  // message members
  IOArray_init_function,  // function to initialize message memory (memory has to be allocated)
  IOArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IOArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IOArray_message_members,
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
get_message_type_support_handle<loki_msgs::msg::IOArray>()
{
  return &::loki_msgs::msg::rosidl_typesupport_introspection_cpp::IOArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, loki_msgs, msg, IOArray)() {
  return &::loki_msgs::msg::rosidl_typesupport_introspection_cpp::IOArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
