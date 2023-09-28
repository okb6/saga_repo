// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from loki_msgs:msg/BatteryAlarms.idl
// generated code does not contain a copyright notice
#include "loki_msgs/msg/detail/battery_alarms__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
loki_msgs__msg__BatteryAlarms__init(loki_msgs__msg__BatteryAlarms * msg)
{
  if (!msg) {
    return false;
  }
  // over_voltage_protection
  // under_voltage_protection
  // over_temperature_protection
  // under_temperature_protection
  // over_charge_current
  // over_discharge_current
  // can_communication_fail
  // cell_voltage_sensing_fault
  // bms_fail
  // short_circuit_discharge
  // temperature_sensing_fault
  // over_voltage_fault
  // under_voltage_fault
  // pack_voltage_sensing_fault
  return true;
}

void
loki_msgs__msg__BatteryAlarms__fini(loki_msgs__msg__BatteryAlarms * msg)
{
  if (!msg) {
    return;
  }
  // over_voltage_protection
  // under_voltage_protection
  // over_temperature_protection
  // under_temperature_protection
  // over_charge_current
  // over_discharge_current
  // can_communication_fail
  // cell_voltage_sensing_fault
  // bms_fail
  // short_circuit_discharge
  // temperature_sensing_fault
  // over_voltage_fault
  // under_voltage_fault
  // pack_voltage_sensing_fault
}

bool
loki_msgs__msg__BatteryAlarms__are_equal(const loki_msgs__msg__BatteryAlarms * lhs, const loki_msgs__msg__BatteryAlarms * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // over_voltage_protection
  if (lhs->over_voltage_protection != rhs->over_voltage_protection) {
    return false;
  }
  // under_voltage_protection
  if (lhs->under_voltage_protection != rhs->under_voltage_protection) {
    return false;
  }
  // over_temperature_protection
  if (lhs->over_temperature_protection != rhs->over_temperature_protection) {
    return false;
  }
  // under_temperature_protection
  if (lhs->under_temperature_protection != rhs->under_temperature_protection) {
    return false;
  }
  // over_charge_current
  if (lhs->over_charge_current != rhs->over_charge_current) {
    return false;
  }
  // over_discharge_current
  if (lhs->over_discharge_current != rhs->over_discharge_current) {
    return false;
  }
  // can_communication_fail
  if (lhs->can_communication_fail != rhs->can_communication_fail) {
    return false;
  }
  // cell_voltage_sensing_fault
  if (lhs->cell_voltage_sensing_fault != rhs->cell_voltage_sensing_fault) {
    return false;
  }
  // bms_fail
  if (lhs->bms_fail != rhs->bms_fail) {
    return false;
  }
  // short_circuit_discharge
  if (lhs->short_circuit_discharge != rhs->short_circuit_discharge) {
    return false;
  }
  // temperature_sensing_fault
  if (lhs->temperature_sensing_fault != rhs->temperature_sensing_fault) {
    return false;
  }
  // over_voltage_fault
  if (lhs->over_voltage_fault != rhs->over_voltage_fault) {
    return false;
  }
  // under_voltage_fault
  if (lhs->under_voltage_fault != rhs->under_voltage_fault) {
    return false;
  }
  // pack_voltage_sensing_fault
  if (lhs->pack_voltage_sensing_fault != rhs->pack_voltage_sensing_fault) {
    return false;
  }
  return true;
}

bool
loki_msgs__msg__BatteryAlarms__copy(
  const loki_msgs__msg__BatteryAlarms * input,
  loki_msgs__msg__BatteryAlarms * output)
{
  if (!input || !output) {
    return false;
  }
  // over_voltage_protection
  output->over_voltage_protection = input->over_voltage_protection;
  // under_voltage_protection
  output->under_voltage_protection = input->under_voltage_protection;
  // over_temperature_protection
  output->over_temperature_protection = input->over_temperature_protection;
  // under_temperature_protection
  output->under_temperature_protection = input->under_temperature_protection;
  // over_charge_current
  output->over_charge_current = input->over_charge_current;
  // over_discharge_current
  output->over_discharge_current = input->over_discharge_current;
  // can_communication_fail
  output->can_communication_fail = input->can_communication_fail;
  // cell_voltage_sensing_fault
  output->cell_voltage_sensing_fault = input->cell_voltage_sensing_fault;
  // bms_fail
  output->bms_fail = input->bms_fail;
  // short_circuit_discharge
  output->short_circuit_discharge = input->short_circuit_discharge;
  // temperature_sensing_fault
  output->temperature_sensing_fault = input->temperature_sensing_fault;
  // over_voltage_fault
  output->over_voltage_fault = input->over_voltage_fault;
  // under_voltage_fault
  output->under_voltage_fault = input->under_voltage_fault;
  // pack_voltage_sensing_fault
  output->pack_voltage_sensing_fault = input->pack_voltage_sensing_fault;
  return true;
}

loki_msgs__msg__BatteryAlarms *
loki_msgs__msg__BatteryAlarms__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__BatteryAlarms * msg = (loki_msgs__msg__BatteryAlarms *)allocator.allocate(sizeof(loki_msgs__msg__BatteryAlarms), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(loki_msgs__msg__BatteryAlarms));
  bool success = loki_msgs__msg__BatteryAlarms__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
loki_msgs__msg__BatteryAlarms__destroy(loki_msgs__msg__BatteryAlarms * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    loki_msgs__msg__BatteryAlarms__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
loki_msgs__msg__BatteryAlarms__Sequence__init(loki_msgs__msg__BatteryAlarms__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__BatteryAlarms * data = NULL;

  if (size) {
    data = (loki_msgs__msg__BatteryAlarms *)allocator.zero_allocate(size, sizeof(loki_msgs__msg__BatteryAlarms), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = loki_msgs__msg__BatteryAlarms__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        loki_msgs__msg__BatteryAlarms__fini(&data[i - 1]);
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
loki_msgs__msg__BatteryAlarms__Sequence__fini(loki_msgs__msg__BatteryAlarms__Sequence * array)
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
      loki_msgs__msg__BatteryAlarms__fini(&array->data[i]);
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

loki_msgs__msg__BatteryAlarms__Sequence *
loki_msgs__msg__BatteryAlarms__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__BatteryAlarms__Sequence * array = (loki_msgs__msg__BatteryAlarms__Sequence *)allocator.allocate(sizeof(loki_msgs__msg__BatteryAlarms__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = loki_msgs__msg__BatteryAlarms__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
loki_msgs__msg__BatteryAlarms__Sequence__destroy(loki_msgs__msg__BatteryAlarms__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    loki_msgs__msg__BatteryAlarms__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
loki_msgs__msg__BatteryAlarms__Sequence__are_equal(const loki_msgs__msg__BatteryAlarms__Sequence * lhs, const loki_msgs__msg__BatteryAlarms__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!loki_msgs__msg__BatteryAlarms__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
loki_msgs__msg__BatteryAlarms__Sequence__copy(
  const loki_msgs__msg__BatteryAlarms__Sequence * input,
  loki_msgs__msg__BatteryAlarms__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(loki_msgs__msg__BatteryAlarms);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    loki_msgs__msg__BatteryAlarms * data =
      (loki_msgs__msg__BatteryAlarms *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!loki_msgs__msg__BatteryAlarms__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          loki_msgs__msg__BatteryAlarms__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!loki_msgs__msg__BatteryAlarms__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
