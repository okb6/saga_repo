// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from loki_msgs:srv/EvalCanBuffer.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "loki_msgs/srv/detail/eval_can_buffer__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace loki_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void EvalCanBuffer_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) loki_msgs::srv::EvalCanBuffer_Request(_init);
}

void EvalCanBuffer_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<loki_msgs::srv::EvalCanBuffer_Request *>(message_memory);
  typed_message->~EvalCanBuffer_Request();
}

size_t size_function__EvalCanBuffer_Request__can_msgs_base(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<loki_msgs::msg::CANFrame> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EvalCanBuffer_Request__can_msgs_base(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<loki_msgs::msg::CANFrame> *>(untyped_member);
  return &member[index];
}

void * get_function__EvalCanBuffer_Request__can_msgs_base(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<loki_msgs::msg::CANFrame> *>(untyped_member);
  return &member[index];
}

void fetch_function__EvalCanBuffer_Request__can_msgs_base(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const loki_msgs::msg::CANFrame *>(
    get_const_function__EvalCanBuffer_Request__can_msgs_base(untyped_member, index));
  auto & value = *reinterpret_cast<loki_msgs::msg::CANFrame *>(untyped_value);
  value = item;
}

void assign_function__EvalCanBuffer_Request__can_msgs_base(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<loki_msgs::msg::CANFrame *>(
    get_function__EvalCanBuffer_Request__can_msgs_base(untyped_member, index));
  const auto & value = *reinterpret_cast<const loki_msgs::msg::CANFrame *>(untyped_value);
  item = value;
}

void resize_function__EvalCanBuffer_Request__can_msgs_base(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<loki_msgs::msg::CANFrame> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EvalCanBuffer_Request__can_msgs_device(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<loki_msgs::msg::CANFrame> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EvalCanBuffer_Request__can_msgs_device(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<loki_msgs::msg::CANFrame> *>(untyped_member);
  return &member[index];
}

void * get_function__EvalCanBuffer_Request__can_msgs_device(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<loki_msgs::msg::CANFrame> *>(untyped_member);
  return &member[index];
}

void fetch_function__EvalCanBuffer_Request__can_msgs_device(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const loki_msgs::msg::CANFrame *>(
    get_const_function__EvalCanBuffer_Request__can_msgs_device(untyped_member, index));
  auto & value = *reinterpret_cast<loki_msgs::msg::CANFrame *>(untyped_value);
  value = item;
}

void assign_function__EvalCanBuffer_Request__can_msgs_device(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<loki_msgs::msg::CANFrame *>(
    get_function__EvalCanBuffer_Request__can_msgs_device(untyped_member, index));
  const auto & value = *reinterpret_cast<const loki_msgs::msg::CANFrame *>(untyped_value);
  item = value;
}

void resize_function__EvalCanBuffer_Request__can_msgs_device(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<loki_msgs::msg::CANFrame> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EvalCanBuffer_Request_message_member_array[2] = {
  {
    "can_msgs_base",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<loki_msgs::msg::CANFrame>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::srv::EvalCanBuffer_Request, can_msgs_base),  // bytes offset in struct
    nullptr,  // default value
    size_function__EvalCanBuffer_Request__can_msgs_base,  // size() function pointer
    get_const_function__EvalCanBuffer_Request__can_msgs_base,  // get_const(index) function pointer
    get_function__EvalCanBuffer_Request__can_msgs_base,  // get(index) function pointer
    fetch_function__EvalCanBuffer_Request__can_msgs_base,  // fetch(index, &value) function pointer
    assign_function__EvalCanBuffer_Request__can_msgs_base,  // assign(index, value) function pointer
    resize_function__EvalCanBuffer_Request__can_msgs_base  // resize(index) function pointer
  },
  {
    "can_msgs_device",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<loki_msgs::msg::CANFrame>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::srv::EvalCanBuffer_Request, can_msgs_device),  // bytes offset in struct
    nullptr,  // default value
    size_function__EvalCanBuffer_Request__can_msgs_device,  // size() function pointer
    get_const_function__EvalCanBuffer_Request__can_msgs_device,  // get_const(index) function pointer
    get_function__EvalCanBuffer_Request__can_msgs_device,  // get(index) function pointer
    fetch_function__EvalCanBuffer_Request__can_msgs_device,  // fetch(index, &value) function pointer
    assign_function__EvalCanBuffer_Request__can_msgs_device,  // assign(index, value) function pointer
    resize_function__EvalCanBuffer_Request__can_msgs_device  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EvalCanBuffer_Request_message_members = {
  "loki_msgs::srv",  // message namespace
  "EvalCanBuffer_Request",  // message name
  2,  // number of fields
  sizeof(loki_msgs::srv::EvalCanBuffer_Request),
  EvalCanBuffer_Request_message_member_array,  // message members
  EvalCanBuffer_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  EvalCanBuffer_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EvalCanBuffer_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EvalCanBuffer_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace loki_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<loki_msgs::srv::EvalCanBuffer_Request>()
{
  return &::loki_msgs::srv::rosidl_typesupport_introspection_cpp::EvalCanBuffer_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, loki_msgs, srv, EvalCanBuffer_Request)() {
  return &::loki_msgs::srv::rosidl_typesupport_introspection_cpp::EvalCanBuffer_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "loki_msgs/srv/detail/eval_can_buffer__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace loki_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void EvalCanBuffer_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) loki_msgs::srv::EvalCanBuffer_Response(_init);
}

void EvalCanBuffer_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<loki_msgs::srv::EvalCanBuffer_Response *>(message_memory);
  typed_message->~EvalCanBuffer_Response();
}

size_t size_function__EvalCanBuffer_Response__can_msgs_base(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<loki_msgs::msg::CANFrame> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EvalCanBuffer_Response__can_msgs_base(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<loki_msgs::msg::CANFrame> *>(untyped_member);
  return &member[index];
}

void * get_function__EvalCanBuffer_Response__can_msgs_base(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<loki_msgs::msg::CANFrame> *>(untyped_member);
  return &member[index];
}

void fetch_function__EvalCanBuffer_Response__can_msgs_base(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const loki_msgs::msg::CANFrame *>(
    get_const_function__EvalCanBuffer_Response__can_msgs_base(untyped_member, index));
  auto & value = *reinterpret_cast<loki_msgs::msg::CANFrame *>(untyped_value);
  value = item;
}

void assign_function__EvalCanBuffer_Response__can_msgs_base(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<loki_msgs::msg::CANFrame *>(
    get_function__EvalCanBuffer_Response__can_msgs_base(untyped_member, index));
  const auto & value = *reinterpret_cast<const loki_msgs::msg::CANFrame *>(untyped_value);
  item = value;
}

void resize_function__EvalCanBuffer_Response__can_msgs_base(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<loki_msgs::msg::CANFrame> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EvalCanBuffer_Response__can_msgs_device(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<loki_msgs::msg::CANFrame> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EvalCanBuffer_Response__can_msgs_device(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<loki_msgs::msg::CANFrame> *>(untyped_member);
  return &member[index];
}

void * get_function__EvalCanBuffer_Response__can_msgs_device(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<loki_msgs::msg::CANFrame> *>(untyped_member);
  return &member[index];
}

void fetch_function__EvalCanBuffer_Response__can_msgs_device(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const loki_msgs::msg::CANFrame *>(
    get_const_function__EvalCanBuffer_Response__can_msgs_device(untyped_member, index));
  auto & value = *reinterpret_cast<loki_msgs::msg::CANFrame *>(untyped_value);
  value = item;
}

void assign_function__EvalCanBuffer_Response__can_msgs_device(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<loki_msgs::msg::CANFrame *>(
    get_function__EvalCanBuffer_Response__can_msgs_device(untyped_member, index));
  const auto & value = *reinterpret_cast<const loki_msgs::msg::CANFrame *>(untyped_value);
  item = value;
}

void resize_function__EvalCanBuffer_Response__can_msgs_device(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<loki_msgs::msg::CANFrame> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EvalCanBuffer_Response_message_member_array[2] = {
  {
    "can_msgs_base",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<loki_msgs::msg::CANFrame>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::srv::EvalCanBuffer_Response, can_msgs_base),  // bytes offset in struct
    nullptr,  // default value
    size_function__EvalCanBuffer_Response__can_msgs_base,  // size() function pointer
    get_const_function__EvalCanBuffer_Response__can_msgs_base,  // get_const(index) function pointer
    get_function__EvalCanBuffer_Response__can_msgs_base,  // get(index) function pointer
    fetch_function__EvalCanBuffer_Response__can_msgs_base,  // fetch(index, &value) function pointer
    assign_function__EvalCanBuffer_Response__can_msgs_base,  // assign(index, value) function pointer
    resize_function__EvalCanBuffer_Response__can_msgs_base  // resize(index) function pointer
  },
  {
    "can_msgs_device",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<loki_msgs::msg::CANFrame>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs::srv::EvalCanBuffer_Response, can_msgs_device),  // bytes offset in struct
    nullptr,  // default value
    size_function__EvalCanBuffer_Response__can_msgs_device,  // size() function pointer
    get_const_function__EvalCanBuffer_Response__can_msgs_device,  // get_const(index) function pointer
    get_function__EvalCanBuffer_Response__can_msgs_device,  // get(index) function pointer
    fetch_function__EvalCanBuffer_Response__can_msgs_device,  // fetch(index, &value) function pointer
    assign_function__EvalCanBuffer_Response__can_msgs_device,  // assign(index, value) function pointer
    resize_function__EvalCanBuffer_Response__can_msgs_device  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EvalCanBuffer_Response_message_members = {
  "loki_msgs::srv",  // message namespace
  "EvalCanBuffer_Response",  // message name
  2,  // number of fields
  sizeof(loki_msgs::srv::EvalCanBuffer_Response),
  EvalCanBuffer_Response_message_member_array,  // message members
  EvalCanBuffer_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  EvalCanBuffer_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EvalCanBuffer_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EvalCanBuffer_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace loki_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<loki_msgs::srv::EvalCanBuffer_Response>()
{
  return &::loki_msgs::srv::rosidl_typesupport_introspection_cpp::EvalCanBuffer_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, loki_msgs, srv, EvalCanBuffer_Response)() {
  return &::loki_msgs::srv::rosidl_typesupport_introspection_cpp::EvalCanBuffer_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "loki_msgs/srv/detail/eval_can_buffer__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace loki_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers EvalCanBuffer_service_members = {
  "loki_msgs::srv",  // service namespace
  "EvalCanBuffer",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<loki_msgs::srv::EvalCanBuffer>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t EvalCanBuffer_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EvalCanBuffer_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace loki_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<loki_msgs::srv::EvalCanBuffer>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::loki_msgs::srv::rosidl_typesupport_introspection_cpp::EvalCanBuffer_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::loki_msgs::srv::EvalCanBuffer_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::loki_msgs::srv::EvalCanBuffer_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, loki_msgs, srv, EvalCanBuffer)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<loki_msgs::srv::EvalCanBuffer>();
}

#ifdef __cplusplus
}
#endif
