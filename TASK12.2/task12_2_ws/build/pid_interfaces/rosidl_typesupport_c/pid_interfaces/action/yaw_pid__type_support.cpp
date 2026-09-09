// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from pid_interfaces:action/YawPid.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "pid_interfaces/action/detail/yaw_pid__struct.h"
#include "pid_interfaces/action/detail/yaw_pid__type_support.h"
#include "pid_interfaces/action/detail/yaw_pid__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace pid_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _YawPid_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _YawPid_Goal_type_support_ids_t;

static const _YawPid_Goal_type_support_ids_t _YawPid_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _YawPid_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _YawPid_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _YawPid_Goal_type_support_symbol_names_t _YawPid_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pid_interfaces, action, YawPid_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pid_interfaces, action, YawPid_Goal)),
  }
};

typedef struct _YawPid_Goal_type_support_data_t
{
  void * data[2];
} _YawPid_Goal_type_support_data_t;

static _YawPid_Goal_type_support_data_t _YawPid_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _YawPid_Goal_message_typesupport_map = {
  2,
  "pid_interfaces",
  &_YawPid_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_YawPid_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_YawPid_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t YawPid_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_YawPid_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &pid_interfaces__action__YawPid_Goal__get_type_hash,
  &pid_interfaces__action__YawPid_Goal__get_type_description,
  &pid_interfaces__action__YawPid_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pid_interfaces, action, YawPid_Goal)() {
  return &::pid_interfaces::action::rosidl_typesupport_c::YawPid_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__type_support.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pid_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _YawPid_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _YawPid_Result_type_support_ids_t;

static const _YawPid_Result_type_support_ids_t _YawPid_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _YawPid_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _YawPid_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _YawPid_Result_type_support_symbol_names_t _YawPid_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pid_interfaces, action, YawPid_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pid_interfaces, action, YawPid_Result)),
  }
};

typedef struct _YawPid_Result_type_support_data_t
{
  void * data[2];
} _YawPid_Result_type_support_data_t;

static _YawPid_Result_type_support_data_t _YawPid_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _YawPid_Result_message_typesupport_map = {
  2,
  "pid_interfaces",
  &_YawPid_Result_message_typesupport_ids.typesupport_identifier[0],
  &_YawPid_Result_message_typesupport_symbol_names.symbol_name[0],
  &_YawPid_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t YawPid_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_YawPid_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &pid_interfaces__action__YawPid_Result__get_type_hash,
  &pid_interfaces__action__YawPid_Result__get_type_description,
  &pid_interfaces__action__YawPid_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pid_interfaces, action, YawPid_Result)() {
  return &::pid_interfaces::action::rosidl_typesupport_c::YawPid_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__type_support.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pid_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _YawPid_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _YawPid_Feedback_type_support_ids_t;

static const _YawPid_Feedback_type_support_ids_t _YawPid_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _YawPid_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _YawPid_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _YawPid_Feedback_type_support_symbol_names_t _YawPid_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pid_interfaces, action, YawPid_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pid_interfaces, action, YawPid_Feedback)),
  }
};

typedef struct _YawPid_Feedback_type_support_data_t
{
  void * data[2];
} _YawPid_Feedback_type_support_data_t;

static _YawPid_Feedback_type_support_data_t _YawPid_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _YawPid_Feedback_message_typesupport_map = {
  2,
  "pid_interfaces",
  &_YawPid_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_YawPid_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_YawPid_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t YawPid_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_YawPid_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &pid_interfaces__action__YawPid_Feedback__get_type_hash,
  &pid_interfaces__action__YawPid_Feedback__get_type_description,
  &pid_interfaces__action__YawPid_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pid_interfaces, action, YawPid_Feedback)() {
  return &::pid_interfaces::action::rosidl_typesupport_c::YawPid_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__type_support.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pid_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _YawPid_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _YawPid_SendGoal_Request_type_support_ids_t;

static const _YawPid_SendGoal_Request_type_support_ids_t _YawPid_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _YawPid_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _YawPid_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _YawPid_SendGoal_Request_type_support_symbol_names_t _YawPid_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pid_interfaces, action, YawPid_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pid_interfaces, action, YawPid_SendGoal_Request)),
  }
};

