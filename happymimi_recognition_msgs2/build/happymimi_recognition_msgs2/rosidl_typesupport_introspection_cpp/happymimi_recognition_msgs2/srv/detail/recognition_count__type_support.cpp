// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from happymimi_recognition_msgs2:srv/RecognitionCount.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "happymimi_recognition_msgs2/srv/detail/recognition_count__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace happymimi_recognition_msgs2
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void RecognitionCount_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) happymimi_recognition_msgs2::srv::RecognitionCount_Request(_init);
}

void RecognitionCount_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<happymimi_recognition_msgs2::srv::RecognitionCount_Request *>(message_memory);
  typed_message->~RecognitionCount_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RecognitionCount_Request_message_member_array[1] = {
  {
    "target_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymimi_recognition_msgs2::srv::RecognitionCount_Request, target_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RecognitionCount_Request_message_members = {
  "happymimi_recognition_msgs2::srv",  // message namespace
  "RecognitionCount_Request",  // message name
  1,  // number of fields
  sizeof(happymimi_recognition_msgs2::srv::RecognitionCount_Request),
  RecognitionCount_Request_message_member_array,  // message members
  RecognitionCount_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RecognitionCount_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RecognitionCount_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RecognitionCount_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace happymimi_recognition_msgs2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<happymimi_recognition_msgs2::srv::RecognitionCount_Request>()
{
  return &::happymimi_recognition_msgs2::srv::rosidl_typesupport_introspection_cpp::RecognitionCount_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, happymimi_recognition_msgs2, srv, RecognitionCount_Request)() {
  return &::happymimi_recognition_msgs2::srv::rosidl_typesupport_introspection_cpp::RecognitionCount_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "happymimi_recognition_msgs2/srv/detail/recognition_count__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace happymimi_recognition_msgs2
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void RecognitionCount_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) happymimi_recognition_msgs2::srv::RecognitionCount_Response(_init);
}

void RecognitionCount_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<happymimi_recognition_msgs2::srv::RecognitionCount_Response *>(message_memory);
  typed_message->~RecognitionCount_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RecognitionCount_Response_message_member_array[1] = {
  {
    "num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymimi_recognition_msgs2::srv::RecognitionCount_Response, num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RecognitionCount_Response_message_members = {
  "happymimi_recognition_msgs2::srv",  // message namespace
  "RecognitionCount_Response",  // message name
  1,  // number of fields
  sizeof(happymimi_recognition_msgs2::srv::RecognitionCount_Response),
  RecognitionCount_Response_message_member_array,  // message members
  RecognitionCount_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RecognitionCount_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RecognitionCount_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RecognitionCount_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace happymimi_recognition_msgs2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<happymimi_recognition_msgs2::srv::RecognitionCount_Response>()
{
  return &::happymimi_recognition_msgs2::srv::rosidl_typesupport_introspection_cpp::RecognitionCount_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, happymimi_recognition_msgs2, srv, RecognitionCount_Response)() {
  return &::happymimi_recognition_msgs2::srv::rosidl_typesupport_introspection_cpp::RecognitionCount_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "happymimi_recognition_msgs2/srv/detail/recognition_count__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace happymimi_recognition_msgs2
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers RecognitionCount_service_members = {
  "happymimi_recognition_msgs2::srv",  // service namespace
  "RecognitionCount",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<happymimi_recognition_msgs2::srv::RecognitionCount>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t RecognitionCount_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RecognitionCount_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace happymimi_recognition_msgs2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<happymimi_recognition_msgs2::srv::RecognitionCount>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::happymimi_recognition_msgs2::srv::rosidl_typesupport_introspection_cpp::RecognitionCount_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::happymimi_recognition_msgs2::srv::RecognitionCount_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::happymimi_recognition_msgs2::srv::RecognitionCount_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, happymimi_recognition_msgs2, srv, RecognitionCount)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<happymimi_recognition_msgs2::srv::RecognitionCount>();
}

#ifdef __cplusplus
}
#endif
