// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from loki_msgs:srv/SetBools.idl
// generated code does not contain a copyright notice
#include "loki_msgs/srv/detail/set_bools__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
loki_msgs__srv__SetBools_Request__init(loki_msgs__srv__SetBools_Request * msg)
{
  if (!msg) {
    return false;
  }
  // unique_service_id
  // value
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    loki_msgs__srv__SetBools_Request__fini(msg);
    return false;
  }
  return true;
}

void
loki_msgs__srv__SetBools_Request__fini(loki_msgs__srv__SetBools_Request * msg)
{
  if (!msg) {
    return;
  }
  // unique_service_id
  // value
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
loki_msgs__srv__SetBools_Request__are_equal(const loki_msgs__srv__SetBools_Request * lhs, const loki_msgs__srv__SetBools_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // unique_service_id
  if (lhs->unique_service_id != rhs->unique_service_id) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
loki_msgs__srv__SetBools_Request__copy(
  const loki_msgs__srv__SetBools_Request * input,
  loki_msgs__srv__SetBools_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // unique_service_id
  output->unique_service_id = input->unique_service_id;
  // value
  output->value = input->value;
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

loki_msgs__srv__SetBools_Request *
loki_msgs__srv__SetBools_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__srv__SetBools_Request * msg = (loki_msgs__srv__SetBools_Request *)allocator.allocate(sizeof(loki_msgs__srv__SetBools_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(loki_msgs__srv__SetBools_Request));
  bool success = loki_msgs__srv__SetBools_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
loki_msgs__srv__SetBools_Request__destroy(loki_msgs__srv__SetBools_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    loki_msgs__srv__SetBools_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
loki_msgs__srv__SetBools_Request__Sequence__init(loki_msgs__srv__SetBools_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__srv__SetBools_Request * data = NULL;

  if (size) {
    data = (loki_msgs__srv__SetBools_Request *)allocator.zero_allocate(size, sizeof(loki_msgs__srv__SetBools_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = loki_msgs__srv__SetBools_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        loki_msgs__srv__SetBools_Request__fini(&data[i - 1]);
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
loki_msgs__srv__SetBools_Request__Sequence__fini(loki_msgs__srv__SetBools_Request__Sequence * array)
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
      loki_msgs__srv__SetBools_Request__fini(&array->data[i]);
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

loki_msgs__srv__SetBools_Request__Sequence *
loki_msgs__srv__SetBools_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__srv__SetBools_Request__Sequence * array = (loki_msgs__srv__SetBools_Request__Sequence *)allocator.allocate(sizeof(loki_msgs__srv__SetBools_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = loki_msgs__srv__SetBools_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
loki_msgs__srv__SetBools_Request__Sequence__destroy(loki_msgs__srv__SetBools_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    loki_msgs__srv__SetBools_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
loki_msgs__srv__SetBools_Request__Sequence__are_equal(const loki_msgs__srv__SetBools_Request__Sequence * lhs, const loki_msgs__srv__SetBools_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!loki_msgs__srv__SetBools_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
loki_msgs__srv__SetBools_Request__Sequence__copy(
  const loki_msgs__srv__SetBools_Request__Sequence * input,
  loki_msgs__srv__SetBools_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(loki_msgs__srv__SetBools_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    loki_msgs__srv__SetBools_Request * data =
      (loki_msgs__srv__SetBools_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!loki_msgs__srv__SetBools_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          loki_msgs__srv__SetBools_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!loki_msgs__srv__SetBools_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
loki_msgs__srv__SetBools_Response__init(loki_msgs__srv__SetBools_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    loki_msgs__srv__SetBools_Response__fini(msg);
    return false;
  }
  return true;
}

void
loki_msgs__srv__SetBools_Response__fini(loki_msgs__srv__SetBools_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
loki_msgs__srv__SetBools_Response__are_equal(const loki_msgs__srv__SetBools_Response * lhs, const loki_msgs__srv__SetBools_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
loki_msgs__srv__SetBools_Response__copy(
  const loki_msgs__srv__SetBools_Response * input,
  loki_msgs__srv__SetBools_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

loki_msgs__srv__SetBools_Response *
loki_msgs__srv__SetBools_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__srv__SetBools_Response * msg = (loki_msgs__srv__SetBools_Response *)allocator.allocate(sizeof(loki_msgs__srv__SetBools_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(loki_msgs__srv__SetBools_Response));
  bool success = loki_msgs__srv__SetBools_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
loki_msgs__srv__SetBools_Response__destroy(loki_msgs__srv__SetBools_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    loki_msgs__srv__SetBools_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
loki_msgs__srv__SetBools_Response__Sequence__init(loki_msgs__srv__SetBools_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__srv__SetBools_Response * data = NULL;

  if (size) {
    data = (loki_msgs__srv__SetBools_Response *)allocator.zero_allocate(size, sizeof(loki_msgs__srv__SetBools_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = loki_msgs__srv__SetBools_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        loki_msgs__srv__SetBools_Response__fini(&data[i - 1]);
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
loki_msgs__srv__SetBools_Response__Sequence__fini(loki_msgs__srv__SetBools_Response__Sequence * array)
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
      loki_msgs__srv__SetBools_Response__fini(&array->data[i]);
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

loki_msgs__srv__SetBools_Response__Sequence *
loki_msgs__srv__SetBools_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  loki_msgs__srv__SetBools_Response__Sequence * array = (loki_msgs__srv__SetBools_Response__Sequence *)allocator.allocate(sizeof(loki_msgs__srv__SetBools_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = loki_msgs__srv__SetBools_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
loki_msgs__srv__SetBools_Response__Sequence__destroy(loki_msgs__srv__SetBools_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    loki_msgs__srv__SetBools_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
loki_msgs__srv__SetBools_Response__Sequence__are_equal(const loki_msgs__srv__SetBools_Response__Sequence * lhs, const loki_msgs__srv__SetBools_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!loki_msgs__srv__SetBools_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
loki_msgs__srv__SetBools_Response__Sequence__copy(
  const loki_msgs__srv__SetBools_Response__Sequence * input,
  loki_msgs__srv__SetBools_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(loki_msgs__srv__SetBools_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    loki_msgs__srv__SetBools_Response * data =
      (loki_msgs__srv__SetBools_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!loki_msgs__srv__SetBools_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          loki_msgs__srv__SetBools_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!loki_msgs__srv__SetBools_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
