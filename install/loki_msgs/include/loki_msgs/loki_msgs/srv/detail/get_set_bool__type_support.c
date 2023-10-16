// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from loki_msgs:srv/GetSetBool.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "loki_msgs/srv/detail/get_set_bool__rosidl_typesupport_introspection_c.h"
#include "loki_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "loki_msgs/srv/detail/get_set_bool__functions.h"
#include "loki_msgs/srv/detail/get_set_bool__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void loki_msgs__srv__GetSetBool_Request__rosidl_typesupport_introspection_c__GetSetBool_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  loki_msgs__srv__GetSetBool_Request__init(message_memory);
}

void loki_msgs__srv__GetSetBool_Request__rosidl_typesupport_introspection_c__GetSetBool_Request_fini_function(void * message_memory)
{
  loki_msgs__srv__GetSetBool_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember loki_msgs__srv__GetSetBool_Request__rosidl_typesupport_introspection_c__GetSetBool_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__srv__GetSetBool_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers loki_msgs__srv__GetSetBool_Request__rosidl_typesupport_introspection_c__GetSetBool_Request_message_members = {
  "loki_msgs__srv",  // message namespace
  "GetSetBool_Request",  // message name
  1,  // number of fields
  sizeof(loki_msgs__srv__GetSetBool_Request),
  loki_msgs__srv__GetSetBool_Request__rosidl_typesupport_introspection_c__GetSetBool_Request_message_member_array,  // message members
  loki_msgs__srv__GetSetBool_Request__rosidl_typesupport_introspection_c__GetSetBool_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  loki_msgs__srv__GetSetBool_Request__rosidl_typesupport_introspection_c__GetSetBool_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t loki_msgs__srv__GetSetBool_Request__rosidl_typesupport_introspection_c__GetSetBool_Request_message_type_support_handle = {
  0,
  &loki_msgs__srv__GetSetBool_Request__rosidl_typesupport_introspection_c__GetSetBool_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_loki_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, GetSetBool_Request)() {
  if (!loki_msgs__srv__GetSetBool_Request__rosidl_typesupport_introspection_c__GetSetBool_Request_message_type_support_handle.typesupport_identifier) {
    loki_msgs__srv__GetSetBool_Request__rosidl_typesupport_introspection_c__GetSetBool_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &loki_msgs__srv__GetSetBool_Request__rosidl_typesupport_introspection_c__GetSetBool_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "loki_msgs/srv/detail/get_set_bool__rosidl_typesupport_introspection_c.h"
// already included above
// #include "loki_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "loki_msgs/srv/detail/get_set_bool__functions.h"
// already included above
// #include "loki_msgs/srv/detail/get_set_bool__struct.h"


// Include directives for member types
// Member `set_bool_strings`
#include "rosidl_runtime_c/string_functions.h"
// Member `set_bool_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__GetSetBool_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  loki_msgs__srv__GetSetBool_Response__init(message_memory);
}

void loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__GetSetBool_Response_fini_function(void * message_memory)
{
  loki_msgs__srv__GetSetBool_Response__fini(message_memory);
}

size_t loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__size_function__GetSetBool_Response__set_bool_strings(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__get_const_function__GetSetBool_Response__set_bool_strings(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__get_function__GetSetBool_Response__set_bool_strings(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__fetch_function__GetSetBool_Response__set_bool_strings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__get_const_function__GetSetBool_Response__set_bool_strings(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__assign_function__GetSetBool_Response__set_bool_strings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__get_function__GetSetBool_Response__set_bool_strings(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__resize_function__GetSetBool_Response__set_bool_strings(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__size_function__GetSetBool_Response__set_bool_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__get_const_function__GetSetBool_Response__set_bool_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__get_function__GetSetBool_Response__set_bool_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__fetch_function__GetSetBool_Response__set_bool_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__get_const_function__GetSetBool_Response__set_bool_values(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__assign_function__GetSetBool_Response__set_bool_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__get_function__GetSetBool_Response__set_bool_values(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__resize_function__GetSetBool_Response__set_bool_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__GetSetBool_Response_message_member_array[2] = {
  {
    "set_bool_strings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__srv__GetSetBool_Response, set_bool_strings),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__size_function__GetSetBool_Response__set_bool_strings,  // size() function pointer
    loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__get_const_function__GetSetBool_Response__set_bool_strings,  // get_const(index) function pointer
    loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__get_function__GetSetBool_Response__set_bool_strings,  // get(index) function pointer
    loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__fetch_function__GetSetBool_Response__set_bool_strings,  // fetch(index, &value) function pointer
    loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__assign_function__GetSetBool_Response__set_bool_strings,  // assign(index, value) function pointer
    loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__resize_function__GetSetBool_Response__set_bool_strings  // resize(index) function pointer
  },
  {
    "set_bool_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__srv__GetSetBool_Response, set_bool_values),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__size_function__GetSetBool_Response__set_bool_values,  // size() function pointer
    loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__get_const_function__GetSetBool_Response__set_bool_values,  // get_const(index) function pointer
    loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__get_function__GetSetBool_Response__set_bool_values,  // get(index) function pointer
    loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__fetch_function__GetSetBool_Response__set_bool_values,  // fetch(index, &value) function pointer
    loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__assign_function__GetSetBool_Response__set_bool_values,  // assign(index, value) function pointer
    loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__resize_function__GetSetBool_Response__set_bool_values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__GetSetBool_Response_message_members = {
  "loki_msgs__srv",  // message namespace
  "GetSetBool_Response",  // message name
  2,  // number of fields
  sizeof(loki_msgs__srv__GetSetBool_Response),
  loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__GetSetBool_Response_message_member_array,  // message members
  loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__GetSetBool_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__GetSetBool_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__GetSetBool_Response_message_type_support_handle = {
  0,
  &loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__GetSetBool_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_loki_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, GetSetBool_Response)() {
  if (!loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__GetSetBool_Response_message_type_support_handle.typesupport_identifier) {
    loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__GetSetBool_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &loki_msgs__srv__GetSetBool_Response__rosidl_typesupport_introspection_c__GetSetBool_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "loki_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "loki_msgs/srv/detail/get_set_bool__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers loki_msgs__srv__detail__get_set_bool__rosidl_typesupport_introspection_c__GetSetBool_service_members = {
  "loki_msgs__srv",  // service namespace
  "GetSetBool",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // loki_msgs__srv__detail__get_set_bool__rosidl_typesupport_introspection_c__GetSetBool_Request_message_type_support_handle,
  NULL  // response message
  // loki_msgs__srv__detail__get_set_bool__rosidl_typesupport_introspection_c__GetSetBool_Response_message_type_support_handle
};

static rosidl_service_type_support_t loki_msgs__srv__detail__get_set_bool__rosidl_typesupport_introspection_c__GetSetBool_service_type_support_handle = {
  0,
  &loki_msgs__srv__detail__get_set_bool__rosidl_typesupport_introspection_c__GetSetBool_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, GetSetBool_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, GetSetBool_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_loki_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, GetSetBool)() {
  if (!loki_msgs__srv__detail__get_set_bool__rosidl_typesupport_introspection_c__GetSetBool_service_type_support_handle.typesupport_identifier) {
    loki_msgs__srv__detail__get_set_bool__rosidl_typesupport_introspection_c__GetSetBool_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)loki_msgs__srv__detail__get_set_bool__rosidl_typesupport_introspection_c__GetSetBool_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, GetSetBool_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, GetSetBool_Response)()->data;
  }

  return &loki_msgs__srv__detail__get_set_bool__rosidl_typesupport_introspection_c__GetSetBool_service_type_support_handle;
}
