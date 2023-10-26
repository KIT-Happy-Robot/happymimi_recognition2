// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from happymimi_recognition_msgs2:srv/Depthmeter.idl
// generated code does not contain a copyright notice
#include "happymimi_recognition_msgs2/srv/detail/depthmeter__rosidl_typesupport_fastrtps_cpp.hpp"
#include "happymimi_recognition_msgs2/srv/detail/depthmeter__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace happymimi_recognition_msgs2
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_happymimi_recognition_msgs2
cdr_serialize(
  const happymimi_recognition_msgs2::srv::Depthmeter_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: meter
  cdr << ros_message.meter;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_happymimi_recognition_msgs2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  happymimi_recognition_msgs2::srv::Depthmeter_Request & ros_message)
{
  // Member: meter
  cdr >> ros_message.meter;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_happymimi_recognition_msgs2
get_serialized_size(
  const happymimi_recognition_msgs2::srv::Depthmeter_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: meter
  {
    size_t item_size = sizeof(ros_message.meter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_happymimi_recognition_msgs2
max_serialized_size_Depthmeter_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: meter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Depthmeter_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const happymimi_recognition_msgs2::srv::Depthmeter_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Depthmeter_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<happymimi_recognition_msgs2::srv::Depthmeter_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Depthmeter_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const happymimi_recognition_msgs2::srv::Depthmeter_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Depthmeter_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Depthmeter_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Depthmeter_Request__callbacks = {
  "happymimi_recognition_msgs2::srv",
  "Depthmeter_Request",
  _Depthmeter_Request__cdr_serialize,
  _Depthmeter_Request__cdr_deserialize,
  _Depthmeter_Request__get_serialized_size,
  _Depthmeter_Request__max_serialized_size
};

static rosidl_message_type_support_t _Depthmeter_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Depthmeter_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace happymimi_recognition_msgs2

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_happymimi_recognition_msgs2
const rosidl_message_type_support_t *
get_message_type_support_handle<happymimi_recognition_msgs2::srv::Depthmeter_Request>()
{
  return &happymimi_recognition_msgs2::srv::typesupport_fastrtps_cpp::_Depthmeter_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, happymimi_recognition_msgs2, srv, Depthmeter_Request)() {
  return &happymimi_recognition_msgs2::srv::typesupport_fastrtps_cpp::_Depthmeter_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace happymimi_recognition_msgs2
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_happymimi_recognition_msgs2
cdr_serialize(
  const happymimi_recognition_msgs2::srv::Depthmeter_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ans
  cdr << ros_message.ans;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_happymimi_recognition_msgs2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  happymimi_recognition_msgs2::srv::Depthmeter_Response & ros_message)
{
  // Member: ans
  cdr >> ros_message.ans;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_happymimi_recognition_msgs2
get_serialized_size(
  const happymimi_recognition_msgs2::srv::Depthmeter_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ans
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.ans.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_happymimi_recognition_msgs2
max_serialized_size_Depthmeter_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: ans
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Depthmeter_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const happymimi_recognition_msgs2::srv::Depthmeter_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Depthmeter_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<happymimi_recognition_msgs2::srv::Depthmeter_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Depthmeter_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const happymimi_recognition_msgs2::srv::Depthmeter_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Depthmeter_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Depthmeter_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Depthmeter_Response__callbacks = {
  "happymimi_recognition_msgs2::srv",
  "Depthmeter_Response",
  _Depthmeter_Response__cdr_serialize,
  _Depthmeter_Response__cdr_deserialize,
  _Depthmeter_Response__get_serialized_size,
  _Depthmeter_Response__max_serialized_size
};

static rosidl_message_type_support_t _Depthmeter_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Depthmeter_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace happymimi_recognition_msgs2

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_happymimi_recognition_msgs2
const rosidl_message_type_support_t *
get_message_type_support_handle<happymimi_recognition_msgs2::srv::Depthmeter_Response>()
{
  return &happymimi_recognition_msgs2::srv::typesupport_fastrtps_cpp::_Depthmeter_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, happymimi_recognition_msgs2, srv, Depthmeter_Response)() {
  return &happymimi_recognition_msgs2::srv::typesupport_fastrtps_cpp::_Depthmeter_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace happymimi_recognition_msgs2
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Depthmeter__callbacks = {
  "happymimi_recognition_msgs2::srv",
  "Depthmeter",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, happymimi_recognition_msgs2, srv, Depthmeter_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, happymimi_recognition_msgs2, srv, Depthmeter_Response)(),
};

static rosidl_service_type_support_t _Depthmeter__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Depthmeter__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace happymimi_recognition_msgs2

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_happymimi_recognition_msgs2
const rosidl_service_type_support_t *
get_service_type_support_handle<happymimi_recognition_msgs2::srv::Depthmeter>()
{
  return &happymimi_recognition_msgs2::srv::typesupport_fastrtps_cpp::_Depthmeter__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, happymimi_recognition_msgs2, srv, Depthmeter)() {
  return &happymimi_recognition_msgs2::srv::typesupport_fastrtps_cpp::_Depthmeter__handle;
}

#ifdef __cplusplus
}
#endif