typedef struct _YawPid_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _YawPid_SendGoal_Request_type_support_data_t;

static _YawPid_SendGoal_Request_type_support_data_t _YawPid_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _YawPid_SendGoal_Request_message_typesupport_map = {
  2,
  "pid_interfaces",
  &_YawPid_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_YawPid_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_YawPid_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t YawPid_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_YawPid_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &pid_interfaces__action__YawPid_SendGoal_Request__get_type_hash,
  &pid_interfaces__action__YawPid_SendGoal_Request__get_type_description,
  &pid_interfaces__action__YawPid_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pid_interfaces, action, YawPid_SendGoal_Request)() {
  return &::pid_interfaces::action::rosidl_typesupport_c::YawPid_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__type_support.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pid_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _YawPid_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _YawPid_SendGoal_Response_type_support_ids_t;

static const _YawPid_SendGoal_Response_type_support_ids_t _YawPid_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _YawPid_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _YawPid_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _YawPid_SendGoal_Response_type_support_symbol_names_t _YawPid_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pid_interfaces, action, YawPid_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pid_interfaces, action, YawPid_SendGoal_Response)),
  }
};

typedef struct _YawPid_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _YawPid_SendGoal_Response_type_support_data_t;

static _YawPid_SendGoal_Response_type_support_data_t _YawPid_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _YawPid_SendGoal_Response_message_typesupport_map = {
  2,
  "pid_interfaces",
  &_YawPid_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_YawPid_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_YawPid_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t YawPid_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_YawPid_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &pid_interfaces__action__YawPid_SendGoal_Response__get_type_hash,
  &pid_interfaces__action__YawPid_SendGoal_Response__get_type_description,
  &pid_interfaces__action__YawPid_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pid_interfaces, action, YawPid_SendGoal_Response)() {
  return &::pid_interfaces::action::rosidl_typesupport_c::YawPid_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__type_support.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pid_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _YawPid_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _YawPid_SendGoal_Event_type_support_ids_t;

static const _YawPid_SendGoal_Event_type_support_ids_t _YawPid_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _YawPid_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _YawPid_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _YawPid_SendGoal_Event_type_support_symbol_names_t _YawPid_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pid_interfaces, action, YawPid_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pid_interfaces, action, YawPid_SendGoal_Event)),
  }
};

typedef struct _YawPid_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _YawPid_SendGoal_Event_type_support_data_t;

static _YawPid_SendGoal_Event_type_support_data_t _YawPid_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _YawPid_SendGoal_Event_message_typesupport_map = {
  2,
  "pid_interfaces",
  &_YawPid_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_YawPid_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_YawPid_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t YawPid_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_YawPid_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &pid_interfaces__action__YawPid_SendGoal_Event__get_type_hash,
  &pid_interfaces__action__YawPid_SendGoal_Event__get_type_description,
  &pid_interfaces__action__YawPid_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pid_interfaces, action, YawPid_SendGoal_Event)() {
  return &::pid_interfaces::action::rosidl_typesupport_c::YawPid_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace pid_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _YawPid_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _YawPid_SendGoal_type_support_ids_t;

static const _YawPid_SendGoal_type_support_ids_t _YawPid_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _YawPid_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _YawPid_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _YawPid_SendGoal_type_support_symbol_names_t _YawPid_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pid_interfaces, action, YawPid_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pid_interfaces, action, YawPid_SendGoal)),
  }
};

typedef struct _YawPid_SendGoal_type_support_data_t
{
  void * data[2];
} _YawPid_SendGoal_type_support_data_t;

