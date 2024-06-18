// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from loki_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "loki_msgs/msg/detail/controller_state__struct.hpp"
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

void ControllerState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) loki_msgs::msg::ControllerState(_init);
}

void ControllerState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<loki_msgs::msg::ControllerState *>(message_memory);
  typed_message->~ControllerState();
}

size_t size_function__ControllerState__temps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ControllerState__temps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerState__temps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerState__temps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__ControllerState__temps(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__ControllerState__temps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__ControllerState__temps(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__ControllerState__temps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ControllerState__status_flags(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<loki_msgs::msg::ControllerStatusFlag> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ControllerState__status_flags(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<loki_msgs::msg::ControllerStatusFlag> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerState__status_flags(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<loki_msgs::msg::ControllerStatusFlag> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerState__status_flags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const loki_msgs::msg::ControllerStatusFlag *>(
    get_const_function__ControllerState__status_flags(untyped_member, index));
  auto & value = *reinterpret_cast<loki_msgs::msg::ControllerStatusFlag *>(untyped_value);
  value = item;
}

void assign_function__ControllerState__status_flags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<loki_msgs::msg::ControllerStatusFlag *>(
    get_function__ControllerState__status_flags(untyped_member, index));
  const auto & value = *reinterpret_cast<const loki_msgs::msg::ControllerStatusFlag *>(untyped_value);
  item = value;
}

void resize_function__ControllerState__status_flags(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<loki_msgs::msg::ControllerStatusFlag> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ControllerState_message_member_array[5] = {
  {
    "controller_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::ControllerState, controller_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "battery_volts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::ControllerState, battery_volts),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "battery_amps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::ControllerState, battery_amps),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "temps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::ControllerState, temps),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerState__temps,  // size() function pointer
    get_const_function__ControllerState__temps,  // get_const(index) function pointer
    get_function__ControllerState__temps,  // get(index) function pointer
    fetch_function__ControllerState__temps,  // fetch(index, &value) function pointer
    assign_function__ControllerState__temps,  // assign(index, value) function pointer
    resize_function__ControllerState__temps  // resize(index) function pointer
  },
  {
    "status_flags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<loki_msgs::msg::ControllerStatusFlag>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::ControllerState, status_flags),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerState__status_flags,  // size() function pointer
    get_const_function__ControllerState__status_flags,  // get_const(index) function pointer
    get_function__ControllerState__status_flags,  // get(index) function pointer
    fetch_function__ControllerState__status_flags,  // fetch(index, &value) function pointer
    assign_function__ControllerState__status_flags,  // assign(index, value) function pointer
    resize_function__ControllerState__status_flags  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ControllerState_message_members = {
  "loki_msgs::msg",  // message namespace
  "ControllerState",  // message name
  5,  // number of fields
  sizeof(loki_msgs::msg::ControllerState),
  ControllerState_message_member_array,  // message members
  ControllerState_init_function,  // function to initialize message memory (memory has to be allocated)
  ControllerState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ControllerState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ControllerState_message_members,
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
get_message_type_support_handle<loki_msgs::msg::ControllerState>()
{
  return &::loki_msgs::msg::rosidl_typesupport_introspection_cpp::ControllerState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, loki_msgs, msg, ControllerState)() {
  return &::loki_msgs::msg::rosidl_typesupport_introspection_cpp::ControllerState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
