// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from loki_msgs:msg/ControllerStatusFlag.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "loki_msgs/msg/detail/controller_status_flag__struct.hpp"
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

void ControllerStatusFlag_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) loki_msgs::msg::ControllerStatusFlag(_init);
}

void ControllerStatusFlag_fini_function(void * message_memory)
{
  auto typed_message = static_cast<loki_msgs::msg::ControllerStatusFlag *>(message_memory);
  typed_message->~ControllerStatusFlag();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ControllerStatusFlag_message_member_array[2] = {
  {
    "status_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::ControllerStatusFlag, status_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::msg::ControllerStatusFlag, status_value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ControllerStatusFlag_message_members = {
  "loki_msgs::msg",  // message namespace
  "ControllerStatusFlag",  // message name
  2,  // number of fields
  sizeof(loki_msgs::msg::ControllerStatusFlag),
  ControllerStatusFlag_message_member_array,  // message members
  ControllerStatusFlag_init_function,  // function to initialize message memory (memory has to be allocated)
  ControllerStatusFlag_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ControllerStatusFlag_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ControllerStatusFlag_message_members,
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
get_message_type_support_handle<loki_msgs::msg::ControllerStatusFlag>()
{
  return &::loki_msgs::msg::rosidl_typesupport_introspection_cpp::ControllerStatusFlag_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, loki_msgs, msg, ControllerStatusFlag)() {
  return &::loki_msgs::msg::rosidl_typesupport_introspection_cpp::ControllerStatusFlag_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