static _YawPid_SendGoal_type_support_data_t _YawPid_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _YawPid_SendGoal_service_typesupport_map = {
  2,
  "pid_interfaces",
  &_YawPid_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_YawPid_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_YawPid_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t YawPid_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_YawPid_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &YawPid_SendGoal_Request_message_type_support_handle,
  &YawPid_SendGoal_Response_message_type_support_handle,
  &YawPid_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    pid_interfaces,
    action,
    YawPid_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    pid_interfaces,
    action,
    YawPid_SendGoal
  ),
  &pid_interfaces__action__YawPid_SendGoal__get_type_hash,
  &pid_interfaces__action__YawPid_SendGoal__get_type_description,
  &pid_interfaces__action__YawPid_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, pid_interfaces, action, YawPid_SendGoal)() {
  return &::pid_interfaces::action::rosidl_typesupport_c::YawPid_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__type_support.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pid_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _YawPid_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _YawPid_GetResult_Request_type_support_ids_t;

static const _YawPid_GetResult_Request_type_support_ids_t _YawPid_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _YawPid_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _YawPid_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _YawPid_GetResult_Request_type_support_symbol_names_t _YawPid_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pid_interfaces, action, YawPid_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pid_interfaces, action, YawPid_GetResult_Request)),
  }
};

typedef struct _YawPid_GetResult_Request_type_support_data_t
{
  void * data[2];
} _YawPid_GetResult_Request_type_support_data_t;

static _YawPid_GetResult_Request_type_support_data_t _YawPid_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _YawPid_GetResult_Request_message_typesupport_map = {
  2,
  "pid_interfaces",
  &_YawPid_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_YawPid_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_YawPid_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t YawPid_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_YawPid_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &pid_interfaces__action__YawPid_GetResult_Request__get_type_hash,
  &pid_interfaces__action__YawPid_GetResult_Request__get_type_description,
  &pid_interfaces__action__YawPid_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pid_interfaces, action, YawPid_GetResult_Request)() {
  return &::pid_interfaces::action::rosidl_typesupport_c::YawPid_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__type_support.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pid_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _YawPid_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _YawPid_GetResult_Response_type_support_ids_t;

static const _YawPid_GetResult_Response_type_support_ids_t _YawPid_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _YawPid_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _YawPid_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _YawPid_GetResult_Response_type_support_symbol_names_t _YawPid_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pid_interfaces, action, YawPid_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pid_interfaces, action, YawPid_GetResult_Response)),
  }
};

typedef struct _YawPid_GetResult_Response_type_support_data_t
{
  void * data[2];
} _YawPid_GetResult_Response_type_support_data_t;

static _YawPid_GetResult_Response_type_support_data_t _YawPid_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _YawPid_GetResult_Response_message_typesupport_map = {
  2,
  "pid_interfaces",
  &_YawPid_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_YawPid_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_YawPid_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t YawPid_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_YawPid_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &pid_interfaces__action__YawPid_GetResult_Response__get_type_hash,
  &pid_interfaces__action__YawPid_GetResult_Response__get_type_description,
  &pid_interfaces__action__YawPid_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pid_interfaces, action, YawPid_GetResult_Response)() {
  return &::pid_interfaces::action::rosidl_typesupport_c::YawPid_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__type_support.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pid_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _YawPid_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _YawPid_GetResult_Event_type_support_ids_t;

static const _YawPid_GetResult_Event_type_support_ids_t _YawPid_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _YawPid_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _YawPid_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _YawPid_GetResult_Event_type_support_symbol_names_t _YawPid_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pid_interfaces, action, YawPid_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pid_interfaces, action, YawPid_GetResult_Event)),
  }
};

typedef struct _YawPid_GetResult_Event_type_support_data_t
{
  void * data[2];
} _YawPid_GetResult_Event_type_support_data_t;

