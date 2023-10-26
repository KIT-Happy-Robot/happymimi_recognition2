// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from happymimi_recognition_msgs2:action/RecognitionProcessing.idl
// generated code does not contain a copyright notice
#include "happymimi_recognition_msgs2/action/detail/recognition_processing__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `sort_option`
#include "happymimi_msgs_ros2/msg/detail/str_int__functions.h"

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__init(happymimi_recognition_msgs2__action__RecognitionProcessing_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_name
  if (!rosidl_runtime_c__String__init(&msg->target_name)) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__fini(msg);
    return false;
  }
  // sort_option
  if (!happymimi_msgs_ros2__msg__StrInt__init(&msg->sort_option)) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__fini(msg);
    return false;
  }
  return true;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_name
  rosidl_runtime_c__String__fini(&msg->target_name);
  // sort_option
  happymimi_msgs_ros2__msg__StrInt__fini(&msg->sort_option);
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_Goal * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_name), &(rhs->target_name)))
  {
    return false;
  }
  // sort_option
  if (!happymimi_msgs_ros2__msg__StrInt__are_equal(
      &(lhs->sort_option), &(rhs->sort_option)))
  {
    return false;
  }
  return true;
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_Goal * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // target_name
  if (!rosidl_runtime_c__String__copy(
      &(input->target_name), &(output->target_name)))
  {
    return false;
  }
  // sort_option
  if (!happymimi_msgs_ros2__msg__StrInt__copy(
      &(input->sort_option), &(output->sort_option)))
  {
    return false;
  }
  return true;
}

happymimi_recognition_msgs2__action__RecognitionProcessing_Goal *
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_Goal * msg = (happymimi_recognition_msgs2__action__RecognitionProcessing_Goal *)allocator.allocate(sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_Goal));
  bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence__init(happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_Goal * data = NULL;

  if (size) {
    data = (happymimi_recognition_msgs2__action__RecognitionProcessing_Goal *)allocator.zero_allocate(size, sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__fini(&data[i - 1]);
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
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence * array)
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
      happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__fini(&array->data[i]);
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

happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence *
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence * array = (happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence *)allocator.allocate(sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymimi_recognition_msgs2__action__RecognitionProcessing_Goal * data =
      (happymimi_recognition_msgs2__action__RecognitionProcessing_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `centroid_point`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__init(happymimi_recognition_msgs2__action__RecognitionProcessing_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result_flg
  // centroid_point
  if (!geometry_msgs__msg__Point__init(&msg->centroid_point)) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_Result__fini(msg);
    return false;
  }
  return true;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_Result * msg)
{
  if (!msg) {
    return;
  }
  // result_flg
  // centroid_point
  geometry_msgs__msg__Point__fini(&msg->centroid_point);
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_Result * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result_flg
  if (lhs->result_flg != rhs->result_flg) {
    return false;
  }
  // centroid_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->centroid_point), &(rhs->centroid_point)))
  {
    return false;
  }
  return true;
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_Result * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result_flg
  output->result_flg = input->result_flg;
  // centroid_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->centroid_point), &(output->centroid_point)))
  {
    return false;
  }
  return true;
}

happymimi_recognition_msgs2__action__RecognitionProcessing_Result *
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_Result * msg = (happymimi_recognition_msgs2__action__RecognitionProcessing_Result *)allocator.allocate(sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_Result));
  bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence__init(happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_Result * data = NULL;

  if (size) {
    data = (happymimi_recognition_msgs2__action__RecognitionProcessing_Result *)allocator.zero_allocate(size, sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymimi_recognition_msgs2__action__RecognitionProcessing_Result__fini(&data[i - 1]);
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
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence * array)
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
      happymimi_recognition_msgs2__action__RecognitionProcessing_Result__fini(&array->data[i]);
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

happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence *
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence * array = (happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence *)allocator.allocate(sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymimi_recognition_msgs2__action__RecognitionProcessing_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymimi_recognition_msgs2__action__RecognitionProcessing_Result * data =
      (happymimi_recognition_msgs2__action__RecognitionProcessing_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymimi_recognition_msgs2__action__RecognitionProcessing_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymimi_recognition_msgs2__action__RecognitionProcessing_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymimi_recognition_msgs2__action__RecognitionProcessing_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__init(happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback_flg
  return true;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback_flg
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback_flg
  if (lhs->feedback_flg != rhs->feedback_flg) {
    return false;
  }
  return true;
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback_flg
  output->feedback_flg = input->feedback_flg;
  return true;
}

happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback *
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback * msg = (happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback *)allocator.allocate(sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback));
  bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence__init(happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback * data = NULL;

  if (size) {
    data = (happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback *)allocator.zero_allocate(size, sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__fini(&data[i - 1]);
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
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence * array)
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
      happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__fini(&array->data[i]);
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

happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence *
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence * array = (happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence *)allocator.allocate(sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback * data =
      (happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "happymimi_recognition_msgs2/action/detail/recognition_processing__functions.h"

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__init(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__init(&msg->goal)) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__fini(&msg->goal);
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request *
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request * msg = (happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request *)allocator.allocate(sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request));
  bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence__init(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request * data = NULL;

  if (size) {
    data = (happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request *)allocator.zero_allocate(size, sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__fini(&data[i - 1]);
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
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence * array)
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
      happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__fini(&array->data[i]);
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

happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence *
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence * array = (happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence *)allocator.allocate(sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request * data =
      (happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__init(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response *
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response * msg = (happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response *)allocator.allocate(sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response));
  bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence__init(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response * data = NULL;

  if (size) {
    data = (happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response *)allocator.zero_allocate(size, sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__fini(&data[i - 1]);
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
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence * array)
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
      happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__fini(&array->data[i]);
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

happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence *
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence * array = (happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence *)allocator.allocate(sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response * data =
      (happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__init(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request *
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request * msg = (happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request *)allocator.allocate(sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request));
  bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence__init(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request * data = NULL;

  if (size) {
    data = (happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request *)allocator.zero_allocate(size, sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__fini(&data[i - 1]);
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
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence * array)
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
      happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__fini(&array->data[i]);
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

happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence *
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence * array = (happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence *)allocator.allocate(sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request * data =
      (happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__copy(
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
// #include "happymimi_recognition_msgs2/action/detail/recognition_processing__functions.h"

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__init(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!happymimi_recognition_msgs2__action__RecognitionProcessing_Result__init(&msg->result)) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  happymimi_recognition_msgs2__action__RecognitionProcessing_Result__fini(&msg->result);
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!happymimi_recognition_msgs2__action__RecognitionProcessing_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!happymimi_recognition_msgs2__action__RecognitionProcessing_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response *
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response * msg = (happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response *)allocator.allocate(sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response));
  bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence__init(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response * data = NULL;

  if (size) {
    data = (happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response *)allocator.zero_allocate(size, sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__fini(&data[i - 1]);
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
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence * array)
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
      happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__fini(&array->data[i]);
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

happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence *
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence * array = (happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence *)allocator.allocate(sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response * data =
      (happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "happymimi_recognition_msgs2/action/detail/recognition_processing__functions.h"

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__init(happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__init(&msg->feedback)) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__fini(&msg->feedback);
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage *
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage * msg = (happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage *)allocator.allocate(sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage));
  bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence__init(happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage * data = NULL;

  if (size) {
    data = (happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage *)allocator.zero_allocate(size, sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__fini(&data[i - 1]);
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
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence * array)
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
      happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__fini(&array->data[i]);
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

happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence *
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence * array = (happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence *)allocator.allocate(sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage * data =
      (happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
