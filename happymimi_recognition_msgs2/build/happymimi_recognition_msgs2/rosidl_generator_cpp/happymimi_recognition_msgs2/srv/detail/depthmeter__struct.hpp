// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from happymimi_recognition_msgs2:srv/Depthmeter.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__DEPTHMETER__STRUCT_HPP_
#define HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__DEPTHMETER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__happymimi_recognition_msgs2__srv__Depthmeter_Request __attribute__((deprecated))
#else
# define DEPRECATED__happymimi_recognition_msgs2__srv__Depthmeter_Request __declspec(deprecated)
#endif

namespace happymimi_recognition_msgs2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Depthmeter_Request_
{
  using Type = Depthmeter_Request_<ContainerAllocator>;

  explicit Depthmeter_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->meter = 0.0f;
    }
  }

  explicit Depthmeter_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->meter = 0.0f;
    }
  }

  // field types and members
  using _meter_type =
    float;
  _meter_type meter;

  // setters for named parameter idiom
  Type & set__meter(
    const float & _arg)
  {
    this->meter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    happymimi_recognition_msgs2::srv::Depthmeter_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const happymimi_recognition_msgs2::srv::Depthmeter_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<happymimi_recognition_msgs2::srv::Depthmeter_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<happymimi_recognition_msgs2::srv::Depthmeter_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      happymimi_recognition_msgs2::srv::Depthmeter_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<happymimi_recognition_msgs2::srv::Depthmeter_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      happymimi_recognition_msgs2::srv::Depthmeter_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<happymimi_recognition_msgs2::srv::Depthmeter_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<happymimi_recognition_msgs2::srv::Depthmeter_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<happymimi_recognition_msgs2::srv::Depthmeter_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__happymimi_recognition_msgs2__srv__Depthmeter_Request
    std::shared_ptr<happymimi_recognition_msgs2::srv::Depthmeter_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__happymimi_recognition_msgs2__srv__Depthmeter_Request
    std::shared_ptr<happymimi_recognition_msgs2::srv::Depthmeter_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Depthmeter_Request_ & other) const
  {
    if (this->meter != other.meter) {
      return false;
    }
    return true;
  }
  bool operator!=(const Depthmeter_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Depthmeter_Request_

// alias to use template instance with default allocator
using Depthmeter_Request =
  happymimi_recognition_msgs2::srv::Depthmeter_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace happymimi_recognition_msgs2


#ifndef _WIN32
# define DEPRECATED__happymimi_recognition_msgs2__srv__Depthmeter_Response __attribute__((deprecated))
#else
# define DEPRECATED__happymimi_recognition_msgs2__srv__Depthmeter_Response __declspec(deprecated)
#endif

namespace happymimi_recognition_msgs2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Depthmeter_Response_
{
  using Type = Depthmeter_Response_<ContainerAllocator>;

  explicit Depthmeter_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ans = "";
    }
  }

  explicit Depthmeter_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ans(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ans = "";
    }
  }

  // field types and members
  using _ans_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ans_type ans;

  // setters for named parameter idiom
  Type & set__ans(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ans = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    happymimi_recognition_msgs2::srv::Depthmeter_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const happymimi_recognition_msgs2::srv::Depthmeter_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<happymimi_recognition_msgs2::srv::Depthmeter_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<happymimi_recognition_msgs2::srv::Depthmeter_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      happymimi_recognition_msgs2::srv::Depthmeter_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<happymimi_recognition_msgs2::srv::Depthmeter_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      happymimi_recognition_msgs2::srv::Depthmeter_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<happymimi_recognition_msgs2::srv::Depthmeter_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<happymimi_recognition_msgs2::srv::Depthmeter_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<happymimi_recognition_msgs2::srv::Depthmeter_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__happymimi_recognition_msgs2__srv__Depthmeter_Response
    std::shared_ptr<happymimi_recognition_msgs2::srv::Depthmeter_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__happymimi_recognition_msgs2__srv__Depthmeter_Response
    std::shared_ptr<happymimi_recognition_msgs2::srv::Depthmeter_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Depthmeter_Response_ & other) const
  {
    if (this->ans != other.ans) {
      return false;
    }
    return true;
  }
  bool operator!=(const Depthmeter_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Depthmeter_Response_

// alias to use template instance with default allocator
using Depthmeter_Response =
  happymimi_recognition_msgs2::srv::Depthmeter_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace happymimi_recognition_msgs2

namespace happymimi_recognition_msgs2
{

namespace srv
{

struct Depthmeter
{
  using Request = happymimi_recognition_msgs2::srv::Depthmeter_Request;
  using Response = happymimi_recognition_msgs2::srv::Depthmeter_Response;
};

}  // namespace srv

}  // namespace happymimi_recognition_msgs2

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__DEPTHMETER__STRUCT_HPP_
