// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vizanti_msgs:srv/SetNodeParameter.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__SET_NODE_PARAMETER__FUNCTIONS_H_
#define VIZANTI_MSGS__SRV__DETAIL__SET_NODE_PARAMETER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "vizanti_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "vizanti_msgs/srv/detail/set_node_parameter__struct.h"

/// Initialize srv/SetNodeParameter message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vizanti_msgs__srv__SetNodeParameter_Request
 * )) before or use
 * vizanti_msgs__srv__SetNodeParameter_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
bool
vizanti_msgs__srv__SetNodeParameter_Request__init(vizanti_msgs__srv__SetNodeParameter_Request * msg);

/// Finalize srv/SetNodeParameter message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
void
vizanti_msgs__srv__SetNodeParameter_Request__fini(vizanti_msgs__srv__SetNodeParameter_Request * msg);

/// Create srv/SetNodeParameter message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vizanti_msgs__srv__SetNodeParameter_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
vizanti_msgs__srv__SetNodeParameter_Request *
vizanti_msgs__srv__SetNodeParameter_Request__create();

/// Destroy srv/SetNodeParameter message.
/**
 * It calls
 * vizanti_msgs__srv__SetNodeParameter_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
void
vizanti_msgs__srv__SetNodeParameter_Request__destroy(vizanti_msgs__srv__SetNodeParameter_Request * msg);

/// Check for srv/SetNodeParameter message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
bool
vizanti_msgs__srv__SetNodeParameter_Request__are_equal(const vizanti_msgs__srv__SetNodeParameter_Request * lhs, const vizanti_msgs__srv__SetNodeParameter_Request * rhs);

/// Copy a srv/SetNodeParameter message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
bool
vizanti_msgs__srv__SetNodeParameter_Request__copy(
  const vizanti_msgs__srv__SetNodeParameter_Request * input,
  vizanti_msgs__srv__SetNodeParameter_Request * output);

/// Initialize array of srv/SetNodeParameter messages.
/**
 * It allocates the memory for the number of elements and calls
 * vizanti_msgs__srv__SetNodeParameter_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
bool
vizanti_msgs__srv__SetNodeParameter_Request__Sequence__init(vizanti_msgs__srv__SetNodeParameter_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetNodeParameter messages.
/**
 * It calls
 * vizanti_msgs__srv__SetNodeParameter_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
void
vizanti_msgs__srv__SetNodeParameter_Request__Sequence__fini(vizanti_msgs__srv__SetNodeParameter_Request__Sequence * array);

/// Create array of srv/SetNodeParameter messages.
/**
 * It allocates the memory for the array and calls
 * vizanti_msgs__srv__SetNodeParameter_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
vizanti_msgs__srv__SetNodeParameter_Request__Sequence *
vizanti_msgs__srv__SetNodeParameter_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetNodeParameter messages.
/**
 * It calls
 * vizanti_msgs__srv__SetNodeParameter_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
void
vizanti_msgs__srv__SetNodeParameter_Request__Sequence__destroy(vizanti_msgs__srv__SetNodeParameter_Request__Sequence * array);

/// Check for srv/SetNodeParameter message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
bool
vizanti_msgs__srv__SetNodeParameter_Request__Sequence__are_equal(const vizanti_msgs__srv__SetNodeParameter_Request__Sequence * lhs, const vizanti_msgs__srv__SetNodeParameter_Request__Sequence * rhs);

/// Copy an array of srv/SetNodeParameter messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
bool
vizanti_msgs__srv__SetNodeParameter_Request__Sequence__copy(
  const vizanti_msgs__srv__SetNodeParameter_Request__Sequence * input,
  vizanti_msgs__srv__SetNodeParameter_Request__Sequence * output);

/// Initialize srv/SetNodeParameter message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vizanti_msgs__srv__SetNodeParameter_Response
 * )) before or use
 * vizanti_msgs__srv__SetNodeParameter_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
bool
vizanti_msgs__srv__SetNodeParameter_Response__init(vizanti_msgs__srv__SetNodeParameter_Response * msg);

/// Finalize srv/SetNodeParameter message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
void
vizanti_msgs__srv__SetNodeParameter_Response__fini(vizanti_msgs__srv__SetNodeParameter_Response * msg);

/// Create srv/SetNodeParameter message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vizanti_msgs__srv__SetNodeParameter_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
vizanti_msgs__srv__SetNodeParameter_Response *
vizanti_msgs__srv__SetNodeParameter_Response__create();

/// Destroy srv/SetNodeParameter message.
/**
 * It calls
 * vizanti_msgs__srv__SetNodeParameter_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
void
vizanti_msgs__srv__SetNodeParameter_Response__destroy(vizanti_msgs__srv__SetNodeParameter_Response * msg);

/// Check for srv/SetNodeParameter message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
bool
vizanti_msgs__srv__SetNodeParameter_Response__are_equal(const vizanti_msgs__srv__SetNodeParameter_Response * lhs, const vizanti_msgs__srv__SetNodeParameter_Response * rhs);

/// Copy a srv/SetNodeParameter message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
bool
vizanti_msgs__srv__SetNodeParameter_Response__copy(
  const vizanti_msgs__srv__SetNodeParameter_Response * input,
  vizanti_msgs__srv__SetNodeParameter_Response * output);

/// Initialize array of srv/SetNodeParameter messages.
/**
 * It allocates the memory for the number of elements and calls
 * vizanti_msgs__srv__SetNodeParameter_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
bool
vizanti_msgs__srv__SetNodeParameter_Response__Sequence__init(vizanti_msgs__srv__SetNodeParameter_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetNodeParameter messages.
/**
 * It calls
 * vizanti_msgs__srv__SetNodeParameter_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
void
vizanti_msgs__srv__SetNodeParameter_Response__Sequence__fini(vizanti_msgs__srv__SetNodeParameter_Response__Sequence * array);

/// Create array of srv/SetNodeParameter messages.
/**
 * It allocates the memory for the array and calls
 * vizanti_msgs__srv__SetNodeParameter_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
vizanti_msgs__srv__SetNodeParameter_Response__Sequence *
vizanti_msgs__srv__SetNodeParameter_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetNodeParameter messages.
/**
 * It calls
 * vizanti_msgs__srv__SetNodeParameter_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
void
vizanti_msgs__srv__SetNodeParameter_Response__Sequence__destroy(vizanti_msgs__srv__SetNodeParameter_Response__Sequence * array);

/// Check for srv/SetNodeParameter message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
bool
vizanti_msgs__srv__SetNodeParameter_Response__Sequence__are_equal(const vizanti_msgs__srv__SetNodeParameter_Response__Sequence * lhs, const vizanti_msgs__srv__SetNodeParameter_Response__Sequence * rhs);

/// Copy an array of srv/SetNodeParameter messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_msgs
bool
vizanti_msgs__srv__SetNodeParameter_Response__Sequence__copy(
  const vizanti_msgs__srv__SetNodeParameter_Response__Sequence * input,
  vizanti_msgs__srv__SetNodeParameter_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VIZANTI_MSGS__SRV__DETAIL__SET_NODE_PARAMETER__FUNCTIONS_H_
