// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:srv/MoveToolAngle.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__MOVE_TOOL_ANGLE__STRUCT_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__MOVE_TOOL_ANGLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__MoveToolAngle_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__MoveToolAngle_Request __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveToolAngle_Request_
{
  using Type = MoveToolAngle_Request_<ContainerAllocator>;

  explicit MoveToolAngle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tiltangle = 0.0;
      this->panangle = 0.0;
      this->gripangle = 0.0;
      this->mode = 0;
    }
  }

  explicit MoveToolAngle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tiltangle = 0.0;
      this->panangle = 0.0;
      this->gripangle = 0.0;
      this->mode = 0;
    }
  }

  // field types and members
  using _tiltangle_type =
    double;
  _tiltangle_type tiltangle;
  using _panangle_type =
    double;
  _panangle_type panangle;
  using _gripangle_type =
    double;
  _gripangle_type gripangle;
  using _mode_type =
    int8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__tiltangle(
    const double & _arg)
  {
    this->tiltangle = _arg;
    return *this;
  }
  Type & set__panangle(
    const double & _arg)
  {
    this->panangle = _arg;
    return *this;
  }
  Type & set__gripangle(
    const double & _arg)
  {
    this->gripangle = _arg;
    return *this;
  }
  Type & set__mode(
    const int8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::MoveToolAngle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::MoveToolAngle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::MoveToolAngle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::MoveToolAngle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::MoveToolAngle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::MoveToolAngle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::MoveToolAngle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::MoveToolAngle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::MoveToolAngle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::MoveToolAngle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__MoveToolAngle_Request
    std::shared_ptr<custom_interfaces::srv::MoveToolAngle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__MoveToolAngle_Request
    std::shared_ptr<custom_interfaces::srv::MoveToolAngle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveToolAngle_Request_ & other) const
  {
    if (this->tiltangle != other.tiltangle) {
      return false;
    }
    if (this->panangle != other.panangle) {
      return false;
    }
    if (this->gripangle != other.gripangle) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveToolAngle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveToolAngle_Request_

// alias to use template instance with default allocator
using MoveToolAngle_Request =
  custom_interfaces::srv::MoveToolAngle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__MoveToolAngle_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__MoveToolAngle_Response __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveToolAngle_Response_
{
  using Type = MoveToolAngle_Response_<ContainerAllocator>;

  explicit MoveToolAngle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit MoveToolAngle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::MoveToolAngle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::MoveToolAngle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::MoveToolAngle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::MoveToolAngle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::MoveToolAngle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::MoveToolAngle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::MoveToolAngle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::MoveToolAngle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::MoveToolAngle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::MoveToolAngle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__MoveToolAngle_Response
    std::shared_ptr<custom_interfaces::srv::MoveToolAngle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__MoveToolAngle_Response
    std::shared_ptr<custom_interfaces::srv::MoveToolAngle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveToolAngle_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveToolAngle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveToolAngle_Response_

// alias to use template instance with default allocator
using MoveToolAngle_Response =
  custom_interfaces::srv::MoveToolAngle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces

namespace custom_interfaces
{

namespace srv
{

struct MoveToolAngle
{
  using Request = custom_interfaces::srv::MoveToolAngle_Request;
  using Response = custom_interfaces::srv::MoveToolAngle_Response;
};

}  // namespace srv

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__MOVE_TOOL_ANGLE__STRUCT_HPP_
