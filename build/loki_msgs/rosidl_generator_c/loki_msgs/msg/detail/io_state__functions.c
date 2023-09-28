// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from loki_msgs:msg/IOState.idl
// generated code does not contain a copyright notice
#include "loki_msgs/msg/detail/io_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `version`
// Member `analog_names`
// Member `digital_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `analog_values`
// Member `digital_values`
// Member `ranges`
// Member `temps`
// Member `humidities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `imu`
#include "sensor_msgs/msg/detail/imu__functions.h"

bool
loki_msgs__msg__IOState__init(loki_msgs__msg__IOState * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    loki_msgs__msg__IOState__fini(msg);
    return false;
  }
  // version
  if (!rosidl_runtime_c__String__init(&msg->version)) {
    loki_msgs__msg__IOState__fini(msg);
    return false;
  }
  // analog_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->analog_names, 0)) {
    loki_msgs__msg__IOState__fini(msg);
    return false;
  }
  // analog_values
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->analog_values, 0)) {
    loki_msgs__msg__IOState__fini(msg);
    return false;
  }
  // digital_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->digital_names, 0)) {
    loki_msgs__msg__IOState__fini(msg);
    return false;
  }
  // digital_values
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->digital_values, 0)) {
    loki_msgs__msg__IOState__fini(msg);
    return false;
  }
  // ranges
  if (!rosidl_runtime_c__double__Sequence__init(&msg->ranges, 0)) {
    loki_msgs__msg__IOState__fini(msg);
    return false;
  }
  // temps
  if (!rosidl_runtime_c__double__Sequence__init(&msg->temps, 0)) {
    loki_msgs__msg__IOState__fini(msg);
    return false;
  }
  // humidities
  if (!rosidl_runtime_c__double__Sequence__init(&msg->humidities, 0)) {
    loki_msgs__msg__IOState__fini(msg);
    return false;
  }
  // imu
  if (!sensor_msgs__msg__Imu__init(&msg->imu)) {
    loki_msgs__msg__IOState__fini(msg);
    return false;
  }
  return true;
}

void
loki_msgs__msg__IOState__fini(loki_msgs__msg__IOState * msg)
{
  if (!msg) {
    return;
  }
  // id
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // version
  rosidl_runtime_c__String__fini(&msg->version);
  // analog_names
  rosidl_runtime_c__String__Sequence__fini(&msg->analog_names);
  // analog_values
  rosidl_runtime_c__int32__Sequence__fini(&msg->analog_values);
  // digital_names
  rosidl_runtime_c__String__Sequence__fini(&msg->digital_names);
  // digital_values
  rosidl_runtime_c__boolean__Sequence__fini(&msg->digital_values);
  // ranges
  rosidl_runtime_c__double__Sequence__fini(&msg->ranges);
  // temps
  rosidl_runtime_c__double__Sequence__fini(&msg->temps);
  // humidities
  rosidl_runtime_c__double__Sequence__fini(&msg->humidities);
  // imu
  sensor_msgs__msg__Imu__fini(&msg->imu);
}

bool
loki_msgs__msg__IOState__are_equal(const loki_msgs__msg__IOState * lhs, const loki_msgs__msg__IOState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version), &(rhs->version)))
  {
    return false;
  }
  // analog_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->analog_names), &(rhs->analog_names)))
  {
    return false;
  }
  // analog_values
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->analog_values), &(rhs->analog_values)))
  {
    return false;
  }
  // digital_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->digital_names), &(rhs->digital_names)))
  {
    return false;
  }
  // digital_values
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->digital_values), &(rhs->digital_values)))
  {
    return false;
  }
  // ranges
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->ranges), &(rhs->ranges)))
  {
    return false;
  }
  // temps
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->temps), &(rhs->temps)))
  {
    return false;
  }
  // humidities
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->humidities), &(rhs->humidities)))
  {
    return false;
  }
  // imu
  if (!sensor_msgs__msg__Imu__are_equal(
      &(lhs->imu), &(rhs->imu)))
  {
    return false;
  }
  return true;
}

bool
loki_msgs__msg__IOState__copy(
  const loki_msgs__msg__IOState * input,
  loki_msgs__msg__IOState * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // version
  if (!rosidl_runtime_c__String__copy(
      &(input->version), &(output->version)))
  {
    return false;
  }
  // analog_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->analog_names), &(output->analog_names)))
  {
    return false;
  }
  // analog_values
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->analog_values), &(output->analog_values)))
  {
    return false;
  }
  // digital_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->digital_names), &(output->digital_names)))
  {
    return false;
  }
  // digital_values
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->digital_values), &(output->digital_values)))
  {
    return false;
  }
  // ranges
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->ranges), &(output->ranges)))
  {
    return false;
  }
  // temps
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->temps), &(output->temps)))
  {
    return false;
  }
  // humidities
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->humidities), &(output->humidities)))
  {
    return false;
  }
  // imu
  if (!sensor_msgs__msg__Imu__copy(
      &(input->imu), &(output->imu)))
  {
    return false;
  }
  return true;
}

loki_msgs__msg__IOState *
loki_msgs__msg__IOState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__IOState * msg = (loki_msgs__msg__IOState *)allocator.allocate(sizeof(loki_msgs__msg__IOState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(loki_msgs__msg__IOState));
  bool success = loki_msgs__msg__IOState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
loki_msgs__msg__IOState__destroy(loki_msgs__msg__IOState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    loki_msgs__msg__IOState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
loki_msgs__msg__IOState__Sequence__init(loki_msgs__msg__IOState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__IOState * data = NULL;

  if (size) {
    data = (loki_msgs__msg__IOState *)allocator.zero_allocate(size, sizeof(loki_msgs__msg__IOState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = loki_msgs__msg__IOState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        loki_msgs__msg__IOState__fini(&data[i - 1]);
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
loki_msgs__msg__IOState__Sequence__fini(loki_msgs__msg__IOState__Sequence * array)
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
      loki_msgs__msg__IOState__fini(&array->data[i]);
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

loki_msgs__msg__IOState__Sequence *
loki_msgs__msg__IOState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__IOState__Sequence * array = (loki_msgs__msg__IOState__Sequence *)allocator.allocate(sizeof(loki_msgs__msg__IOState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = loki_msgs__msg__IOState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
loki_msgs__msg__IOState__Sequence__destroy(loki_msgs__msg__IOState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    loki_msgs__msg__IOState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
loki_msgs__msg__IOState__Sequence__are_equal(const loki_msgs__msg__IOState__Sequence * lhs, const loki_msgs__msg__IOState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!loki_msgs__msg__IOState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
loki_msgs__msg__IOState__Sequence__copy(
  const loki_msgs__msg__IOState__Sequence * input,
  loki_msgs__msg__IOState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(loki_msgs__msg__IOState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    loki_msgs__msg__IOState * data =
      (loki_msgs__msg__IOState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!loki_msgs__msg__IOState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          loki_msgs__msg__IOState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!loki_msgs__msg__IOState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
