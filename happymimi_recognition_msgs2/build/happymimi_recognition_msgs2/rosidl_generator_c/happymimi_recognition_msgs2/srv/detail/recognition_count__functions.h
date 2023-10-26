// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from happymimi_recognition_msgs2:srv/RecognitionCount.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_COUNT__FUNCTIONS_H_
#define HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_COUNT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "happymimi_recognition_msgs2/msg/rosidl_generator_c__visibility_control.h"

#include "happymimi_recognition_msgs2/srv/detail/recognition_count__struct.h"

/// Initialize srv/RecognitionCount message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * happymimi_recognition_msgs2__srv__RecognitionCount_Request
 * )) before or use
 * happymimi_recognition_msgs2__srv__RecognitionCount_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__srv__RecognitionCount_Request__init(happymimi_recognition_msgs2__srv__RecognitionCount_Request * msg);

/// Finalize srv/RecognitionCount message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__srv__RecognitionCount_Request__fini(happymimi_recognition_msgs2__srv__RecognitionCount_Request * msg);

/// Create srv/RecognitionCount message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * happymimi_recognition_msgs2__srv__RecognitionCount_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__srv__RecognitionCount_Request *
happymimi_recognition_msgs2__srv__RecognitionCount_Request__create();

/// Destroy srv/RecognitionCount message.
/**
 * It calls
 * happymimi_recognition_msgs2__srv__RecognitionCount_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__srv__RecognitionCount_Request__destroy(happymimi_recognition_msgs2__srv__RecognitionCount_Request * msg);

/// Check for srv/RecognitionCount message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__srv__RecognitionCount_Request__are_equal(const happymimi_recognition_msgs2__srv__RecognitionCount_Request * lhs, const happymimi_recognition_msgs2__srv__RecognitionCount_Request * rhs);

/// Copy a srv/RecognitionCount message.
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
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__srv__RecognitionCount_Request__copy(
  const happymimi_recognition_msgs2__srv__RecognitionCount_Request * input,
  happymimi_recognition_msgs2__srv__RecognitionCount_Request * output);

/// Initialize array of srv/RecognitionCount messages.
/**
 * It allocates the memory for the number of elements and calls
 * happymimi_recognition_msgs2__srv__RecognitionCount_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__srv__RecognitionCount_Request__Sequence__init(happymimi_recognition_msgs2__srv__RecognitionCount_Request__Sequence * array, size_t size);

/// Finalize array of srv/RecognitionCount messages.
/**
 * It calls
 * happymimi_recognition_msgs2__srv__RecognitionCount_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__srv__RecognitionCount_Request__Sequence__fini(happymimi_recognition_msgs2__srv__RecognitionCount_Request__Sequence * array);

/// Create array of srv/RecognitionCount messages.
/**
 * It allocates the memory for the array and calls
 * happymimi_recognition_msgs2__srv__RecognitionCount_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__srv__RecognitionCount_Request__Sequence *
happymimi_recognition_msgs2__srv__RecognitionCount_Request__Sequence__create(size_t size);

/// Destroy array of srv/RecognitionCount messages.
/**
 * It calls
 * happymimi_recognition_msgs2__srv__RecognitionCount_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__srv__RecognitionCount_Request__Sequence__destroy(happymimi_recognition_msgs2__srv__RecognitionCount_Request__Sequence * array);

/// Check for srv/RecognitionCount message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__srv__RecognitionCount_Request__Sequence__are_equal(const happymimi_recognition_msgs2__srv__RecognitionCount_Request__Sequence * lhs, const happymimi_recognition_msgs2__srv__RecognitionCount_Request__Sequence * rhs);

/// Copy an array of srv/RecognitionCount messages.
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
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__srv__RecognitionCount_Request__Sequence__copy(
  const happymimi_recognition_msgs2__srv__RecognitionCount_Request__Sequence * input,
  happymimi_recognition_msgs2__srv__RecognitionCount_Request__Sequence * output);

/// Initialize srv/RecognitionCount message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * happymimi_recognition_msgs2__srv__RecognitionCount_Response
 * )) before or use
 * happymimi_recognition_msgs2__srv__RecognitionCount_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__srv__RecognitionCount_Response__init(happymimi_recognition_msgs2__srv__RecognitionCount_Response * msg);

/// Finalize srv/RecognitionCount message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__srv__RecognitionCount_Response__fini(happymimi_recognition_msgs2__srv__RecognitionCount_Response * msg);

/// Create srv/RecognitionCount message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * happymimi_recognition_msgs2__srv__RecognitionCount_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__srv__RecognitionCount_Response *
happymimi_recognition_msgs2__srv__RecognitionCount_Response__create();

/// Destroy srv/RecognitionCount message.
/**
 * It calls
 * happymimi_recognition_msgs2__srv__RecognitionCount_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__srv__RecognitionCount_Response__destroy(happymimi_recognition_msgs2__srv__RecognitionCount_Response * msg);

/// Check for srv/RecognitionCount message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__srv__RecognitionCount_Response__are_equal(const happymimi_recognition_msgs2__srv__RecognitionCount_Response * lhs, const happymimi_recognition_msgs2__srv__RecognitionCount_Response * rhs);

/// Copy a srv/RecognitionCount message.
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
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__srv__RecognitionCount_Response__copy(
  const happymimi_recognition_msgs2__srv__RecognitionCount_Response * input,
  happymimi_recognition_msgs2__srv__RecognitionCount_Response * output);

/// Initialize array of srv/RecognitionCount messages.
/**
 * It allocates the memory for the number of elements and calls
 * happymimi_recognition_msgs2__srv__RecognitionCount_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__srv__RecognitionCount_Response__Sequence__init(happymimi_recognition_msgs2__srv__RecognitionCount_Response__Sequence * array, size_t size);

/// Finalize array of srv/RecognitionCount messages.
/**
 * It calls
 * happymimi_recognition_msgs2__srv__RecognitionCount_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__srv__RecognitionCount_Response__Sequence__fini(happymimi_recognition_msgs2__srv__RecognitionCount_Response__Sequence * array);

/// Create array of srv/RecognitionCount messages.
/**
 * It allocates the memory for the array and calls
 * happymimi_recognition_msgs2__srv__RecognitionCount_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__srv__RecognitionCount_Response__Sequence *
happymimi_recognition_msgs2__srv__RecognitionCount_Response__Sequence__create(size_t size);

/// Destroy array of srv/RecognitionCount messages.
/**
 * It calls
 * happymimi_recognition_msgs2__srv__RecognitionCount_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__srv__RecognitionCount_Response__Sequence__destroy(happymimi_recognition_msgs2__srv__RecognitionCount_Response__Sequence * array);

/// Check for srv/RecognitionCount message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__srv__RecognitionCount_Response__Sequence__are_equal(const happymimi_recognition_msgs2__srv__RecognitionCount_Response__Sequence * lhs, const happymimi_recognition_msgs2__srv__RecognitionCount_Response__Sequence * rhs);

/// Copy an array of srv/RecognitionCount messages.
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
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__srv__RecognitionCount_Response__Sequence__copy(
  const happymimi_recognition_msgs2__srv__RecognitionCount_Response__Sequence * input,
  happymimi_recognition_msgs2__srv__RecognitionCount_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_COUNT__FUNCTIONS_H_
