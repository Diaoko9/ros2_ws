// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from my_robot_interfaces:srv/ResetCounter.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_robot_interfaces/srv/detail/reset_counter__struct.h"
#include "my_robot_interfaces/srv/detail/reset_counter__type_support.h"
#include "my_robot_interfaces/srv/detail/reset_counter__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_robot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ResetCounter_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetCounter_Request_type_support_ids_t;

static const _ResetCounter_Request_type_support_ids_t _ResetCounter_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetCounter_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetCounter_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetCounter_Request_type_support_symbol_names_t _ResetCounter_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, srv, ResetCounter_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, srv, ResetCounter_Request)),
  }
};

typedef struct _ResetCounter_Request_type_support_data_t
{
  void * data[2];
} _ResetCounter_Request_type_support_data_t;

static _ResetCounter_Request_type_support_data_t _ResetCounter_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetCounter_Request_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_ResetCounter_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ResetCounter_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ResetCounter_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetCounter_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetCounter_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_robot_interfaces__srv__ResetCounter_Request__get_type_hash,
  &my_robot_interfaces__srv__ResetCounter_Request__get_type_description,
  &my_robot_interfaces__srv__ResetCounter_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, srv, ResetCounter_Request)() {
  return &::my_robot_interfaces::srv::rosidl_typesupport_c::ResetCounter_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/srv/detail/reset_counter__struct.h"
// already included above
// #include "my_robot_interfaces/srv/detail/reset_counter__type_support.h"
// already included above
// #include "my_robot_interfaces/srv/detail/reset_counter__functions.h"
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

namespace my_robot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ResetCounter_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetCounter_Response_type_support_ids_t;

static const _ResetCounter_Response_type_support_ids_t _ResetCounter_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetCounter_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetCounter_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetCounter_Response_type_support_symbol_names_t _ResetCounter_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, srv, ResetCounter_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, srv, ResetCounter_Response)),
  }
};

typedef struct _ResetCounter_Response_type_support_data_t
{
  void * data[2];
} _ResetCounter_Response_type_support_data_t;

static _ResetCounter_Response_type_support_data_t _ResetCounter_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetCounter_Response_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_ResetCounter_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ResetCounter_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ResetCounter_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetCounter_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetCounter_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_robot_interfaces__srv__ResetCounter_Response__get_type_hash,
  &my_robot_interfaces__srv__ResetCounter_Response__get_type_description,
  &my_robot_interfaces__srv__ResetCounter_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, srv, ResetCounter_Response)() {
  return &::my_robot_interfaces::srv::rosidl_typesupport_c::ResetCounter_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/srv/detail/reset_counter__struct.h"
// already included above
// #include "my_robot_interfaces/srv/detail/reset_counter__type_support.h"
// already included above
// #include "my_robot_interfaces/srv/detail/reset_counter__functions.h"
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

namespace my_robot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ResetCounter_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetCounter_Event_type_support_ids_t;

static const _ResetCounter_Event_type_support_ids_t _ResetCounter_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetCounter_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetCounter_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetCounter_Event_type_support_symbol_names_t _ResetCounter_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, srv, ResetCounter_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, srv, ResetCounter_Event)),
  }
};

typedef struct _ResetCounter_Event_type_support_data_t
{
  void * data[2];
} _ResetCounter_Event_type_support_data_t;

static _ResetCounter_Event_type_support_data_t _ResetCounter_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetCounter_Event_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_ResetCounter_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ResetCounter_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ResetCounter_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetCounter_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetCounter_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_robot_interfaces__srv__ResetCounter_Event__get_type_hash,
  &my_robot_interfaces__srv__ResetCounter_Event__get_type_description,
  &my_robot_interfaces__srv__ResetCounter_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, srv, ResetCounter_Event)() {
  return &::my_robot_interfaces::srv::rosidl_typesupport_c::ResetCounter_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/srv/detail/reset_counter__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace my_robot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ResetCounter_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetCounter_type_support_ids_t;

static const _ResetCounter_type_support_ids_t _ResetCounter_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetCounter_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetCounter_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetCounter_type_support_symbol_names_t _ResetCounter_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, srv, ResetCounter)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, srv, ResetCounter)),
  }
};

typedef struct _ResetCounter_type_support_data_t
{
  void * data[2];
} _ResetCounter_type_support_data_t;

static _ResetCounter_type_support_data_t _ResetCounter_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetCounter_service_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_ResetCounter_service_typesupport_ids.typesupport_identifier[0],
  &_ResetCounter_service_typesupport_symbol_names.symbol_name[0],
  &_ResetCounter_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ResetCounter_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetCounter_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ResetCounter_Request_message_type_support_handle,
  &ResetCounter_Response_message_type_support_handle,
  &ResetCounter_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    my_robot_interfaces,
    srv,
    ResetCounter
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    my_robot_interfaces,
    srv,
    ResetCounter
  ),
  &my_robot_interfaces__srv__ResetCounter__get_type_hash,
  &my_robot_interfaces__srv__ResetCounter__get_type_description,
  &my_robot_interfaces__srv__ResetCounter__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, srv, ResetCounter)() {
  return &::my_robot_interfaces::srv::rosidl_typesupport_c::ResetCounter_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
