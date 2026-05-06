// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_service_interfaces:srv/ResetCounter.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_INTERFACES__SRV__DETAIL__RESET_COUNTER__STRUCT_HPP_
#define MY_SERVICE_INTERFACES__SRV__DETAIL__RESET_COUNTER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_service_interfaces__srv__ResetCounter_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_service_interfaces__srv__ResetCounter_Request __declspec(deprecated)
#endif

namespace my_service_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetCounter_Request_
{
  using Type = ResetCounter_Request_<ContainerAllocator>;

  explicit ResetCounter_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset_value = 0ll;
    }
  }

  explicit ResetCounter_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset_value = 0ll;
    }
  }

  // field types and members
  using _reset_value_type =
    int64_t;
  _reset_value_type reset_value;

  // setters for named parameter idiom
  Type & set__reset_value(
    const int64_t & _arg)
  {
    this->reset_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_service_interfaces::srv::ResetCounter_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_service_interfaces::srv::ResetCounter_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_service_interfaces::srv::ResetCounter_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_service_interfaces::srv::ResetCounter_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_service_interfaces::srv::ResetCounter_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_service_interfaces::srv::ResetCounter_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_service_interfaces::srv::ResetCounter_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_service_interfaces::srv::ResetCounter_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_service_interfaces::srv::ResetCounter_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_service_interfaces::srv::ResetCounter_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_service_interfaces__srv__ResetCounter_Request
    std::shared_ptr<my_service_interfaces::srv::ResetCounter_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_service_interfaces__srv__ResetCounter_Request
    std::shared_ptr<my_service_interfaces::srv::ResetCounter_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetCounter_Request_ & other) const
  {
    if (this->reset_value != other.reset_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetCounter_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetCounter_Request_

// alias to use template instance with default allocator
using ResetCounter_Request =
  my_service_interfaces::srv::ResetCounter_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_service_interfaces


#ifndef _WIN32
# define DEPRECATED__my_service_interfaces__srv__ResetCounter_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_service_interfaces__srv__ResetCounter_Response __declspec(deprecated)
#endif

namespace my_service_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetCounter_Response_
{
  using Type = ResetCounter_Response_<ContainerAllocator>;

  explicit ResetCounter_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ResetCounter_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_service_interfaces::srv::ResetCounter_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_service_interfaces::srv::ResetCounter_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_service_interfaces::srv::ResetCounter_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_service_interfaces::srv::ResetCounter_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_service_interfaces::srv::ResetCounter_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_service_interfaces::srv::ResetCounter_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_service_interfaces::srv::ResetCounter_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_service_interfaces::srv::ResetCounter_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_service_interfaces::srv::ResetCounter_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_service_interfaces::srv::ResetCounter_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_service_interfaces__srv__ResetCounter_Response
    std::shared_ptr<my_service_interfaces::srv::ResetCounter_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_service_interfaces__srv__ResetCounter_Response
    std::shared_ptr<my_service_interfaces::srv::ResetCounter_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetCounter_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetCounter_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetCounter_Response_

// alias to use template instance with default allocator
using ResetCounter_Response =
  my_service_interfaces::srv::ResetCounter_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_service_interfaces

namespace my_service_interfaces
{

namespace srv
{

struct ResetCounter
{
  using Request = my_service_interfaces::srv::ResetCounter_Request;
  using Response = my_service_interfaces::srv::ResetCounter_Response;
};

}  // namespace srv

}  // namespace my_service_interfaces

#endif  // MY_SERVICE_INTERFACES__SRV__DETAIL__RESET_COUNTER__STRUCT_HPP_
