// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_service_interfaces:srv/ResetCounter.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_INTERFACES__SRV__DETAIL__RESET_COUNTER__STRUCT_H_
#define MY_SERVICE_INTERFACES__SRV__DETAIL__RESET_COUNTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ResetCounter in the package my_service_interfaces.
typedef struct my_service_interfaces__srv__ResetCounter_Request
{
  int64_t reset_value;
} my_service_interfaces__srv__ResetCounter_Request;

// Struct for a sequence of my_service_interfaces__srv__ResetCounter_Request.
typedef struct my_service_interfaces__srv__ResetCounter_Request__Sequence
{
  my_service_interfaces__srv__ResetCounter_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_service_interfaces__srv__ResetCounter_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ResetCounter in the package my_service_interfaces.
typedef struct my_service_interfaces__srv__ResetCounter_Response
{
  bool success;
  rosidl_runtime_c__String message;
} my_service_interfaces__srv__ResetCounter_Response;

// Struct for a sequence of my_service_interfaces__srv__ResetCounter_Response.
typedef struct my_service_interfaces__srv__ResetCounter_Response__Sequence
{
  my_service_interfaces__srv__ResetCounter_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_service_interfaces__srv__ResetCounter_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_SERVICE_INTERFACES__SRV__DETAIL__RESET_COUNTER__STRUCT_H_
