// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:srv/MoveMotorDirect.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__MOVE_MOTOR_DIRECT__STRUCT_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__MOVE_MOTOR_DIRECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__MoveMotorDirect_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__MoveMotorDirect_Request __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveMotorDirect_Request_
{
  using Type = MoveMotorDirect_Request_<ContainerAllocator>;

  explicit MoveMotorDirect_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index_motor = 0l;
      this->target_position = 0l;
      this->target_velocity_profile = 0l;
    }
  }

  explicit MoveMotorDirect_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index_motor = 0l;
      this->target_position = 0l;
      this->target_velocity_profile = 0l;
    }
  }

  // field types and members
  using _index_motor_type =
    int32_t;
  _index_motor_type index_motor;
  using _target_position_type =
    int32_t;
  _target_position_type target_position;
  using _target_velocity_profile_type =
    int32_t;
  _target_velocity_profile_type target_velocity_profile;

  // setters for named parameter idiom
  Type & set__index_motor(
    const int32_t & _arg)
  {
    this->index_motor = _arg;
    return *this;
  }
  Type & set__target_position(
    const int32_t & _arg)
  {
    this->target_position = _arg;
    return *this;
  }
  Type & set__target_velocity_profile(
    const int32_t & _arg)
  {
    this->target_velocity_profile = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::MoveMotorDirect_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::MoveMotorDirect_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::MoveMotorDirect_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::MoveMotorDirect_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::MoveMotorDirect_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::MoveMotorDirect_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::MoveMotorDirect_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::MoveMotorDirect_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::MoveMotorDirect_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::MoveMotorDirect_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__MoveMotorDirect_Request
    std::shared_ptr<custom_interfaces::srv::MoveMotorDirect_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__MoveMotorDirect_Request
    std::shared_ptr<custom_interfaces::srv::MoveMotorDirect_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveMotorDirect_Request_ & other) const
  {
    if (this->index_motor != other.index_motor) {
      return false;
    }
    if (this->target_position != other.target_position) {
      return false;
    }
    if (this->target_velocity_profile != other.target_velocity_profile) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveMotorDirect_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveMotorDirect_Request_

// alias to use template instance with default allocator
using MoveMotorDirect_Request =
  custom_interfaces::srv::MoveMotorDirect_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__MoveMotorDirect_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__MoveMotorDirect_Response __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveMotorDirect_Response_
{
  using Type = MoveMotorDirect_Response_<ContainerAllocator>;

  explicit MoveMotorDirect_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit MoveMotorDirect_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    custom_interfaces::srv::MoveMotorDirect_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::MoveMotorDirect_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::MoveMotorDirect_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::MoveMotorDirect_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::MoveMotorDirect_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::MoveMotorDirect_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::MoveMotorDirect_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::MoveMotorDirect_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::MoveMotorDirect_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::MoveMotorDirect_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__MoveMotorDirect_Response
    std::shared_ptr<custom_interfaces::srv::MoveMotorDirect_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__MoveMotorDirect_Response
    std::shared_ptr<custom_interfaces::srv::MoveMotorDirect_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveMotorDirect_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveMotorDirect_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveMotorDirect_Response_

// alias to use template instance with default allocator
using MoveMotorDirect_Response =
  custom_interfaces::srv::MoveMotorDirect_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces

namespace custom_interfaces
{

namespace srv
{

struct MoveMotorDirect
{
  using Request = custom_interfaces::srv::MoveMotorDirect_Request;
  using Response = custom_interfaces::srv::MoveMotorDirect_Response;
};

}  // namespace srv

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__MOVE_MOTOR_DIRECT__STRUCT_HPP_
