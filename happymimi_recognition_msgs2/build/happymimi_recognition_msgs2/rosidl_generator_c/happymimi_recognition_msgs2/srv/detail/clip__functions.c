// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from happymimi_recognition_msgs2:srv/Clip.idl
// generated code does not contain a copyright notice
#include "happymimi_recognition_msgs2/srv/detail/clip__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
happymimi_recognition_msgs2__srv__Clip_Request__init(happymimi_recognition_msgs2__srv__Clip_Request * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    happymimi_recognition_msgs2__srv__Clip_Request__fini(msg);
    return false;
  }
  return true;
}

void
happymimi_recognition_msgs2__srv__Clip_Request__fini(happymimi_recognition_msgs2__srv__Clip_Request * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__String__fini(&msg->data);
}

bool
happymimi_recognition_msgs2__srv__Clip_Request__are_equal(const happymimi_recognition_msgs2__srv__Clip_Request * lhs, const happymimi_recognition_msgs2__srv__Clip_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
happymimi_recognition_msgs2__srv__Clip_Request__copy(
  const happymimi_recognition_msgs2__srv__Clip_Request * input,
  happymimi_recognition_msgs2__srv__Clip_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

happymimi_recognition_msgs2__srv__Clip_Request *
happymimi_recognition_msgs2__srv__Clip_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__srv__Clip_Request * msg = (happymimi_recognition_msgs2__srv__Clip_Request *)allocator.allocate(sizeof(happymimi_recognition_msgs2__srv__Clip_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymimi_recognition_msgs2__srv__Clip_Request));
  bool success = happymimi_recognition_msgs2__srv__Clip_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymimi_recognition_msgs2__srv__Clip_Request__destroy(happymimi_recognition_msgs2__srv__Clip_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymimi_recognition_msgs2__srv__Clip_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymimi_recognition_msgs2__srv__Clip_Request__Sequence__init(happymimi_recognition_msgs2__srv__Clip_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__srv__Clip_Request * data = NULL;

  if (size) {
    data = (happymimi_recognition_msgs2__srv__Clip_Request *)allocator.zero_allocate(size, sizeof(happymimi_recognition_msgs2__srv__Clip_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymimi_recognition_msgs2__srv__Clip_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymimi_recognition_msgs2__srv__Clip_Request__fini(&data[i - 1]);
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
happymimi_recognition_msgs2__srv__Clip_Request__Sequence__fini(happymimi_recognition_msgs2__srv__Clip_Request__Sequence * array)
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
      happymimi_recognition_msgs2__srv__Clip_Request__fini(&array->data[i]);
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

happymimi_recognition_msgs2__srv__Clip_Request__Sequence *
happymimi_recognition_msgs2__srv__Clip_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__srv__Clip_Request__Sequence * array = (happymimi_recognition_msgs2__srv__Clip_Request__Sequence *)allocator.allocate(sizeof(happymimi_recognition_msgs2__srv__Clip_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymimi_recognition_msgs2__srv__Clip_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymimi_recognition_msgs2__srv__Clip_Request__Sequence__destroy(happymimi_recognition_msgs2__srv__Clip_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymimi_recognition_msgs2__srv__Clip_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymimi_recognition_msgs2__srv__Clip_Request__Sequence__are_equal(const happymimi_recognition_msgs2__srv__Clip_Request__Sequence * lhs, const happymimi_recognition_msgs2__srv__Clip_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymimi_recognition_msgs2__srv__Clip_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymimi_recognition_msgs2__srv__Clip_Request__Sequence__copy(
  const happymimi_recognition_msgs2__srv__Clip_Request__Sequence * input,
  happymimi_recognition_msgs2__srv__Clip_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymimi_recognition_msgs2__srv__Clip_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymimi_recognition_msgs2__srv__Clip_Request * data =
      (happymimi_recognition_msgs2__srv__Clip_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymimi_recognition_msgs2__srv__Clip_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymimi_recognition_msgs2__srv__Clip_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymimi_recognition_msgs2__srv__Clip_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
happymimi_recognition_msgs2__srv__Clip_Response__init(happymimi_recognition_msgs2__srv__Clip_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    happymimi_recognition_msgs2__srv__Clip_Response__fini(msg);
    return false;
  }
  return true;
}

void
happymimi_recognition_msgs2__srv__Clip_Response__fini(happymimi_recognition_msgs2__srv__Clip_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  rosidl_runtime_c__String__fini(&msg->result);
}

bool
happymimi_recognition_msgs2__srv__Clip_Response__are_equal(const happymimi_recognition_msgs2__srv__Clip_Response * lhs, const happymimi_recognition_msgs2__srv__Clip_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
happymimi_recognition_msgs2__srv__Clip_Response__copy(
  const happymimi_recognition_msgs2__srv__Clip_Response * input,
  happymimi_recognition_msgs2__srv__Clip_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

happymimi_recognition_msgs2__srv__Clip_Response *
happymimi_recognition_msgs2__srv__Clip_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__srv__Clip_Response * msg = (happymimi_recognition_msgs2__srv__Clip_Response *)allocator.allocate(sizeof(happymimi_recognition_msgs2__srv__Clip_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymimi_recognition_msgs2__srv__Clip_Response));
  bool success = happymimi_recognition_msgs2__srv__Clip_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymimi_recognition_msgs2__srv__Clip_Response__destroy(happymimi_recognition_msgs2__srv__Clip_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymimi_recognition_msgs2__srv__Clip_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymimi_recognition_msgs2__srv__Clip_Response__Sequence__init(happymimi_recognition_msgs2__srv__Clip_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__srv__Clip_Response * data = NULL;

  if (size) {
    data = (happymimi_recognition_msgs2__srv__Clip_Response *)allocator.zero_allocate(size, sizeof(happymimi_recognition_msgs2__srv__Clip_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymimi_recognition_msgs2__srv__Clip_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymimi_recognition_msgs2__srv__Clip_Response__fini(&data[i - 1]);
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
happymimi_recognition_msgs2__srv__Clip_Response__Sequence__fini(happymimi_recognition_msgs2__srv__Clip_Response__Sequence * array)
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
      happymimi_recognition_msgs2__srv__Clip_Response__fini(&array->data[i]);
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

happymimi_recognition_msgs2__srv__Clip_Response__Sequence *
happymimi_recognition_msgs2__srv__Clip_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__srv__Clip_Response__Sequence * array = (happymimi_recognition_msgs2__srv__Clip_Response__Sequence *)allocator.allocate(sizeof(happymimi_recognition_msgs2__srv__Clip_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymimi_recognition_msgs2__srv__Clip_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymimi_recognition_msgs2__srv__Clip_Response__Sequence__destroy(happymimi_recognition_msgs2__srv__Clip_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymimi_recognition_msgs2__srv__Clip_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymimi_recognition_msgs2__srv__Clip_Response__Sequence__are_equal(const happymimi_recognition_msgs2__srv__Clip_Response__Sequence * lhs, const happymimi_recognition_msgs2__srv__Clip_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymimi_recognition_msgs2__srv__Clip_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymimi_recognition_msgs2__srv__Clip_Response__Sequence__copy(
  const happymimi_recognition_msgs2__srv__Clip_Response__Sequence * input,
  happymimi_recognition_msgs2__srv__Clip_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymimi_recognition_msgs2__srv__Clip_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymimi_recognition_msgs2__srv__Clip_Response * data =
      (happymimi_recognition_msgs2__srv__Clip_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymimi_recognition_msgs2__srv__Clip_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymimi_recognition_msgs2__srv__Clip_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymimi_recognition_msgs2__srv__Clip_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
