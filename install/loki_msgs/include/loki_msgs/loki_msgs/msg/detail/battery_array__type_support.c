// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from loki_msgs:msg/BatteryArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "loki_msgs/msg/detail/battery_array__rosidl_typesupport_introspection_c.h"
#include "loki_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "loki_msgs/msg/detail/battery_array__functions.h"
#include "loki_msgs/msg/detail/battery_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `battery_data`
#include "loki_msgs/msg/battery_data.h"
// Member `battery_data`
#include "loki_msgs/msg/detail/battery_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__BatteryArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  loki_msgs__msg__BatteryArray__init(message_memory);
}

void loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__BatteryArray_fini_function(void * message_memory)
{
  loki_msgs__msg__BatteryArray__fini(message_memory);
}

size_t loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__size_function__BatteryArray__battery_data(
  const void * untyped_member)
{
  const loki_msgs__msg__BatteryData__Sequence * member =
    (const loki_msgs__msg__BatteryData__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__get_const_function__BatteryArray__battery_data(
  const void * untyped_member, size_t index)
{
  const loki_msgs__msg__BatteryData__Sequence * member =
    (const loki_msgs__msg__BatteryData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__get_function__BatteryArray__battery_data(
  void * untyped_member, size_t index)
{
  loki_msgs__msg__BatteryData__Sequence * member =
    (loki_msgs__msg__BatteryData__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__fetch_function__BatteryArray__battery_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const loki_msgs__msg__BatteryData * item =
    ((const loki_msgs__msg__BatteryData *)
    loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__get_const_function__BatteryArray__battery_data(untyped_member, index));
  loki_msgs__msg__BatteryData * value =
    (loki_msgs__msg__BatteryData *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__assign_function__BatteryArray__battery_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  loki_msgs__msg__BatteryData * item =
    ((loki_msgs__msg__BatteryData *)
    loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__get_function__BatteryArray__battery_data(untyped_member, index));
  const loki_msgs__msg__BatteryData * value =
    (const loki_msgs__msg__BatteryData *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__resize_function__BatteryArray__battery_data(
  void * untyped_member, size_t size)
{
  loki_msgs__msg__BatteryData__Sequence * member =
    (loki_msgs__msg__BatteryData__Sequence *)(untyped_member);
  loki_msgs__msg__BatteryData__Sequence__fini(member);
  return loki_msgs__msg__BatteryData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__BatteryArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BatteryArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BatteryArray, battery_data),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__size_function__BatteryArray__battery_data,  // size() function pointer
    loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__get_const_function__BatteryArray__battery_data,  // get_const(index) function pointer
    loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__get_function__BatteryArray__battery_data,  // get(index) function pointer
    loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__fetch_function__BatteryArray__battery_data,  // fetch(index, &value) function pointer
    loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__assign_function__BatteryArray__battery_data,  // assign(index, value) function pointer
    loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__resize_function__BatteryArray__battery_data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__BatteryArray_message_members = {
  "loki_msgs__msg",  // message namespace
  "BatteryArray",  // message name
  2,  // number of fields
  sizeof(loki_msgs__msg__BatteryArray),
  loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__BatteryArray_message_member_array,  // message members
  loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__BatteryArray_init_function,  // function to initialize message memory (memory has to be allocated)
  loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__BatteryArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__BatteryArray_message_type_support_handle = {
  0,
  &loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__BatteryArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_loki_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, msg, BatteryArray)() {
  loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__BatteryArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__BatteryArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, msg, BatteryData)();
  if (!loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__BatteryArray_message_type_support_handle.typesupport_identifier) {
    loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__BatteryArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &loki_msgs__msg__BatteryArray__rosidl_typesupport_introspection_c__BatteryArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
