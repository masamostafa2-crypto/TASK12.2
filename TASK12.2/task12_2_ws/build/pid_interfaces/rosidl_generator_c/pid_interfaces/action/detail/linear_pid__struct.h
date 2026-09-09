// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pid_interfaces:action/LinearPid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pid_interfaces/action/linear_pid.h"


#ifndef PID_INTERFACES__ACTION__DETAIL__LINEAR_PID__STRUCT_H_
#define PID_INTERFACES__ACTION__DETAIL__LINEAR_PID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/LinearPid in the package pid_interfaces.
typedef struct pid_interfaces__action__LinearPid_Goal
{
  double target_distance;
} pid_interfaces__action__LinearPid_Goal;

// Struct for a sequence of pid_interfaces__action__LinearPid_Goal.
typedef struct pid_interfaces__action__LinearPid_Goal__Sequence
{
  pid_interfaces__action__LinearPid_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pid_interfaces__action__LinearPid_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/LinearPid in the package pid_interfaces.
typedef struct pid_interfaces__action__LinearPid_Result
{
  bool success;
  rosidl_runtime_c__String message;
  double distance_travelled;
} pid_interfaces__action__LinearPid_Result;

// Struct for a sequence of pid_interfaces__action__LinearPid_Result.
typedef struct pid_interfaces__action__LinearPid_Result__Sequence
{
  pid_interfaces__action__LinearPid_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pid_interfaces__action__LinearPid_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/LinearPid in the package pid_interfaces.
typedef struct pid_interfaces__action__LinearPid_Feedback
{
  double current_distance;
} pid_interfaces__action__LinearPid_Feedback;

// Struct for a sequence of pid_interfaces__action__LinearPid_Feedback.
typedef struct pid_interfaces__action__LinearPid_Feedback__Sequence
{
  pid_interfaces__action__LinearPid_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pid_interfaces__action__LinearPid_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "pid_interfaces/action/detail/linear_pid__struct.h"

/// Struct defined in action/LinearPid in the package pid_interfaces.
typedef struct pid_interfaces__action__LinearPid_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  pid_interfaces__action__LinearPid_Goal goal;
} pid_interfaces__action__LinearPid_SendGoal_Request;

// Struct for a sequence of pid_interfaces__action__LinearPid_SendGoal_Request.
typedef struct pid_interfaces__action__LinearPid_SendGoal_Request__Sequence
{
  pid_interfaces__action__LinearPid_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pid_interfaces__action__LinearPid_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/LinearPid in the package pid_interfaces.
typedef struct pid_interfaces__action__LinearPid_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} pid_interfaces__action__LinearPid_SendGoal_Response;

// Struct for a sequence of pid_interfaces__action__LinearPid_SendGoal_Response.
typedef struct pid_interfaces__action__LinearPid_SendGoal_Response__Sequence
{
  pid_interfaces__action__LinearPid_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pid_interfaces__action__LinearPid_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  pid_interfaces__action__LinearPid_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  pid_interfaces__action__LinearPid_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/LinearPid in the package pid_interfaces.
typedef struct pid_interfaces__action__LinearPid_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  pid_interfaces__action__LinearPid_SendGoal_Request__Sequence request;
  pid_interfaces__action__LinearPid_SendGoal_Response__Sequence response;
} pid_interfaces__action__LinearPid_SendGoal_Event;

// Struct for a sequence of pid_interfaces__action__LinearPid_SendGoal_Event.
typedef struct pid_interfaces__action__LinearPid_SendGoal_Event__Sequence
{
  pid_interfaces__action__LinearPid_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pid_interfaces__action__LinearPid_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/LinearPid in the package pid_interfaces.
typedef struct pid_interfaces__action__LinearPid_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} pid_interfaces__action__LinearPid_GetResult_Request;

// Struct for a sequence of pid_interfaces__action__LinearPid_GetResult_Request.
typedef struct pid_interfaces__action__LinearPid_GetResult_Request__Sequence
{
  pid_interfaces__action__LinearPid_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pid_interfaces__action__LinearPid_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "pid_interfaces/action/detail/linear_pid__struct.h"

/// Struct defined in action/LinearPid in the package pid_interfaces.
typedef struct pid_interfaces__action__LinearPid_GetResult_Response
{
  int8_t status;
  pid_interfaces__action__LinearPid_Result result;
} pid_interfaces__action__LinearPid_GetResult_Response;

// Struct for a sequence of pid_interfaces__action__LinearPid_GetResult_Response.
typedef struct pid_interfaces__action__LinearPid_GetResult_Response__Sequence
{
  pid_interfaces__action__LinearPid_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pid_interfaces__action__LinearPid_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  pid_interfaces__action__LinearPid_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  pid_interfaces__action__LinearPid_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/LinearPid in the package pid_interfaces.
typedef struct pid_interfaces__action__LinearPid_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  pid_interfaces__action__LinearPid_GetResult_Request__Sequence request;
  pid_interfaces__action__LinearPid_GetResult_Response__Sequence response;
} pid_interfaces__action__LinearPid_GetResult_Event;

// Struct for a sequence of pid_interfaces__action__LinearPid_GetResult_Event.
typedef struct pid_interfaces__action__LinearPid_GetResult_Event__Sequence
{
  pid_interfaces__action__LinearPid_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pid_interfaces__action__LinearPid_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "pid_interfaces/action/detail/linear_pid__struct.h"

/// Struct defined in action/LinearPid in the package pid_interfaces.
typedef struct pid_interfaces__action__LinearPid_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  pid_interfaces__action__LinearPid_Feedback feedback;
} pid_interfaces__action__LinearPid_FeedbackMessage;

// Struct for a sequence of pid_interfaces__action__LinearPid_FeedbackMessage.
typedef struct pid_interfaces__action__LinearPid_FeedbackMessage__Sequence
{
  pid_interfaces__action__LinearPid_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pid_interfaces__action__LinearPid_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PID_INTERFACES__ACTION__DETAIL__LINEAR_PID__STRUCT_H_
