// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from loki_msgs:srv/DriveParams.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "loki_msgs/srv/detail/drive_params__rosidl_typesupport_introspection_c.h"
#include "loki_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "loki_msgs/srv/detail/drive_params__functions.h"
#include "loki_msgs/srv/detail/drive_params__struct.h"


// Include directives for member types
// Member `params`
#include "loki_msgs/msg/drive_param.h"
// Member `params`
#include "loki_msgs/msg/detail/drive_param__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__DriveParams_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  loki_msgs__srv__DriveParams_Request__init(message_memory);
}

void loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__DriveParams_Request_fini_function(void * message_memory)
{
  loki_msgs__srv__DriveParams_Request__fini(message_memory);
}

size_t loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__size_function__DriveParams_Request__params(
  const void * untyped_member)
{
  const loki_msgs__msg__DriveParam__Sequence * member =
    (const loki_msgs__msg__DriveParam__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__get_const_function__DriveParams_Request__params(
  const void * untyped_member, size_t index)
{
  const loki_msgs__msg__DriveParam__Sequence * member =
    (const loki_msgs__msg__DriveParam__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__get_function__DriveParams_Request__params(
  void * untyped_member, size_t index)
{
  loki_msgs__msg__DriveParam__Sequence * member =
    (loki_msgs__msg__DriveParam__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__fetch_function__DriveParams_Request__params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const loki_msgs__msg__DriveParam * item =
    ((const loki_msgs__msg__DriveParam *)
    loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__get_const_function__DriveParams_Request__params(untyped_member, index));
  loki_msgs__msg__DriveParam * value =
    (loki_msgs__msg__DriveParam *)(untyped_value);
  *value = *item;
}

void loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__assign_function__DriveParams_Request__params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  loki_msgs__msg__DriveParam * item =
    ((loki_msgs__msg__DriveParam *)
    loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__get_function__DriveParams_Request__params(untyped_member, index));
  const loki_msgs__msg__DriveParam * value =
    (const loki_msgs__msg__DriveParam *)(untyped_value);
  *item = *value;
}

bool loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__resize_function__DriveParams_Request__params(
  void * untyped_member, size_t size)
{
  loki_msgs__msg__DriveParam__Sequence * member =
    (loki_msgs__msg__DriveParam__Sequence *)(untyped_member);
  loki_msgs__msg__DriveParam__Sequence__fini(member);
  return loki_msgs__msg__DriveParam__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__DriveParams_Request_message_member_array[2] = {
  {
    "params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__srv__DriveParams_Request, params),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__size_function__DriveParams_Request__params,  // size() function pointer
    loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__get_const_function__DriveParams_Request__params,  // get_const(index) function pointer
    loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__get_function__DriveParams_Request__params,  // get(index) function pointer
    loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__fetch_function__DriveParams_Request__params,  // fetch(index, &value) function pointer
    loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__assign_function__DriveParams_Request__params,  // assign(index, value) function pointer
    loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__resize_function__DriveParams_Request__params  // resize(index) function pointer
  },
  {
    "can_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__srv__DriveParams_Request, can_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__DriveParams_Request_message_members = {
  "loki_msgs__srv",  // message namespace
  "DriveParams_Request",  // message name
  2,  // number of fields
  sizeof(loki_msgs__srv__DriveParams_Request),
  loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__DriveParams_Request_message_member_array,  // message members
  loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__DriveParams_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__DriveParams_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__DriveParams_Request_message_type_support_handle = {
  0,
  &loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__DriveParams_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_loki_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, DriveParams_Request)() {
  loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__DriveParams_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, msg, DriveParam)();
  if (!loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__DriveParams_Request_message_type_support_handle.typesupport_identifier) {
    loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__DriveParams_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &loki_msgs__srv__DriveParams_Request__rosidl_typesupport_introspection_c__DriveParams_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "loki_msgs/srv/detail/drive_params__rosidl_typesupport_introspection_c.h"
// already included above
// #include "loki_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "loki_msgs/srv/detail/drive_params__functions.h"
// already included above
// #include "loki_msgs/srv/detail/drive_params__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void loki_msgs__srv__DriveParams_Response__rosidl_typesupport_introspection_c__DriveParams_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  loki_msgs__srv__DriveParams_Response__init(message_memory);
}

void loki_msgs__srv__DriveParams_Response__rosidl_typesupport_introspection_c__DriveParams_Response_fini_function(void * message_memory)
{
  loki_msgs__srv__DriveParams_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember loki_msgs__srv__DriveParams_Response__rosidl_typesupport_introspection_c__DriveParams_Response_message_member_array[2] = {
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__srv__DriveParams_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__srv__DriveParams_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers loki_msgs__srv__DriveParams_Response__rosidl_typesupport_introspection_c__DriveParams_Response_message_members = {
  "loki_msgs__srv",  // message namespace
  "DriveParams_Response",  // message name
  2,  // number of fields
  sizeof(loki_msgs__srv__DriveParams_Response),
  loki_msgs__srv__DriveParams_Response__rosidl_typesupport_introspection_c__DriveParams_Response_message_member_array,  // message members
  loki_msgs__srv__DriveParams_Response__rosidl_typesupport_introspection_c__DriveParams_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  loki_msgs__srv__DriveParams_Response__rosidl_typesupport_introspection_c__DriveParams_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t loki_msgs__srv__DriveParams_Response__rosidl_typesupport_introspection_c__DriveParams_Response_message_type_support_handle = {
  0,
  &loki_msgs__srv__DriveParams_Response__rosidl_typesupport_introspection_c__DriveParams_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_loki_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, DriveParams_Response)() {
  if (!loki_msgs__srv__DriveParams_Response__rosidl_typesupport_introspection_c__DriveParams_Response_message_type_support_handle.typesupport_identifier) {
    loki_msgs__srv__DriveParams_Response__rosidl_typesupport_introspection_c__DriveParams_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &loki_msgs__srv__DriveParams_Response__rosidl_typesupport_introspection_c__DriveParams_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "loki_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "loki_msgs/srv/detail/drive_params__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers loki_msgs__srv__detail__drive_params__rosidl_typesupport_introspection_c__DriveParams_service_members = {
  "loki_msgs__srv",  // service namespace
  "DriveParams",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // loki_msgs__srv__detail__drive_params__rosidl_typesupport_introspection_c__DriveParams_Request_message_type_support_handle,
  NULL  // response message
  // loki_msgs__srv__detail__drive_params__rosidl_typesupport_introspection_c__DriveParams_Response_message_type_support_handle
};

static rosidl_service_type_support_t loki_msgs__srv__detail__drive_params__rosidl_typesupport_introspection_c__DriveParams_service_type_support_handle = {
  0,
  &loki_msgs__srv__detail__drive_params__rosidl_typesupport_introspection_c__DriveParams_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, DriveParams_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, DriveParams_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_loki_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, DriveParams)() {
  if (!loki_msgs__srv__detail__drive_params__rosidl_typesupport_introspection_c__DriveParams_service_type_support_handle.typesupport_identifier) {
    loki_msgs__srv__detail__drive_params__rosidl_typesupport_introspection_c__DriveParams_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)loki_msgs__srv__detail__drive_params__rosidl_typesupport_introspection_c__DriveParams_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, DriveParams_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, DriveParams_Response)()->data;
  }

  return &loki_msgs__srv__detail__drive_params__rosidl_typesupport_introspection_c__DriveParams_service_type_support_handle;
}
