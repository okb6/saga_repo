// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from septentrio_gnss_driver:msg/MeasEpoch.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "septentrio_gnss_driver/msg/detail/meas_epoch__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace septentrio_gnss_driver
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MeasEpoch_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) septentrio_gnss_driver::msg::MeasEpoch(_init);
}

void MeasEpoch_fini_function(void * message_memory)
{
  auto typed_message = static_cast<septentrio_gnss_driver::msg::MeasEpoch *>(message_memory);
  typed_message->~MeasEpoch();
}

size_t size_function__MeasEpoch__type1(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<septentrio_gnss_driver::msg::MeasEpochChannelType1> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MeasEpoch__type1(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<septentrio_gnss_driver::msg::MeasEpochChannelType1> *>(untyped_member);
  return &member[index];
}

void * get_function__MeasEpoch__type1(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<septentrio_gnss_driver::msg::MeasEpochChannelType1> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeasEpoch__type1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const septentrio_gnss_driver::msg::MeasEpochChannelType1 *>(
    get_const_function__MeasEpoch__type1(untyped_member, index));
  auto & value = *reinterpret_cast<septentrio_gnss_driver::msg::MeasEpochChannelType1 *>(untyped_value);
  value = item;
}

void assign_function__MeasEpoch__type1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<septentrio_gnss_driver::msg::MeasEpochChannelType1 *>(
    get_function__MeasEpoch__type1(untyped_member, index));
  const auto & value = *reinterpret_cast<const septentrio_gnss_driver::msg::MeasEpochChannelType1 *>(untyped_value);
  item = value;
}

void resize_function__MeasEpoch__type1(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<septentrio_gnss_driver::msg::MeasEpochChannelType1> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MeasEpoch_message_member_array[8] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver::msg::MeasEpoch, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "block_header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<septentrio_gnss_driver::msg::BlockHeader>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver::msg::MeasEpoch, block_header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "n",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver::msg::MeasEpoch, n),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sb1_length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver::msg::MeasEpoch, sb1_length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sb2_length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver::msg::MeasEpoch, sb2_length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "common_flags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver::msg::MeasEpoch, common_flags),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cum_clk_jumps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver::msg::MeasEpoch, cum_clk_jumps),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<septentrio_gnss_driver::msg::MeasEpochChannelType1>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver::msg::MeasEpoch, type1),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeasEpoch__type1,  // size() function pointer
    get_const_function__MeasEpoch__type1,  // get_const(index) function pointer
    get_function__MeasEpoch__type1,  // get(index) function pointer
    fetch_function__MeasEpoch__type1,  // fetch(index, &value) function pointer
    assign_function__MeasEpoch__type1,  // assign(index, value) function pointer
    resize_function__MeasEpoch__type1  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MeasEpoch_message_members = {
  "septentrio_gnss_driver::msg",  // message namespace
  "MeasEpoch",  // message name
  8,  // number of fields
  sizeof(septentrio_gnss_driver::msg::MeasEpoch),
  MeasEpoch_message_member_array,  // message members
  MeasEpoch_init_function,  // function to initialize message memory (memory has to be allocated)
  MeasEpoch_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MeasEpoch_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MeasEpoch_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace septentrio_gnss_driver


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<septentrio_gnss_driver::msg::MeasEpoch>()
{
  return &::septentrio_gnss_driver::msg::rosidl_typesupport_introspection_cpp::MeasEpoch_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, septentrio_gnss_driver, msg, MeasEpoch)() {
  return &::septentrio_gnss_driver::msg::rosidl_typesupport_introspection_cpp::MeasEpoch_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
