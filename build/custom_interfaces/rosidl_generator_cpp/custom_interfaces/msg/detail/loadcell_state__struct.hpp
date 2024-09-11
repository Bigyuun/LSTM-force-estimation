// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/LoadcellState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__LOADCELL_STATE__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__LOADCELL_STATE__STRUCT_HPP_

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
# define DEPRECATED__custom_interfaces__msg__LoadcellState __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__LoadcellState __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LoadcellState_
{
  using Type = LoadcellState_<ContainerAllocator>;

  explicit LoadcellState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit LoadcellState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _stress_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _stress_type stress;
  using _output_voltage_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _output_voltage_type output_voltage;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__stress(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->stress = _arg;
    return *this;
  }
  Type & set__output_voltage(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->output_voltage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::LoadcellState_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::LoadcellState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::LoadcellState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::LoadcellState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::LoadcellState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::LoadcellState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::LoadcellState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::LoadcellState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::LoadcellState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::LoadcellState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__LoadcellState
    std::shared_ptr<custom_interfaces::msg::LoadcellState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__LoadcellState
    std::shared_ptr<custom_interfaces::msg::LoadcellState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadcellState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->stress != other.stress) {
      return false;
    }
    if (this->output_voltage != other.output_voltage) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadcellState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadcellState_

// alias to use template instance with default allocator
using LoadcellState =
  custom_interfaces::msg::LoadcellState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__LOADCELL_STATE__STRUCT_HPP_