static _YawPid_GetResult_Event_type_support_data_t _YawPid_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _YawPid_GetResult_Event_message_typesupport_map = {
  2,
  "pid_interfaces",
  &_YawPid_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_YawPid_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_YawPid_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t YawPid_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_YawPid_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &pid_interfaces__action__YawPid_GetResult_Event__get_type_hash,
  &pid_interfaces__action__YawPid_GetResult_Event__get_type_description,
  &pid_interfaces__action__YawPid_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pid_interfaces, action, YawPid_GetResult_Event)() {
  return &::pid_interfaces::action::rosidl_typesupport_c::YawPid_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace pid_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _YawPid_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _YawPid_GetResult_type_support_ids_t;

static const _YawPid_GetResult_type_support_ids_t _YawPid_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _YawPid_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _YawPid_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _YawPid_GetResult_type_support_symbol_names_t _YawPid_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pid_interfaces, action, YawPid_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pid_interfaces, action, YawPid_GetResult)),
  }
};

typedef struct _YawPid_GetResult_type_support_data_t
{
  void * data[2];
} _YawPid_GetResult_type_support_data_t;

static _YawPid_GetResult_type_support_data_t _YawPid_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _YawPid_GetResult_service_typesupport_map = {
  2,
  "pid_interfaces",
  &_YawPid_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_YawPid_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_YawPid_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t YawPid_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_YawPid_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &YawPid_GetResult_Request_message_type_support_handle,
  &YawPid_GetResult_Response_message_type_support_handle,
  &YawPid_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    pid_interfaces,
    action,
    YawPid_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    pid_interfaces,
    action,
    YawPid_GetResult
  ),
  &pid_interfaces__action__YawPid_GetResult__get_type_hash,
  &pid_interfaces__action__YawPid_GetResult__get_type_description,
  &pid_interfaces__action__YawPid_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, pid_interfaces, action, YawPid_GetResult)() {
  return &::pid_interfaces::action::rosidl_typesupport_c::YawPid_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__struct.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__type_support.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pid_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _YawPid_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _YawPid_FeedbackMessage_type_support_ids_t;

static const _YawPid_FeedbackMessage_type_support_ids_t _YawPid_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _YawPid_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _YawPid_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _YawPid_FeedbackMessage_type_support_symbol_names_t _YawPid_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pid_interfaces, action, YawPid_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pid_interfaces, action, YawPid_FeedbackMessage)),
  }
};

typedef struct _YawPid_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _YawPid_FeedbackMessage_type_support_data_t;

static _YawPid_FeedbackMessage_type_support_data_t _YawPid_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _YawPid_FeedbackMessage_message_typesupport_map = {
  2,
  "pid_interfaces",
  &_YawPid_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_YawPid_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_YawPid_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t YawPid_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_YawPid_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &pid_interfaces__action__YawPid_FeedbackMessage__get_type_hash,
  &pid_interfaces__action__YawPid_FeedbackMessage__get_type_description,
  &pid_interfaces__action__YawPid_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace pid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pid_interfaces, action, YawPid_FeedbackMessage)() {
  return &::pid_interfaces::action::rosidl_typesupport_c::YawPid_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "pid_interfaces/action/yaw_pid.h"
// already included above
// #include "pid_interfaces/action/detail/yaw_pid__type_support.h"

static rosidl_action_type_support_t _pid_interfaces__action__YawPid__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &pid_interfaces__action__YawPid__get_type_hash,
  &pid_interfaces__action__YawPid__get_type_description,
  &pid_interfaces__action__YawPid__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, pid_interfaces, action, YawPid)()
{
  // Thread-safe by always writing the same values to the static struct
  _pid_interfaces__action__YawPid__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, pid_interfaces, action, YawPid_SendGoal)();
  _pid_interfaces__action__YawPid__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, pid_interfaces, action, YawPid_GetResult)();
  _pid_interfaces__action__YawPid__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _pid_interfaces__action__YawPid__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, pid_interfaces, action, YawPid_FeedbackMessage)();
  _pid_interfaces__action__YawPid__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_pid_interfaces__action__YawPid__typesupport_c;
}

#ifdef __cplusplus
}
#endif
