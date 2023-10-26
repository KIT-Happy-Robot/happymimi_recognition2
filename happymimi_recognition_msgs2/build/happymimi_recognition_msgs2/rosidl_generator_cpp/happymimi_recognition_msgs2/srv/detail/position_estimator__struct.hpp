// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from happymimi_recognition_msgs2:srv/PositionEstimator.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__POSITION_ESTIMATOR__STRUCT_HPP_
#define HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__POSITION_ESTIMATOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__happymimi_recognition_msgs2__srv__PositionEstimator_Request __attribute__((deprecated))
#else
# define DEPRECATED__happymimi_recognition_msgs2__srv__PositionEstimator_Request __declspec(deprecated)
#endif

namespace happymimi_recognition_msgs2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PositionEstimator_Request_
{
  using Type = PositionEstimator_Request_<ContainerAllocator>;

  explicit PositionEstimator_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->center_x = 0ll;
      this->center_y = 0ll;
    }
  }

  explicit PositionEstimator_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->center_x = 0ll;
      this->center_y = 0ll;
    }
  }

  // field types and members
  using _center_x_type =
    int64_t;
  _center_x_type center_x;
  using _center_y_type =
    int64_t;
  _center_y_type center_y;

  // setters for named parameter idiom
  Type & set__center_x(
    const int64_t & _arg)
  {
    this->center_x = _arg;
    return *this;
  }
  Type & set__center_y(
    const int64_t & _arg)
  {
    this->center_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    happymimi_recognition_msgs2::srv::PositionEstimator_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const happymimi_recognition_msgs2::srv::PositionEstimator_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<happymimi_recognition_msgs2::srv::PositionEstimator_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<happymimi_recognition_msgs2::srv::PositionEstimator_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      happymimi_recognition_msgs2::srv::PositionEstimator_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<happymimi_recognition_msgs2::srv::PositionEstimator_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      happymimi_recognition_msgs2::srv::PositionEstimator_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<happymimi_recognition_msgs2::srv::PositionEstimator_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<happymimi_recognition_msgs2::srv::PositionEstimator_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<happymimi_recognition_msgs2::srv::PositionEstimator_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__happymimi_recognition_msgs2__srv__PositionEstimator_Request
    std::shared_ptr<happymimi_recognition_msgs2::srv::PositionEstimator_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__happymimi_recognition_msgs2__srv__PositionEstimator_Request
    std::shared_ptr<happymimi_recognition_msgs2::srv::PositionEstimator_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionEstimator_Request_ & other) const
  {
    if (this->center_x != other.center_x) {
      return false;
    }
    if (this->center_y != other.center_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionEstimator_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionEstimator_Request_

// alias to use template instance with default allocator
using PositionEstimator_Request =
  happymimi_recognition_msgs2::srv::PositionEstimator_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace happymimi_recognition_msgs2


// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__happymimi_recognition_msgs2__srv__PositionEstimator_Response __attribute__((deprecated))
#else
# define DEPRECATED__happymimi_recognition_msgs2__srv__PositionEstimator_Response __declspec(deprecated)
#endif

namespace happymimi_recognition_msgs2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PositionEstimator_Response_
{
  using Type = PositionEstimator_Response_<ContainerAllocator>;

  explicit PositionEstimator_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init)
  {
    (void)_init;
  }

  explicit PositionEstimator_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _point_type point;

  // setters for named parameter idiom
  Type & set__point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    happymimi_recognition_msgs2::srv::PositionEstimator_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const happymimi_recognition_msgs2::srv::PositionEstimator_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<happymimi_recognition_msgs2::srv::PositionEstimator_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<happymimi_recognition_msgs2::srv::PositionEstimator_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      happymimi_recognition_msgs2::srv::PositionEstimator_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<happymimi_recognition_msgs2::srv::PositionEstimator_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      happymimi_recognition_msgs2::srv::PositionEstimator_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<happymimi_recognition_msgs2::srv::PositionEstimator_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<happymimi_recognition_msgs2::srv::PositionEstimator_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<happymimi_recognition_msgs2::srv::PositionEstimator_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__happymimi_recognition_msgs2__srv__PositionEstimator_Response
    std::shared_ptr<happymimi_recognition_msgs2::srv::PositionEstimator_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__happymimi_recognition_msgs2__srv__PositionEstimator_Response
    std::shared_ptr<happymimi_recognition_msgs2::srv::PositionEstimator_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionEstimator_Response_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionEstimator_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionEstimator_Response_

// alias to use template instance with default allocator
using PositionEstimator_Response =
  happymimi_recognition_msgs2::srv::PositionEstimator_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace happymimi_recognition_msgs2

namespace happymimi_recognition_msgs2
{

namespace srv
{

struct PositionEstimator
{
  using Request = happymimi_recognition_msgs2::srv::PositionEstimator_Request;
  using Response = happymimi_recognition_msgs2::srv::PositionEstimator_Response;
};

}  // namespace srv

}  // namespace happymimi_recognition_msgs2

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__POSITION_ESTIMATOR__STRUCT_HPP_
