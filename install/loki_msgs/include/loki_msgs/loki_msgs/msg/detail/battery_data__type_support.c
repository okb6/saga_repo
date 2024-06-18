// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from loki_msgs:msg/BatteryData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "loki_msgs/msg/detail/battery_data__rosidl_typesupport_introspection_c.h"
#include "loki_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "loki_msgs/msg/detail/battery_data__functions.h"
#include "loki_msgs/msg/detail/battery_data__struct.h"


// Include directives for member types
// Member `temperatures`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `battery_alarms`
#include "loki_msgs/msg/battery_alarms.h"
// Member `battery_alarms`
#include "loki_msgs/msg/detail/battery_alarms__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__BatteryData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  loki_msgs__msg__BatteryData__init(message_memory);
}

void loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__BatteryData_fini_function(void * message_memory)
{
  loki_msgs__msg__BatteryData__fini(message_memory);
}

size_t loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__size_function__BatteryData__temperatures(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__get_const_function__BatteryData__temperatures(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__get_function__BatteryData__temperatures(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__fetch_function__BatteryData__temperatures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__get_const_function__BatteryData__temperatures(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__assign_function__BatteryData__temperatures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__get_function__BatteryData__temperatures(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__resize_function__BatteryData__temperatures(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__BatteryData_message_member_array[12] = {
  {
    "battery_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BatteryData, battery_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BatteryData, battery_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperatures",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BatteryData, temperatures),  // bytes offset in struct
    NULL,  // default value
    loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__size_function__BatteryData__temperatures,  // size() function pointer
    loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__get_const_function__BatteryData__temperatures,  // get_const(index) function pointer
    loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__get_function__BatteryData__temperatures,  // get(index) function pointer
    loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__fetch_function__BatteryData__temperatures,  // fetch(index, &value) function pointer
    loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__assign_function__BatteryData__temperatures,  // assign(index, value) function pointer
    loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__resize_function__BatteryData__temperatures  // resize(index) function pointer
  },
  {
    "battery_alarms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BatteryData, battery_alarms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "charge_fet_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BatteryData, charge_fet_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "discharge_fet_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BatteryData, discharge_fet_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BatteryData, battery_voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BatteryData, battery_current),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_of_charge",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BatteryData, state_of_charge),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_of_health",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BatteryData, state_of_health),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cycle_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BatteryData, cycle_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_capacity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(loki_msgs__msg__BatteryData, battery_capacity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__BatteryData_message_members = {
  "loki_msgs__msg",  // message namespace
  "BatteryData",  // message name
  12,  // number of fields
  sizeof(loki_msgs__msg__BatteryData),
  loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__BatteryData_message_member_array,  // message members
  loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__BatteryData_init_function,  // function to initialize message memory (memory has to be allocated)
  loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__BatteryData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__BatteryData_message_type_support_handle = {
  0,
  &loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__BatteryData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_loki_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, msg, BatteryData)() {
  loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__BatteryData_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, msg, BatteryAlarms)();
  if (!loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__BatteryData_message_type_support_handle.typesupport_identifier) {
    loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__BatteryData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &loki_msgs__msg__BatteryData__rosidl_typesupport_introspection_c__BatteryData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
