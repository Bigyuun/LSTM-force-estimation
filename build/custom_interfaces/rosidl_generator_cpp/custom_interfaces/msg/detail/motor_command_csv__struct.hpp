// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/MotorCommandCSV.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND_CSV__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND_CSV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__MotorCommandCSV __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__MotorCommandCSV __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorCommandCSV_
{
  using Type = MotorCommandCSV_<ContainerAllocator>;

  explicit MotorCommandCSV_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit MotorCommandCSV_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _target_val_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _target_val_type target_val;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__target_val(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->target_val = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::MotorCommandCSV_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::MotorCommandCSV_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::MotorCommandCSV_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::MotorCommandCSV_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::MotorCommandCSV_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::MotorCommandCSV_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::MotorCommandCSV_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::MotorCommandCSV_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::MotorCommandCSV_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::MotorCommandCSV_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__MotorCommandCSV
    std::shared_ptr<custom_interfaces::msg::MotorCommandCSV_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__MotorCommandCSV
    std::shared_ptr<custom_interfaces::msg::MotorCommandCSV_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCommandCSV_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->target_val != other.target_val) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCommandCSV_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCommandCSV_

// alias to use template instance with default allocator
using MotorCommandCSV =
  custom_interfaces::msg::MotorCommandCSV_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND_CSV__STRUCT_HPP_
