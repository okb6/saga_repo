// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from loki_msgs:srv/EvalCanBuffer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "loki_msgs/srv/detail/eval_can_buffer__rosidl_typesupport_introspection_c.h"
#include "loki_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "loki_msgs/srv/detail/eval_can_buffer__functions.h"
#include "loki_msgs/srv/detail/eval_can_buffer__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void loki_msgs__srv__EvalCanBuffer_Request__rosidl_typesupport_introspection_c__EvalCanBuffer_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  loki_msgs__srv__EvalCanBuffer_Request__init(message_memory);
}

void loki_msgs__srv__EvalCanBuffer_Request__rosidl_typesupport_introspection_c__EvalCanBuffer_Request_fini_function(void * message_memory)
{
  loki_msgs__srv__EvalCanBuffer_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember loki_msgs__srv__EvalCanBuffer_Request__rosidl_typesupport_introspection_c__EvalCanBuffer_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__srv__EvalCanBuffer_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers loki_msgs__srv__EvalCanBuffer_Request__rosidl_typesupport_introspection_c__EvalCanBuffer_Request_message_members = {
  "loki_msgs__srv",  // message namespace
  "EvalCanBuffer_Request",  // message name
  1,  // number of fields
  sizeof(loki_msgs__srv__EvalCanBuffer_Request),
  loki_msgs__srv__EvalCanBuffer_Request__rosidl_typesupport_introspection_c__EvalCanBuffer_Request_message_member_array,  // message members
  loki_msgs__srv__EvalCanBuffer_Request__rosidl_typesupport_introspection_c__EvalCanBuffer_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  loki_msgs__srv__EvalCanBuffer_Request__rosidl_typesupport_introspection_c__EvalCanBuffer_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t loki_msgs__srv__EvalCanBuffer_Request__rosidl_typesupport_introspection_c__EvalCanBuffer_Request_message_type_support_handle = {
  0,
  &loki_msgs__srv__EvalCanBuffer_Request__rosidl_typesupport_introspection_c__EvalCanBuffer_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_loki_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, EvalCanBuffer_Request)() {
  if (!loki_msgs__srv__EvalCanBuffer_Request__rosidl_typesupport_introspection_c__EvalCanBuffer_Request_message_type_support_handle.typesupport_identifier) {
    loki_msgs__srv__EvalCanBuffer_Request__rosidl_typesupport_introspection_c__EvalCanBuffer_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &loki_msgs__srv__EvalCanBuffer_Request__rosidl_typesupport_introspection_c__EvalCanBuffer_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "loki_msgs/srv/detail/eval_can_buffer__rosidl_typesupport_introspection_c.h"
// already included above
// #include "loki_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "loki_msgs/srv/detail/eval_can_buffer__functions.h"
// already included above
// #include "loki_msgs/srv/detail/eval_can_buffer__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void loki_msgs__srv__EvalCanBuffer_Response__rosidl_typesupport_introspection_c__EvalCanBuffer_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  loki_msgs__srv__EvalCanBuffer_Response__init(message_memory);
}

void loki_msgs__srv__EvalCanBuffer_Response__rosidl_typesupport_introspection_c__EvalCanBuffer_Response_fini_function(void * message_memory)
{
  loki_msgs__srv__EvalCanBuffer_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember loki_msgs__srv__EvalCanBuffer_Response__rosidl_typesupport_introspection_c__EvalCanBuffer_Response_message_member_array[1] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__srv__EvalCanBuffer_Response, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers loki_msgs__srv__EvalCanBuffer_Response__rosidl_typesupport_introspection_c__EvalCanBuffer_Response_message_members = {
  "loki_msgs__srv",  // message namespace
  "EvalCanBuffer_Response",  // message name
  1,  // number of fields
  sizeof(loki_msgs__srv__EvalCanBuffer_Response),
  loki_msgs__srv__EvalCanBuffer_Response__rosidl_typesupport_introspection_c__EvalCanBuffer_Response_message_member_array,  // message members
  loki_msgs__srv__EvalCanBuffer_Response__rosidl_typesupport_introspection_c__EvalCanBuffer_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  loki_msgs__srv__EvalCanBuffer_Response__rosidl_typesupport_introspection_c__EvalCanBuffer_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t loki_msgs__srv__EvalCanBuffer_Response__rosidl_typesupport_introspection_c__EvalCanBuffer_Response_message_type_support_handle = {
  0,
  &loki_msgs__srv__EvalCanBuffer_Response__rosidl_typesupport_introspection_c__EvalCanBuffer_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_loki_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, EvalCanBuffer_Response)() {
  if (!loki_msgs__srv__EvalCanBuffer_Response__rosidl_typesupport_introspection_c__EvalCanBuffer_Response_message_type_support_handle.typesupport_identifier) {
    loki_msgs__srv__EvalCanBuffer_Response__rosidl_typesupport_introspection_c__EvalCanBuffer_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &loki_msgs__srv__EvalCanBuffer_Response__rosidl_typesupport_introspection_c__EvalCanBuffer_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "loki_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "loki_msgs/srv/detail/eval_can_buffer__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers loki_msgs__srv__detail__eval_can_buffer__rosidl_typesupport_introspection_c__EvalCanBuffer_service_members = {
  "loki_msgs__srv",  // service namespace
  "EvalCanBuffer",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // loki_msgs__srv__detail__eval_can_buffer__rosidl_typesupport_introspection_c__EvalCanBuffer_Request_message_type_support_handle,
  NULL  // response message
  // loki_msgs__srv__detail__eval_can_buffer__rosidl_typesupport_introspection_c__EvalCanBuffer_Response_message_type_support_handle
};

static rosidl_service_type_support_t loki_msgs__srv__detail__eval_can_buffer__rosidl_typesupport_introspection_c__EvalCanBuffer_service_type_support_handle = {
  0,
  &loki_msgs__srv__detail__eval_can_buffer__rosidl_typesupport_introspection_c__EvalCanBuffer_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, EvalCanBuffer_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, EvalCanBuffer_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_loki_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, EvalCanBuffer)() {
  if (!loki_msgs__srv__detail__eval_can_buffer__rosidl_typesupport_introspection_c__EvalCanBuffer_service_type_support_handle.typesupport_identifier) {
    loki_msgs__srv__detail__eval_can_buffer__rosidl_typesupport_introspection_c__EvalCanBuffer_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)loki_msgs__srv__detail__eval_can_buffer__rosidl_typesupport_introspection_c__EvalCanBuffer_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, EvalCanBuffer_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, EvalCanBuffer_Response)()->data;
  }

  return &loki_msgs__srv__detail__eval_can_buffer__rosidl_typesupport_introspection_c__EvalCanBuffer_service_type_support_handle;
}
