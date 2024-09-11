// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/DataFilterSetting.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__DATA_FILTER_SETTING__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__DATA_FILTER_SETTING__STRUCT_HPP_

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
# define DEPRECATED__custom_interfaces__msg__DataFilterSetting __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__DataFilterSetting __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DataFilterSetting_
{
  using Type = DataFilterSetting_<ContainerAllocator>;

  explicit DataFilterSetting_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_lpf = false;
      this->set_maf = false;
      this->lpf_weight = 0.0f;
      this->maf_buffer_size = 0l;
    }
  }

  explicit DataFilterSetting_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_lpf = false;
      this->set_maf = false;
      this->lpf_weight = 0.0f;
      this->maf_buffer_size = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _set_lpf_type =
    bool;
  _set_lpf_type set_lpf;
  using _set_maf_type =
    bool;
  _set_maf_type set_maf;
  using _lpf_weight_type =
    float;
  _lpf_weight_type lpf_weight;
  using _maf_buffer_size_type =
    int32_t;
  _maf_buffer_size_type maf_buffer_size;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__set_lpf(
    const bool & _arg)
  {
    this->set_lpf = _arg;
    return *this;
  }
  Type & set__set_maf(
    const bool & _arg)
  {
    this->set_maf = _arg;
    return *this;
  }
  Type & set__lpf_weight(
    const float & _arg)
  {
    this->lpf_weight = _arg;
    return *this;
  }
  Type & set__maf_buffer_size(
    const int32_t & _arg)
  {
    this->maf_buffer_size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::DataFilterSetting_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::DataFilterSetting_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::DataFilterSetting_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::DataFilterSetting_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::DataFilterSetting_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::DataFilterSetting_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::DataFilterSetting_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::DataFilterSetting_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::DataFilterSetting_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::DataFilterSetting_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__DataFilterSetting
    std::shared_ptr<custom_interfaces::msg::DataFilterSetting_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__DataFilterSetting
    std::shared_ptr<custom_interfaces::msg::DataFilterSetting_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataFilterSetting_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->set_lpf != other.set_lpf) {
      return false;
    }
    if (this->set_maf != other.set_maf) {
      return false;
    }
    if (this->lpf_weight != other.lpf_weight) {
      return false;
    }
    if (this->maf_buffer_size != other.maf_buffer_size) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataFilterSetting_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataFilterSetting_

// alias to use template instance with default allocator
using DataFilterSetting =
  custom_interfaces::msg::DataFilterSetting_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__DATA_FILTER_SETTING__STRUCT_HPP_
