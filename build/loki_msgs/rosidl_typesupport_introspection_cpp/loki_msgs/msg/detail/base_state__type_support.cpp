// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from loki_msgs:msg/BaseState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "loki_msgs/msg/detail/base_state__struct.hpp"
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

void BaseState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) loki_msgs::msg::BaseState(_init);
}

void BaseState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<loki_msgs::msg::BaseState *>(message_memory);
  typed_message->~BaseState();
}

size_t size_function__BaseState__prop_speed(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BaseState__prop_speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__BaseState__prop_speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__BaseState__prop_speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__BaseState__prop_speed(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__BaseState__prop_speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__BaseState__prop_speed(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__BaseState__prop_speed(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BaseState__prop_pos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BaseState__prop_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__BaseState__prop_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__BaseState__prop_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__BaseState__prop_pos(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__BaseState__prop_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__BaseState__prop_pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__BaseState__prop_pos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BaseState__steer_speed(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BaseState__steer_speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__BaseState__steer_speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__BaseState__steer_speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__BaseState__steer_speed(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__BaseState__steer_speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__BaseState__steer_speed(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__BaseState__steer_speed(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BaseState__steer_pos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BaseState__steer_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__BaseState__steer_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__BaseState__steer_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__BaseState__steer_pos(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__BaseState__steer_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__BaseState__steer_pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__BaseState__steer_pos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BaseState__steer_max_speed(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BaseState__steer_max_speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__BaseState__steer_max_speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__BaseState__steer_max_speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__BaseState__steer_max_speed(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__BaseState__steer_max_speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__BaseState__steer_max_speed(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__BaseState__steer_max_speed(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BaseState__channel(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BaseState__channel(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BaseState__channel(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BaseState__channel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__BaseState__channel(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__BaseState__channel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__BaseState__channel(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__BaseState__channel(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BaseState_message_member_array[8] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::BaseState, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "drive_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::BaseState, drive_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "prop_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::BaseState, prop_speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__BaseState__prop_speed,  // size() function pointer
    get_const_function__BaseState__prop_speed,  // get_const(index) function pointer
    get_function__BaseState__prop_speed,  // get(index) function pointer
    fetch_function__BaseState__prop_speed,  // fetch(index, &value) function pointer
    assign_function__BaseState__prop_speed,  // assign(index, value) function pointer
    resize_function__BaseState__prop_speed  // resize(index) function pointer
  },
  {
    "prop_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::BaseState, prop_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__BaseState__prop_pos,  // size() function pointer
    get_const_function__BaseState__prop_pos,  // get_const(index) function pointer
    get_function__BaseState__prop_pos,  // get(index) function pointer
    fetch_function__BaseState__prop_pos,  // fetch(index, &value) function pointer
    assign_function__BaseState__prop_pos,  // assign(index, value) function pointer
    resize_function__BaseState__prop_pos  // resize(index) function pointer
  },
  {
    "steer_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::BaseState, steer_speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__BaseState__steer_speed,  // size() function pointer
    get_const_function__BaseState__steer_speed,  // get_const(index) function pointer
    get_function__BaseState__steer_speed,  // get(index) function pointer
    fetch_function__BaseState__steer_speed,  // fetch(index, &value) function pointer
    assign_function__BaseState__steer_speed,  // assign(index, value) function pointer
    resize_function__BaseState__steer_speed  // resize(index) function pointer
  },
  {
    "steer_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::BaseState, steer_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__BaseState__steer_pos,  // size() function pointer
    get_const_function__BaseState__steer_pos,  // get_const(index) function pointer
    get_function__BaseState__steer_pos,  // get(index) function pointer
    fetch_function__BaseState__steer_pos,  // fetch(index, &value) function pointer
    assign_function__BaseState__steer_pos,  // assign(index, value) function pointer
    resize_function__BaseState__steer_pos  // resize(index) function pointer
  },
  {
    "steer_max_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::BaseState, steer_max_speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__BaseState__steer_max_speed,  // size() function pointer
    get_const_function__BaseState__steer_max_speed,  // get_const(index) function pointer
    get_function__BaseState__steer_max_speed,  // get(index) function pointer
    fetch_function__BaseState__steer_max_speed,  // fetch(index, &value) function pointer
    assign_function__BaseState__steer_max_speed,  // assign(index, value) function pointer
    resize_function__BaseState__steer_max_speed  // resize(index) function pointer
  },
  {
    "channel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::BaseState, channel),  // bytes offset in struct
    nullptr,  // default value
    size_function__BaseState__channel,  // size() function pointer
    get_const_function__BaseState__channel,  // get_const(index) function pointer
    get_function__BaseState__channel,  // get(index) function pointer
    fetch_function__BaseState__channel,  // fetch(index, &value) function pointer
    assign_function__BaseState__channel,  // assign(index, value) function pointer
    resize_function__BaseState__channel  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BaseState_message_members = {
  "loki_msgs::msg",  // message namespace
  "BaseState",  // message name
  8,  // number of fields
  sizeof(loki_msgs::msg::BaseState),
  BaseState_message_member_array,  // message members
  BaseState_init_function,  // function to initialize message memory (memory has to be allocated)
  BaseState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BaseState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BaseState_message_members,
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
get_message_type_support_handle<loki_msgs::msg::BaseState>()
{
  return &::loki_msgs::msg::rosidl_typesupport_introspection_cpp::BaseState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, loki_msgs, msg, BaseState)() {
  return &::loki_msgs::msg::rosidl_typesupport_introspection_cpp::BaseState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
