// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pid_interfaces:action/YawPid.idl
// generated code does not contain a copyright notice
#include "pid_interfaces/action/detail/yaw_pid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
pid_interfaces__action__YawPid_Goal__init(pid_interfaces__action__YawPid_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_yaw
  return true;
}

void
pid_interfaces__action__YawPid_Goal__fini(pid_interfaces__action__YawPid_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_yaw
}

bool
pid_interfaces__action__YawPid_Goal__are_equal(const pid_interfaces__action__YawPid_Goal * lhs, const pid_interfaces__action__YawPid_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_yaw
  if (lhs->target_yaw != rhs->target_yaw) {
    return false;
  }
  return true;
}

bool
pid_interfaces__action__YawPid_Goal__copy(
  const pid_interfaces__action__YawPid_Goal * input,
  pid_interfaces__action__YawPid_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // target_yaw
  output->target_yaw = input->target_yaw;
  return true;
}

pid_interfaces__action__YawPid_Goal *
pid_interfaces__action__YawPid_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_Goal * msg = (pid_interfaces__action__YawPid_Goal *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pid_interfaces__action__YawPid_Goal));
  bool success = pid_interfaces__action__YawPid_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pid_interfaces__action__YawPid_Goal__destroy(pid_interfaces__action__YawPid_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pid_interfaces__action__YawPid_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pid_interfaces__action__YawPid_Goal__Sequence__init(pid_interfaces__action__YawPid_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_Goal * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_Goal)) {
      return false;
    }
    data = (pid_interfaces__action__YawPid_Goal *)allocator.zero_allocate(size, sizeof(pid_interfaces__action__YawPid_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pid_interfaces__action__YawPid_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pid_interfaces__action__YawPid_Goal__fini(&data[i - 1]);
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
pid_interfaces__action__YawPid_Goal__Sequence__fini(pid_interfaces__action__YawPid_Goal__Sequence * array)
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
      pid_interfaces__action__YawPid_Goal__fini(&array->data[i]);
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

pid_interfaces__action__YawPid_Goal__Sequence *
pid_interfaces__action__YawPid_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_Goal__Sequence * array = (pid_interfaces__action__YawPid_Goal__Sequence *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pid_interfaces__action__YawPid_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pid_interfaces__action__YawPid_Goal__Sequence__destroy(pid_interfaces__action__YawPid_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pid_interfaces__action__YawPid_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pid_interfaces__action__YawPid_Goal__Sequence__are_equal(const pid_interfaces__action__YawPid_Goal__Sequence * lhs, const pid_interfaces__action__YawPid_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pid_interfaces__action__YawPid_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pid_interfaces__action__YawPid_Goal__Sequence__copy(
  const pid_interfaces__action__YawPid_Goal__Sequence * input,
  pid_interfaces__action__YawPid_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_Goal)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pid_interfaces__action__YawPid_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pid_interfaces__action__YawPid_Goal * data =
      (pid_interfaces__action__YawPid_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pid_interfaces__action__YawPid_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pid_interfaces__action__YawPid_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pid_interfaces__action__YawPid_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
pid_interfaces__action__YawPid_Result__init(pid_interfaces__action__YawPid_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    pid_interfaces__action__YawPid_Result__fini(msg);
    return false;
  }
  // angle_turned
  return true;
}

void
pid_interfaces__action__YawPid_Result__fini(pid_interfaces__action__YawPid_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // angle_turned
}

bool
pid_interfaces__action__YawPid_Result__are_equal(const pid_interfaces__action__YawPid_Result * lhs, const pid_interfaces__action__YawPid_Result * rhs)
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
  // angle_turned
  if (lhs->angle_turned != rhs->angle_turned) {
    return false;
  }
  return true;
}

bool
pid_interfaces__action__YawPid_Result__copy(
  const pid_interfaces__action__YawPid_Result * input,
  pid_interfaces__action__YawPid_Result * output)
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
  // angle_turned
  output->angle_turned = input->angle_turned;
  return true;
}

pid_interfaces__action__YawPid_Result *
pid_interfaces__action__YawPid_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_Result * msg = (pid_interfaces__action__YawPid_Result *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pid_interfaces__action__YawPid_Result));
  bool success = pid_interfaces__action__YawPid_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pid_interfaces__action__YawPid_Result__destroy(pid_interfaces__action__YawPid_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pid_interfaces__action__YawPid_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pid_interfaces__action__YawPid_Result__Sequence__init(pid_interfaces__action__YawPid_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_Result * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_Result)) {
      return false;
    }
    data = (pid_interfaces__action__YawPid_Result *)allocator.zero_allocate(size, sizeof(pid_interfaces__action__YawPid_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pid_interfaces__action__YawPid_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pid_interfaces__action__YawPid_Result__fini(&data[i - 1]);
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
pid_interfaces__action__YawPid_Result__Sequence__fini(pid_interfaces__action__YawPid_Result__Sequence * array)
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
      pid_interfaces__action__YawPid_Result__fini(&array->data[i]);
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

pid_interfaces__action__YawPid_Result__Sequence *
pid_interfaces__action__YawPid_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_Result__Sequence * array = (pid_interfaces__action__YawPid_Result__Sequence *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pid_interfaces__action__YawPid_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pid_interfaces__action__YawPid_Result__Sequence__destroy(pid_interfaces__action__YawPid_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pid_interfaces__action__YawPid_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pid_interfaces__action__YawPid_Result__Sequence__are_equal(const pid_interfaces__action__YawPid_Result__Sequence * lhs, const pid_interfaces__action__YawPid_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pid_interfaces__action__YawPid_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pid_interfaces__action__YawPid_Result__Sequence__copy(
  const pid_interfaces__action__YawPid_Result__Sequence * input,
  pid_interfaces__action__YawPid_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_Result)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pid_interfaces__action__YawPid_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pid_interfaces__action__YawPid_Result * data =
      (pid_interfaces__action__YawPid_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pid_interfaces__action__YawPid_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pid_interfaces__action__YawPid_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pid_interfaces__action__YawPid_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
pid_interfaces__action__YawPid_Feedback__init(pid_interfaces__action__YawPid_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_yaw
  return true;
}

void
pid_interfaces__action__YawPid_Feedback__fini(pid_interfaces__action__YawPid_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_yaw
}

bool
pid_interfaces__action__YawPid_Feedback__are_equal(const pid_interfaces__action__YawPid_Feedback * lhs, const pid_interfaces__action__YawPid_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_yaw
  if (lhs->current_yaw != rhs->current_yaw) {
    return false;
  }
  return true;
}

bool
pid_interfaces__action__YawPid_Feedback__copy(
  const pid_interfaces__action__YawPid_Feedback * input,
  pid_interfaces__action__YawPid_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_yaw
  output->current_yaw = input->current_yaw;
  return true;
}

pid_interfaces__action__YawPid_Feedback *
pid_interfaces__action__YawPid_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_Feedback * msg = (pid_interfaces__action__YawPid_Feedback *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pid_interfaces__action__YawPid_Feedback));
  bool success = pid_interfaces__action__YawPid_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pid_interfaces__action__YawPid_Feedback__destroy(pid_interfaces__action__YawPid_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pid_interfaces__action__YawPid_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pid_interfaces__action__YawPid_Feedback__Sequence__init(pid_interfaces__action__YawPid_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_Feedback * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_Feedback)) {
      return false;
    }
    data = (pid_interfaces__action__YawPid_Feedback *)allocator.zero_allocate(size, sizeof(pid_interfaces__action__YawPid_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pid_interfaces__action__YawPid_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pid_interfaces__action__YawPid_Feedback__fini(&data[i - 1]);
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
pid_interfaces__action__YawPid_Feedback__Sequence__fini(pid_interfaces__action__YawPid_Feedback__Sequence * array)
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
      pid_interfaces__action__YawPid_Feedback__fini(&array->data[i]);
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

pid_interfaces__action__YawPid_Feedback__Sequence *
pid_interfaces__action__YawPid_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_Feedback__Sequence * array = (pid_interfaces__action__YawPid_Feedback__Sequence *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pid_interfaces__action__YawPid_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pid_interfaces__action__YawPid_Feedback__Sequence__destroy(pid_interfaces__action__YawPid_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pid_interfaces__action__YawPid_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pid_interfaces__action__YawPid_Feedback__Sequence__are_equal(const pid_interfaces__action__YawPid_Feedback__Sequence * lhs, const pid_interfaces__action__YawPid_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pid_interfaces__action__YawPid_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pid_interfaces__action__YawPid_Feedback__Sequence__copy(
  const pid_interfaces__action__YawPid_Feedback__Sequence * input,
  pid_interfaces__action__YawPid_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_Feedback)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pid_interfaces__action__YawPid_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pid_interfaces__action__YawPid_Feedback * data =
      (pid_interfaces__action__YawPid_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pid_interfaces__action__YawPid_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pid_interfaces__action__YawPid_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pid_interfaces__action__YawPid_Feedback__copy(
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
// #include "pid_interfaces/action/detail/yaw_pid__functions.h"

bool
pid_interfaces__action__YawPid_SendGoal_Request__init(pid_interfaces__action__YawPid_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pid_interfaces__action__YawPid_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!pid_interfaces__action__YawPid_Goal__init(&msg->goal)) {
    pid_interfaces__action__YawPid_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
pid_interfaces__action__YawPid_SendGoal_Request__fini(pid_interfaces__action__YawPid_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  pid_interfaces__action__YawPid_Goal__fini(&msg->goal);
}

bool
pid_interfaces__action__YawPid_SendGoal_Request__are_equal(const pid_interfaces__action__YawPid_SendGoal_Request * lhs, const pid_interfaces__action__YawPid_SendGoal_Request * rhs)
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
  if (!pid_interfaces__action__YawPid_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
pid_interfaces__action__YawPid_SendGoal_Request__copy(
  const pid_interfaces__action__YawPid_SendGoal_Request * input,
  pid_interfaces__action__YawPid_SendGoal_Request * output)
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
  if (!pid_interfaces__action__YawPid_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

pid_interfaces__action__YawPid_SendGoal_Request *
pid_interfaces__action__YawPid_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_SendGoal_Request * msg = (pid_interfaces__action__YawPid_SendGoal_Request *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pid_interfaces__action__YawPid_SendGoal_Request));
  bool success = pid_interfaces__action__YawPid_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pid_interfaces__action__YawPid_SendGoal_Request__destroy(pid_interfaces__action__YawPid_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pid_interfaces__action__YawPid_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pid_interfaces__action__YawPid_SendGoal_Request__Sequence__init(pid_interfaces__action__YawPid_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_SendGoal_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_SendGoal_Request)) {
      return false;
    }
    data = (pid_interfaces__action__YawPid_SendGoal_Request *)allocator.zero_allocate(size, sizeof(pid_interfaces__action__YawPid_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pid_interfaces__action__YawPid_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pid_interfaces__action__YawPid_SendGoal_Request__fini(&data[i - 1]);
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
pid_interfaces__action__YawPid_SendGoal_Request__Sequence__fini(pid_interfaces__action__YawPid_SendGoal_Request__Sequence * array)
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
      pid_interfaces__action__YawPid_SendGoal_Request__fini(&array->data[i]);
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

pid_interfaces__action__YawPid_SendGoal_Request__Sequence *
pid_interfaces__action__YawPid_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_SendGoal_Request__Sequence * array = (pid_interfaces__action__YawPid_SendGoal_Request__Sequence *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pid_interfaces__action__YawPid_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pid_interfaces__action__YawPid_SendGoal_Request__Sequence__destroy(pid_interfaces__action__YawPid_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pid_interfaces__action__YawPid_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pid_interfaces__action__YawPid_SendGoal_Request__Sequence__are_equal(const pid_interfaces__action__YawPid_SendGoal_Request__Sequence * lhs, const pid_interfaces__action__YawPid_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pid_interfaces__action__YawPid_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pid_interfaces__action__YawPid_SendGoal_Request__Sequence__copy(
  const pid_interfaces__action__YawPid_SendGoal_Request__Sequence * input,
  pid_interfaces__action__YawPid_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_SendGoal_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pid_interfaces__action__YawPid_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pid_interfaces__action__YawPid_SendGoal_Request * data =
      (pid_interfaces__action__YawPid_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pid_interfaces__action__YawPid_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pid_interfaces__action__YawPid_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pid_interfaces__action__YawPid_SendGoal_Request__copy(
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
pid_interfaces__action__YawPid_SendGoal_Response__init(pid_interfaces__action__YawPid_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    pid_interfaces__action__YawPid_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
pid_interfaces__action__YawPid_SendGoal_Response__fini(pid_interfaces__action__YawPid_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
pid_interfaces__action__YawPid_SendGoal_Response__are_equal(const pid_interfaces__action__YawPid_SendGoal_Response * lhs, const pid_interfaces__action__YawPid_SendGoal_Response * rhs)
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
pid_interfaces__action__YawPid_SendGoal_Response__copy(
  const pid_interfaces__action__YawPid_SendGoal_Response * input,
  pid_interfaces__action__YawPid_SendGoal_Response * output)
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

pid_interfaces__action__YawPid_SendGoal_Response *
pid_interfaces__action__YawPid_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_SendGoal_Response * msg = (pid_interfaces__action__YawPid_SendGoal_Response *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pid_interfaces__action__YawPid_SendGoal_Response));
  bool success = pid_interfaces__action__YawPid_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pid_interfaces__action__YawPid_SendGoal_Response__destroy(pid_interfaces__action__YawPid_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pid_interfaces__action__YawPid_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pid_interfaces__action__YawPid_SendGoal_Response__Sequence__init(pid_interfaces__action__YawPid_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_SendGoal_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_SendGoal_Response)) {
      return false;
    }
    data = (pid_interfaces__action__YawPid_SendGoal_Response *)allocator.zero_allocate(size, sizeof(pid_interfaces__action__YawPid_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pid_interfaces__action__YawPid_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pid_interfaces__action__YawPid_SendGoal_Response__fini(&data[i - 1]);
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
pid_interfaces__action__YawPid_SendGoal_Response__Sequence__fini(pid_interfaces__action__YawPid_SendGoal_Response__Sequence * array)
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
      pid_interfaces__action__YawPid_SendGoal_Response__fini(&array->data[i]);
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

pid_interfaces__action__YawPid_SendGoal_Response__Sequence *
pid_interfaces__action__YawPid_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_SendGoal_Response__Sequence * array = (pid_interfaces__action__YawPid_SendGoal_Response__Sequence *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pid_interfaces__action__YawPid_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pid_interfaces__action__YawPid_SendGoal_Response__Sequence__destroy(pid_interfaces__action__YawPid_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pid_interfaces__action__YawPid_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pid_interfaces__action__YawPid_SendGoal_Response__Sequence__are_equal(const pid_interfaces__action__YawPid_SendGoal_Response__Sequence * lhs, const pid_interfaces__action__YawPid_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pid_interfaces__action__YawPid_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pid_interfaces__action__YawPid_SendGoal_Response__Sequence__copy(
  const pid_interfaces__action__YawPid_SendGoal_Response__Sequence * input,
  pid_interfaces__action__YawPid_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_SendGoal_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pid_interfaces__action__YawPid_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pid_interfaces__action__YawPid_SendGoal_Response * data =
      (pid_interfaces__action__YawPid_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pid_interfaces__action__YawPid_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pid_interfaces__action__YawPid_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pid_interfaces__action__YawPid_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__functions.h"

bool
pid_interfaces__action__YawPid_SendGoal_Event__init(pid_interfaces__action__YawPid_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    pid_interfaces__action__YawPid_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!pid_interfaces__action__YawPid_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    pid_interfaces__action__YawPid_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!pid_interfaces__action__YawPid_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    pid_interfaces__action__YawPid_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
pid_interfaces__action__YawPid_SendGoal_Event__fini(pid_interfaces__action__YawPid_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  pid_interfaces__action__YawPid_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  pid_interfaces__action__YawPid_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
pid_interfaces__action__YawPid_SendGoal_Event__are_equal(const pid_interfaces__action__YawPid_SendGoal_Event * lhs, const pid_interfaces__action__YawPid_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!pid_interfaces__action__YawPid_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!pid_interfaces__action__YawPid_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
pid_interfaces__action__YawPid_SendGoal_Event__copy(
  const pid_interfaces__action__YawPid_SendGoal_Event * input,
  pid_interfaces__action__YawPid_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!pid_interfaces__action__YawPid_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!pid_interfaces__action__YawPid_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

pid_interfaces__action__YawPid_SendGoal_Event *
pid_interfaces__action__YawPid_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_SendGoal_Event * msg = (pid_interfaces__action__YawPid_SendGoal_Event *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pid_interfaces__action__YawPid_SendGoal_Event));
  bool success = pid_interfaces__action__YawPid_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pid_interfaces__action__YawPid_SendGoal_Event__destroy(pid_interfaces__action__YawPid_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pid_interfaces__action__YawPid_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pid_interfaces__action__YawPid_SendGoal_Event__Sequence__init(pid_interfaces__action__YawPid_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_SendGoal_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_SendGoal_Event)) {
      return false;
    }
    data = (pid_interfaces__action__YawPid_SendGoal_Event *)allocator.zero_allocate(size, sizeof(pid_interfaces__action__YawPid_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pid_interfaces__action__YawPid_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pid_interfaces__action__YawPid_SendGoal_Event__fini(&data[i - 1]);
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
pid_interfaces__action__YawPid_SendGoal_Event__Sequence__fini(pid_interfaces__action__YawPid_SendGoal_Event__Sequence * array)
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
      pid_interfaces__action__YawPid_SendGoal_Event__fini(&array->data[i]);
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

pid_interfaces__action__YawPid_SendGoal_Event__Sequence *
pid_interfaces__action__YawPid_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_SendGoal_Event__Sequence * array = (pid_interfaces__action__YawPid_SendGoal_Event__Sequence *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pid_interfaces__action__YawPid_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pid_interfaces__action__YawPid_SendGoal_Event__Sequence__destroy(pid_interfaces__action__YawPid_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pid_interfaces__action__YawPid_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pid_interfaces__action__YawPid_SendGoal_Event__Sequence__are_equal(const pid_interfaces__action__YawPid_SendGoal_Event__Sequence * lhs, const pid_interfaces__action__YawPid_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pid_interfaces__action__YawPid_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pid_interfaces__action__YawPid_SendGoal_Event__Sequence__copy(
  const pid_interfaces__action__YawPid_SendGoal_Event__Sequence * input,
  pid_interfaces__action__YawPid_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_SendGoal_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pid_interfaces__action__YawPid_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pid_interfaces__action__YawPid_SendGoal_Event * data =
      (pid_interfaces__action__YawPid_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pid_interfaces__action__YawPid_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pid_interfaces__action__YawPid_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pid_interfaces__action__YawPid_SendGoal_Event__copy(
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
pid_interfaces__action__YawPid_GetResult_Request__init(pid_interfaces__action__YawPid_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pid_interfaces__action__YawPid_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
pid_interfaces__action__YawPid_GetResult_Request__fini(pid_interfaces__action__YawPid_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
pid_interfaces__action__YawPid_GetResult_Request__are_equal(const pid_interfaces__action__YawPid_GetResult_Request * lhs, const pid_interfaces__action__YawPid_GetResult_Request * rhs)
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
pid_interfaces__action__YawPid_GetResult_Request__copy(
  const pid_interfaces__action__YawPid_GetResult_Request * input,
  pid_interfaces__action__YawPid_GetResult_Request * output)
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

pid_interfaces__action__YawPid_GetResult_Request *
pid_interfaces__action__YawPid_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_GetResult_Request * msg = (pid_interfaces__action__YawPid_GetResult_Request *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pid_interfaces__action__YawPid_GetResult_Request));
  bool success = pid_interfaces__action__YawPid_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pid_interfaces__action__YawPid_GetResult_Request__destroy(pid_interfaces__action__YawPid_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pid_interfaces__action__YawPid_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pid_interfaces__action__YawPid_GetResult_Request__Sequence__init(pid_interfaces__action__YawPid_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_GetResult_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_GetResult_Request)) {
      return false;
    }
    data = (pid_interfaces__action__YawPid_GetResult_Request *)allocator.zero_allocate(size, sizeof(pid_interfaces__action__YawPid_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pid_interfaces__action__YawPid_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pid_interfaces__action__YawPid_GetResult_Request__fini(&data[i - 1]);
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
pid_interfaces__action__YawPid_GetResult_Request__Sequence__fini(pid_interfaces__action__YawPid_GetResult_Request__Sequence * array)
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
      pid_interfaces__action__YawPid_GetResult_Request__fini(&array->data[i]);
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

pid_interfaces__action__YawPid_GetResult_Request__Sequence *
pid_interfaces__action__YawPid_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_GetResult_Request__Sequence * array = (pid_interfaces__action__YawPid_GetResult_Request__Sequence *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pid_interfaces__action__YawPid_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pid_interfaces__action__YawPid_GetResult_Request__Sequence__destroy(pid_interfaces__action__YawPid_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pid_interfaces__action__YawPid_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pid_interfaces__action__YawPid_GetResult_Request__Sequence__are_equal(const pid_interfaces__action__YawPid_GetResult_Request__Sequence * lhs, const pid_interfaces__action__YawPid_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pid_interfaces__action__YawPid_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pid_interfaces__action__YawPid_GetResult_Request__Sequence__copy(
  const pid_interfaces__action__YawPid_GetResult_Request__Sequence * input,
  pid_interfaces__action__YawPid_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_GetResult_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pid_interfaces__action__YawPid_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pid_interfaces__action__YawPid_GetResult_Request * data =
      (pid_interfaces__action__YawPid_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pid_interfaces__action__YawPid_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pid_interfaces__action__YawPid_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pid_interfaces__action__YawPid_GetResult_Request__copy(
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
// #include "pid_interfaces/action/detail/yaw_pid__functions.h"

bool
pid_interfaces__action__YawPid_GetResult_Response__init(pid_interfaces__action__YawPid_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!pid_interfaces__action__YawPid_Result__init(&msg->result)) {
    pid_interfaces__action__YawPid_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
pid_interfaces__action__YawPid_GetResult_Response__fini(pid_interfaces__action__YawPid_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  pid_interfaces__action__YawPid_Result__fini(&msg->result);
}

bool
pid_interfaces__action__YawPid_GetResult_Response__are_equal(const pid_interfaces__action__YawPid_GetResult_Response * lhs, const pid_interfaces__action__YawPid_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!pid_interfaces__action__YawPid_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
pid_interfaces__action__YawPid_GetResult_Response__copy(
  const pid_interfaces__action__YawPid_GetResult_Response * input,
  pid_interfaces__action__YawPid_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!pid_interfaces__action__YawPid_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

pid_interfaces__action__YawPid_GetResult_Response *
pid_interfaces__action__YawPid_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_GetResult_Response * msg = (pid_interfaces__action__YawPid_GetResult_Response *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pid_interfaces__action__YawPid_GetResult_Response));
  bool success = pid_interfaces__action__YawPid_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pid_interfaces__action__YawPid_GetResult_Response__destroy(pid_interfaces__action__YawPid_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pid_interfaces__action__YawPid_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pid_interfaces__action__YawPid_GetResult_Response__Sequence__init(pid_interfaces__action__YawPid_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_GetResult_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_GetResult_Response)) {
      return false;
    }
    data = (pid_interfaces__action__YawPid_GetResult_Response *)allocator.zero_allocate(size, sizeof(pid_interfaces__action__YawPid_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pid_interfaces__action__YawPid_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pid_interfaces__action__YawPid_GetResult_Response__fini(&data[i - 1]);
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
pid_interfaces__action__YawPid_GetResult_Response__Sequence__fini(pid_interfaces__action__YawPid_GetResult_Response__Sequence * array)
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
      pid_interfaces__action__YawPid_GetResult_Response__fini(&array->data[i]);
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

pid_interfaces__action__YawPid_GetResult_Response__Sequence *
pid_interfaces__action__YawPid_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_GetResult_Response__Sequence * array = (pid_interfaces__action__YawPid_GetResult_Response__Sequence *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pid_interfaces__action__YawPid_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pid_interfaces__action__YawPid_GetResult_Response__Sequence__destroy(pid_interfaces__action__YawPid_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pid_interfaces__action__YawPid_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pid_interfaces__action__YawPid_GetResult_Response__Sequence__are_equal(const pid_interfaces__action__YawPid_GetResult_Response__Sequence * lhs, const pid_interfaces__action__YawPid_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pid_interfaces__action__YawPid_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pid_interfaces__action__YawPid_GetResult_Response__Sequence__copy(
  const pid_interfaces__action__YawPid_GetResult_Response__Sequence * input,
  pid_interfaces__action__YawPid_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_GetResult_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pid_interfaces__action__YawPid_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pid_interfaces__action__YawPid_GetResult_Response * data =
      (pid_interfaces__action__YawPid_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pid_interfaces__action__YawPid_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pid_interfaces__action__YawPid_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pid_interfaces__action__YawPid_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__functions.h"

bool
pid_interfaces__action__YawPid_GetResult_Event__init(pid_interfaces__action__YawPid_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    pid_interfaces__action__YawPid_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!pid_interfaces__action__YawPid_GetResult_Request__Sequence__init(&msg->request, 0)) {
    pid_interfaces__action__YawPid_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!pid_interfaces__action__YawPid_GetResult_Response__Sequence__init(&msg->response, 0)) {
    pid_interfaces__action__YawPid_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
pid_interfaces__action__YawPid_GetResult_Event__fini(pid_interfaces__action__YawPid_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  pid_interfaces__action__YawPid_GetResult_Request__Sequence__fini(&msg->request);
  // response
  pid_interfaces__action__YawPid_GetResult_Response__Sequence__fini(&msg->response);
}

bool
pid_interfaces__action__YawPid_GetResult_Event__are_equal(const pid_interfaces__action__YawPid_GetResult_Event * lhs, const pid_interfaces__action__YawPid_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!pid_interfaces__action__YawPid_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!pid_interfaces__action__YawPid_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
pid_interfaces__action__YawPid_GetResult_Event__copy(
  const pid_interfaces__action__YawPid_GetResult_Event * input,
  pid_interfaces__action__YawPid_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!pid_interfaces__action__YawPid_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!pid_interfaces__action__YawPid_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

pid_interfaces__action__YawPid_GetResult_Event *
pid_interfaces__action__YawPid_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_GetResult_Event * msg = (pid_interfaces__action__YawPid_GetResult_Event *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pid_interfaces__action__YawPid_GetResult_Event));
  bool success = pid_interfaces__action__YawPid_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pid_interfaces__action__YawPid_GetResult_Event__destroy(pid_interfaces__action__YawPid_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pid_interfaces__action__YawPid_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pid_interfaces__action__YawPid_GetResult_Event__Sequence__init(pid_interfaces__action__YawPid_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_GetResult_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_GetResult_Event)) {
      return false;
    }
    data = (pid_interfaces__action__YawPid_GetResult_Event *)allocator.zero_allocate(size, sizeof(pid_interfaces__action__YawPid_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pid_interfaces__action__YawPid_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pid_interfaces__action__YawPid_GetResult_Event__fini(&data[i - 1]);
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
pid_interfaces__action__YawPid_GetResult_Event__Sequence__fini(pid_interfaces__action__YawPid_GetResult_Event__Sequence * array)
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
      pid_interfaces__action__YawPid_GetResult_Event__fini(&array->data[i]);
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

pid_interfaces__action__YawPid_GetResult_Event__Sequence *
pid_interfaces__action__YawPid_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_GetResult_Event__Sequence * array = (pid_interfaces__action__YawPid_GetResult_Event__Sequence *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pid_interfaces__action__YawPid_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pid_interfaces__action__YawPid_GetResult_Event__Sequence__destroy(pid_interfaces__action__YawPid_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pid_interfaces__action__YawPid_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pid_interfaces__action__YawPid_GetResult_Event__Sequence__are_equal(const pid_interfaces__action__YawPid_GetResult_Event__Sequence * lhs, const pid_interfaces__action__YawPid_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pid_interfaces__action__YawPid_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pid_interfaces__action__YawPid_GetResult_Event__Sequence__copy(
  const pid_interfaces__action__YawPid_GetResult_Event__Sequence * input,
  pid_interfaces__action__YawPid_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_GetResult_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pid_interfaces__action__YawPid_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pid_interfaces__action__YawPid_GetResult_Event * data =
      (pid_interfaces__action__YawPid_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pid_interfaces__action__YawPid_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pid_interfaces__action__YawPid_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pid_interfaces__action__YawPid_GetResult_Event__copy(
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
// #include "pid_interfaces/action/detail/yaw_pid__functions.h"

bool
pid_interfaces__action__YawPid_FeedbackMessage__init(pid_interfaces__action__YawPid_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pid_interfaces__action__YawPid_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!pid_interfaces__action__YawPid_Feedback__init(&msg->feedback)) {
    pid_interfaces__action__YawPid_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
pid_interfaces__action__YawPid_FeedbackMessage__fini(pid_interfaces__action__YawPid_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  pid_interfaces__action__YawPid_Feedback__fini(&msg->feedback);
}

bool
pid_interfaces__action__YawPid_FeedbackMessage__are_equal(const pid_interfaces__action__YawPid_FeedbackMessage * lhs, const pid_interfaces__action__YawPid_FeedbackMessage * rhs)
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
  if (!pid_interfaces__action__YawPid_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
pid_interfaces__action__YawPid_FeedbackMessage__copy(
  const pid_interfaces__action__YawPid_FeedbackMessage * input,
  pid_interfaces__action__YawPid_FeedbackMessage * output)
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
  if (!pid_interfaces__action__YawPid_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

pid_interfaces__action__YawPid_FeedbackMessage *
pid_interfaces__action__YawPid_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_FeedbackMessage * msg = (pid_interfaces__action__YawPid_FeedbackMessage *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pid_interfaces__action__YawPid_FeedbackMessage));
  bool success = pid_interfaces__action__YawPid_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pid_interfaces__action__YawPid_FeedbackMessage__destroy(pid_interfaces__action__YawPid_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pid_interfaces__action__YawPid_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pid_interfaces__action__YawPid_FeedbackMessage__Sequence__init(pid_interfaces__action__YawPid_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_FeedbackMessage * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_FeedbackMessage)) {
      return false;
    }
    data = (pid_interfaces__action__YawPid_FeedbackMessage *)allocator.zero_allocate(size, sizeof(pid_interfaces__action__YawPid_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pid_interfaces__action__YawPid_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pid_interfaces__action__YawPid_FeedbackMessage__fini(&data[i - 1]);
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
pid_interfaces__action__YawPid_FeedbackMessage__Sequence__fini(pid_interfaces__action__YawPid_FeedbackMessage__Sequence * array)
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
      pid_interfaces__action__YawPid_FeedbackMessage__fini(&array->data[i]);
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

pid_interfaces__action__YawPid_FeedbackMessage__Sequence *
pid_interfaces__action__YawPid_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pid_interfaces__action__YawPid_FeedbackMessage__Sequence * array = (pid_interfaces__action__YawPid_FeedbackMessage__Sequence *)allocator.allocate(sizeof(pid_interfaces__action__YawPid_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pid_interfaces__action__YawPid_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pid_interfaces__action__YawPid_FeedbackMessage__Sequence__destroy(pid_interfaces__action__YawPid_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pid_interfaces__action__YawPid_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pid_interfaces__action__YawPid_FeedbackMessage__Sequence__are_equal(const pid_interfaces__action__YawPid_FeedbackMessage__Sequence * lhs, const pid_interfaces__action__YawPid_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pid_interfaces__action__YawPid_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pid_interfaces__action__YawPid_FeedbackMessage__Sequence__copy(
  const pid_interfaces__action__YawPid_FeedbackMessage__Sequence * input,
  pid_interfaces__action__YawPid_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pid_interfaces__action__YawPid_FeedbackMessage)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pid_interfaces__action__YawPid_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pid_interfaces__action__YawPid_FeedbackMessage * data =
      (pid_interfaces__action__YawPid_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pid_interfaces__action__YawPid_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pid_interfaces__action__YawPid_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pid_interfaces__action__YawPid_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
