// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from loki_msgs:msg/ThorvaldIO.idl
// generated code does not contain a copyright notice
#include "loki_msgs/msg/detail/thorvald_io__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `analogs`
// Member `digitals`
// Member `ranges`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
loki_msgs__msg__ThorvaldIO__init(loki_msgs__msg__ThorvaldIO * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    loki_msgs__msg__ThorvaldIO__fini(msg);
    return false;
  }
  // analogs
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->analogs, 0)) {
    loki_msgs__msg__ThorvaldIO__fini(msg);
    return false;
  }
  // digitals
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->digitals, 0)) {
    loki_msgs__msg__ThorvaldIO__fini(msg);
    return false;
  }
  // ranges
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->ranges, 0)) {
    loki_msgs__msg__ThorvaldIO__fini(msg);
    return false;
  }
  return true;
}

void
loki_msgs__msg__ThorvaldIO__fini(loki_msgs__msg__ThorvaldIO * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // analogs
  rosidl_runtime_c__int16__Sequence__fini(&msg->analogs);
  // digitals
  rosidl_runtime_c__boolean__Sequence__fini(&msg->digitals);
  // ranges
  rosidl_runtime_c__int16__Sequence__fini(&msg->ranges);
}

bool
loki_msgs__msg__ThorvaldIO__are_equal(const loki_msgs__msg__ThorvaldIO * lhs, const loki_msgs__msg__ThorvaldIO * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // analogs
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->analogs), &(rhs->analogs)))
  {
    return false;
  }
  // digitals
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->digitals), &(rhs->digitals)))
  {
    return false;
  }
  // ranges
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->ranges), &(rhs->ranges)))
  {
    return false;
  }
  return true;
}

bool
loki_msgs__msg__ThorvaldIO__copy(
  const loki_msgs__msg__ThorvaldIO * input,
  loki_msgs__msg__ThorvaldIO * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // analogs
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->analogs), &(output->analogs)))
  {
    return false;
  }
  // digitals
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->digitals), &(output->digitals)))
  {
    return false;
  }
  // ranges
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->ranges), &(output->ranges)))
  {
    return false;
  }
  return true;
}

loki_msgs__msg__ThorvaldIO *
loki_msgs__msg__ThorvaldIO__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__ThorvaldIO * msg = (loki_msgs__msg__ThorvaldIO *)allocator.allocate(sizeof(loki_msgs__msg__ThorvaldIO), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(loki_msgs__msg__ThorvaldIO));
  bool success = loki_msgs__msg__ThorvaldIO__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
loki_msgs__msg__ThorvaldIO__destroy(loki_msgs__msg__ThorvaldIO * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    loki_msgs__msg__ThorvaldIO__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
loki_msgs__msg__ThorvaldIO__Sequence__init(loki_msgs__msg__ThorvaldIO__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__ThorvaldIO * data = NULL;

  if (size) {
    data = (loki_msgs__msg__ThorvaldIO *)allocator.zero_allocate(size, sizeof(loki_msgs__msg__ThorvaldIO), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = loki_msgs__msg__ThorvaldIO__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        loki_msgs__msg__ThorvaldIO__fini(&data[i - 1]);
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
loki_msgs__msg__ThorvaldIO__Sequence__fini(loki_msgs__msg__ThorvaldIO__Sequence * array)
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
      loki_msgs__msg__ThorvaldIO__fini(&array->data[i]);
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

loki_msgs__msg__ThorvaldIO__Sequence *
loki_msgs__msg__ThorvaldIO__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__msg__ThorvaldIO__Sequence * array = (loki_msgs__msg__ThorvaldIO__Sequence *)allocator.allocate(sizeof(loki_msgs__msg__ThorvaldIO__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = loki_msgs__msg__ThorvaldIO__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
loki_msgs__msg__ThorvaldIO__Sequence__destroy(loki_msgs__msg__ThorvaldIO__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    loki_msgs__msg__ThorvaldIO__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
loki_msgs__msg__ThorvaldIO__Sequence__are_equal(const loki_msgs__msg__ThorvaldIO__Sequence * lhs, const loki_msgs__msg__ThorvaldIO__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!loki_msgs__msg__ThorvaldIO__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
loki_msgs__msg__ThorvaldIO__Sequence__copy(
  const loki_msgs__msg__ThorvaldIO__Sequence * input,
  loki_msgs__msg__ThorvaldIO__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(loki_msgs__msg__ThorvaldIO);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    loki_msgs__msg__ThorvaldIO * data =
      (loki_msgs__msg__ThorvaldIO *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!loki_msgs__msg__ThorvaldIO__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          loki_msgs__msg__ThorvaldIO__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!loki_msgs__msg__ThorvaldIO__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
