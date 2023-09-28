// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from loki_msgs:msg/BatteryData.idl
// generated code does not contain a copyright notice
#include "loki_msgs/msg/detail/battery_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `temperatures`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `battery_alarms`
#include "loki_msgs/msg/detail/battery_alarms__functions.h"

bool
loki_msgs__msg__BatteryData__init(loki_msgs__msg__BatteryData * msg)
{
  if (!msg) {
    return false;
  }
  // battery_id
  // battery_state
  // temperatures
  if (!rosidl_runtime_c__double__Sequence__init(&msg->temperatures, 0)) {
    loki_msgs__msg__BatteryData__fini(msg);
    return false;
  }
  // battery_alarms
  if (!loki_msgs__msg__BatteryAlarms__init(&msg->battery_alarms)) {
    loki_msgs__msg__BatteryData__fini(msg);
    return false;
  }
  // charge_fet_on
  // discharge_fet_on
  // battery_voltage
  // battery_current
  // state_of_charge
  // state_of_health
  // cycle_count
  // battery_capacity
  return true;
}

void
loki_msgs__msg__BatteryData__fini(loki_msgs__msg__BatteryData * msg)
{
  if (!msg) {
    return;
  }
  // battery_id
  // battery_state
  // temperatures
  rosidl_runtime_c__double__Sequence__fini(&msg->temperatures);
  // battery_alarms
  loki_msgs__msg__BatteryAlarms__fini(&msg->battery_alarms);
  // charge_fet_on
  // discharge_fet_on
  // battery_voltage
  // battery_current
  // state_of_charge
  // state_of_health
  // cycle_count
  // battery_capacity
}

bool
loki_msgs__msg__BatteryData__are_equal(const loki_msgs__msg__BatteryData * lhs, const loki_msgs__msg__BatteryData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // battery_id
  if (lhs->battery_id != rhs->battery_id) {
    return false;
  }
  // battery_state
  if (lhs->battery_state != rhs->battery_state) {
    return false;
  }
  // temperatures
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->temperatures), &(rhs->temperatures)))
  {
    return false;
  }
  // battery_alarms
  if (!loki_msgs__msg__BatteryAlarms__are_equal(
      &(lhs->battery_alarms), &(rhs->battery_alarms)))
  {
    return false;
  }
  // charge_fet_on
  if (lhs->charge_fet_on != rhs->charge_fet_on) {
    return false;
  }
  // discharge_fet_on
  if (lhs->discharge_fet_on != rhs->discharge_fet_on) {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // battery_current
  if (lhs->battery_current != rhs->battery_current) {
    return false;
  }
  // state_of_charge
  if (lhs->state_of_charge != rhs->state_of_charge) {
    return false;
  }
  // state_of_health
  if (lhs->state_of_health != rhs->state_of_health) {
    return false;
  }
  // cycle_count
  if (lhs->cycle_count != rhs->cycle_count) {
    return false;
  }
  // battery_capacity
  if (lhs->battery_capacity != rhs->battery_capacity) {
    return false;
  }
  return true;
}

bool
loki_msgs__msg__BatteryData__copy(
  const loki_msgs__msg__BatteryData * input,
  loki_msgs__msg__BatteryData * output)
{
  if (!input || !output) {
    return false;
  }
  // battery_id
  output->battery_id = input->battery_id;
  // battery_state
  output->battery_state = input->battery_state;
  // temperatures
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->temperatures), &(output->temperatures)))
  {
    return false;
  }
  // battery_alarms
  if (!loki_msgs__msg__BatteryAlarms__copy(
      &(input->battery_alarms), &(output->battery_alarms)))
  {
    return false;
  }
  // charge_fet_on
  output->charge_fet_on = input->charge_fet_on;
  // discharge_fet_on
  output->discharge_fet_on = input->discharge_fet_on;
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // battery_current
  output->battery_current = input->battery_current;
  // state_of_charge
  output->state_of_charge = input->state_of_charge;
  // state_of_health
  output->state_of_health = input->state_of_health;
  // cycle_count
  output->cycle_count = input->cycle_count;
  // battery_capacity
  output->battery_capacity = input->battery_capacity;
  return true;
}

loki_msgs__msg__BatteryData *
loki_msgs__msg__BatteryData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__BatteryData * msg = (loki_msgs__msg__BatteryData *)allocator.allocate(sizeof(loki_msgs__msg__BatteryData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(loki_msgs__msg__BatteryData));
  bool success = loki_msgs__msg__BatteryData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
loki_msgs__msg__BatteryData__destroy(loki_msgs__msg__BatteryData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    loki_msgs__msg__BatteryData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
loki_msgs__msg__BatteryData__Sequence__init(loki_msgs__msg__BatteryData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__BatteryData * data = NULL;

  if (size) {
    data = (loki_msgs__msg__BatteryData *)allocator.zero_allocate(size, sizeof(loki_msgs__msg__BatteryData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = loki_msgs__msg__BatteryData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        loki_msgs__msg__BatteryData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
loki_msgs__msg__BatteryData__Sequence__fini(loki_msgs__msg__BatteryData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      loki_msgs__msg__BatteryData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

loki_msgs__msg__BatteryData__Sequence *
loki_msgs__msg__BatteryData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__BatteryData__Sequence * array = (loki_msgs__msg__BatteryData__Sequence *)allocator.allocate(sizeof(loki_msgs__msg__BatteryData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = loki_msgs__msg__BatteryData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
loki_msgs__msg__BatteryData__Sequence__destroy(loki_msgs__msg__BatteryData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    loki_msgs__msg__BatteryData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
loki_msgs__msg__BatteryData__Sequence__are_equal(const loki_msgs__msg__BatteryData__Sequence * lhs, const loki_msgs__msg__BatteryData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!loki_msgs__msg__BatteryData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
loki_msgs__msg__BatteryData__Sequence__copy(
  const loki_msgs__msg__BatteryData__Sequence * input,
  loki_msgs__msg__BatteryData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(loki_msgs__msg__BatteryData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    loki_msgs__msg__BatteryData * data =
      (loki_msgs__msg__BatteryData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!loki_msgs__msg__BatteryData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          loki_msgs__msg__BatteryData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!loki_msgs__msg__BatteryData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
