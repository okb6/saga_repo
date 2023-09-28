// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from loki_msgs:msg/ControllerArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "loki_msgs/msg/detail/controller_array__struct.hpp"
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

void ControllerArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) loki_msgs::msg::ControllerArray(_init);
}

void ControllerArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<loki_msgs::msg::ControllerArray *>(message_memory);
  typed_message->~ControllerArray();
}

size_t size_function__ControllerArray__controller_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<loki_msgs::msg::ControllerData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ControllerArray__controller_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<loki_msgs::msg::ControllerData> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerArray__controller_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<loki_msgs::msg::ControllerData> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerArray__controller_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const loki_msgs::msg::ControllerData *>(
    get_const_function__ControllerArray__controller_data(untyped_member, index));
  auto & value = *reinterpret_cast<loki_msgs::msg::ControllerData *>(untyped_value);
  value = item;
}

void assign_function__ControllerArray__controller_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<loki_msgs::msg::ControllerData *>(
    get_function__ControllerArray__controller_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const loki_msgs::msg::ControllerData *>(untyped_value);
  item = value;
}

void resize_function__ControllerArray__controller_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<loki_msgs::msg::ControllerData> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ControllerArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::ControllerArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "controller_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<loki_msgs::msg::ControllerData>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::ControllerArray, controller_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerArray__controller_data,  // size() function pointer
    get_const_function__ControllerArray__controller_data,  // get_const(index) function pointer
    get_function__ControllerArray__controller_data,  // get(index) function pointer
    fetch_function__ControllerArray__controller_data,  // fetch(index, &value) function pointer
    assign_function__ControllerArray__controller_data,  // assign(index, value) function pointer
    resize_function__ControllerArray__controller_data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ControllerArray_message_members = {
  "loki_msgs::msg",  // message namespace
  "ControllerArray",  // message name
  2,  // number of fields
  sizeof(loki_msgs::msg::ControllerArray),
  ControllerArray_message_member_array,  // message members
  ControllerArray_init_function,  // function to initialize message memory (memory has to be allocated)
  ControllerArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ControllerArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ControllerArray_message_members,
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
get_message_type_support_handle<loki_msgs::msg::ControllerArray>()
{
  return &::loki_msgs::msg::rosidl_typesupport_introspection_cpp::ControllerArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, loki_msgs, msg, ControllerArray)() {
  return &::loki_msgs::msg::rosidl_typesupport_introspection_cpp::ControllerArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
