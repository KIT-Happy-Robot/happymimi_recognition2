// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from happymimi_recognition_msgs2:action/RecognitionProcessing.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__ACTION__DETAIL__RECOGNITION_PROCESSING__FUNCTIONS_H_
#define HAPPYMIMI_RECOGNITION_MSGS2__ACTION__DETAIL__RECOGNITION_PROCESSING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "happymimi_recognition_msgs2/msg/rosidl_generator_c__visibility_control.h"

#include "happymimi_recognition_msgs2/action/detail/recognition_processing__struct.h"

/// Initialize action/RecognitionProcessing message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Goal
 * )) before or use
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__init(happymimi_recognition_msgs2__action__RecognitionProcessing_Goal * msg);

/// Finalize action/RecognitionProcessing message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_Goal * msg);

/// Create action/RecognitionProcessing message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal *
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__create();

/// Destroy action/RecognitionProcessing message.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_Goal * msg);

/// Check for action/RecognitionProcessing message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_Goal * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_Goal * rhs);

/// Copy a action/RecognitionProcessing message.
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
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_Goal * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_Goal * output);

/// Initialize array of action/RecognitionProcessing messages.
/**
 * It allocates the memory for the number of elements and calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence__init(happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence * array, size_t size);

/// Finalize array of action/RecognitionProcessing messages.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence * array);

/// Create array of action/RecognitionProcessing messages.
/**
 * It allocates the memory for the array and calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence *
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence__create(size_t size);

/// Destroy array of action/RecognitionProcessing messages.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence * array);

/// Check for action/RecognitionProcessing message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence * rhs);

/// Copy an array of action/RecognitionProcessing messages.
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
happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence * output);

/// Initialize action/RecognitionProcessing message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Result
 * )) before or use
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__init(happymimi_recognition_msgs2__action__RecognitionProcessing_Result * msg);

/// Finalize action/RecognitionProcessing message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_Result * msg);

/// Create action/RecognitionProcessing message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__action__RecognitionProcessing_Result *
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__create();

/// Destroy action/RecognitionProcessing message.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_Result * msg);

/// Check for action/RecognitionProcessing message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_Result * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_Result * rhs);

/// Copy a action/RecognitionProcessing message.
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
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_Result * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_Result * output);

/// Initialize array of action/RecognitionProcessing messages.
/**
 * It allocates the memory for the number of elements and calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence__init(happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence * array, size_t size);

/// Finalize array of action/RecognitionProcessing messages.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence * array);

/// Create array of action/RecognitionProcessing messages.
/**
 * It allocates the memory for the array and calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence *
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence__create(size_t size);

/// Destroy array of action/RecognitionProcessing messages.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence * array);

/// Check for action/RecognitionProcessing message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence * rhs);

/// Copy an array of action/RecognitionProcessing messages.
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
happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence * output);

/// Initialize action/RecognitionProcessing message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback
 * )) before or use
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__init(happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback * msg);

/// Finalize action/RecognitionProcessing message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback * msg);

/// Create action/RecognitionProcessing message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback *
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__create();

/// Destroy action/RecognitionProcessing message.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback * msg);

/// Check for action/RecognitionProcessing message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback * rhs);

/// Copy a action/RecognitionProcessing message.
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
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback * output);

/// Initialize array of action/RecognitionProcessing messages.
/**
 * It allocates the memory for the number of elements and calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence__init(happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence * array, size_t size);

/// Finalize array of action/RecognitionProcessing messages.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence * array);

/// Create array of action/RecognitionProcessing messages.
/**
 * It allocates the memory for the array and calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence *
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence__create(size_t size);

/// Destroy array of action/RecognitionProcessing messages.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence * array);

/// Check for action/RecognitionProcessing message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence * rhs);

/// Copy an array of action/RecognitionProcessing messages.
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
happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence * output);

/// Initialize action/RecognitionProcessing message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request
 * )) before or use
 * happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__init(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request * msg);

/// Finalize action/RecognitionProcessing message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request * msg);

/// Create action/RecognitionProcessing message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request *
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__create();

/// Destroy action/RecognitionProcessing message.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request * msg);

/// Check for action/RecognitionProcessing message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request * rhs);

/// Copy a action/RecognitionProcessing message.
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
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request * output);

/// Initialize array of action/RecognitionProcessing messages.
/**
 * It allocates the memory for the number of elements and calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence__init(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/RecognitionProcessing messages.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence * array);

/// Create array of action/RecognitionProcessing messages.
/**
 * It allocates the memory for the array and calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence *
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/RecognitionProcessing messages.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence * array);

/// Check for action/RecognitionProcessing message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/RecognitionProcessing messages.
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
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence * output);

/// Initialize action/RecognitionProcessing message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response
 * )) before or use
 * happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__init(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response * msg);

/// Finalize action/RecognitionProcessing message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response * msg);

/// Create action/RecognitionProcessing message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response *
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__create();

/// Destroy action/RecognitionProcessing message.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response * msg);

/// Check for action/RecognitionProcessing message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response * rhs);

/// Copy a action/RecognitionProcessing message.
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
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response * output);

/// Initialize array of action/RecognitionProcessing messages.
/**
 * It allocates the memory for the number of elements and calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence__init(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/RecognitionProcessing messages.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence * array);

/// Create array of action/RecognitionProcessing messages.
/**
 * It allocates the memory for the array and calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence *
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/RecognitionProcessing messages.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence * array);

/// Check for action/RecognitionProcessing message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/RecognitionProcessing messages.
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
happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence * output);

/// Initialize action/RecognitionProcessing message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request
 * )) before or use
 * happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__init(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request * msg);

/// Finalize action/RecognitionProcessing message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request * msg);

/// Create action/RecognitionProcessing message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request *
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__create();

/// Destroy action/RecognitionProcessing message.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request * msg);

/// Check for action/RecognitionProcessing message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request * rhs);

/// Copy a action/RecognitionProcessing message.
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
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request * output);

/// Initialize array of action/RecognitionProcessing messages.
/**
 * It allocates the memory for the number of elements and calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence__init(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/RecognitionProcessing messages.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence * array);

/// Create array of action/RecognitionProcessing messages.
/**
 * It allocates the memory for the array and calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence *
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/RecognitionProcessing messages.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence * array);

/// Check for action/RecognitionProcessing message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence * rhs);

/// Copy an array of action/RecognitionProcessing messages.
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
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence * output);

/// Initialize action/RecognitionProcessing message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response
 * )) before or use
 * happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__init(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response * msg);

/// Finalize action/RecognitionProcessing message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response * msg);

/// Create action/RecognitionProcessing message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response *
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__create();

/// Destroy action/RecognitionProcessing message.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response * msg);

/// Check for action/RecognitionProcessing message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response * rhs);

/// Copy a action/RecognitionProcessing message.
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
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response * output);

/// Initialize array of action/RecognitionProcessing messages.
/**
 * It allocates the memory for the number of elements and calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence__init(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/RecognitionProcessing messages.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence * array);

/// Create array of action/RecognitionProcessing messages.
/**
 * It allocates the memory for the array and calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence *
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/RecognitionProcessing messages.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence * array);

/// Check for action/RecognitionProcessing message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence * rhs);

/// Copy an array of action/RecognitionProcessing messages.
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
happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence * output);

/// Initialize action/RecognitionProcessing message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage
 * )) before or use
 * happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__init(happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage * msg);

/// Finalize action/RecognitionProcessing message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage * msg);

/// Create action/RecognitionProcessing message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage *
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__create();

/// Destroy action/RecognitionProcessing message.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage * msg);

/// Check for action/RecognitionProcessing message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage * rhs);

/// Copy a action/RecognitionProcessing message.
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
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage * output);

/// Initialize array of action/RecognitionProcessing messages.
/**
 * It allocates the memory for the number of elements and calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence__init(happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/RecognitionProcessing messages.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence__fini(happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence * array);

/// Create array of action/RecognitionProcessing messages.
/**
 * It allocates the memory for the array and calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence *
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/RecognitionProcessing messages.
/**
 * It calls
 * happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
void
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence__destroy(happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence * array);

/// Check for action/RecognitionProcessing message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymimi_recognition_msgs2
bool
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence__are_equal(const happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence * lhs, const happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/RecognitionProcessing messages.
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
happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence__copy(
  const happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence * input,
  happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__ACTION__DETAIL__RECOGNITION_PROCESSING__FUNCTIONS_H_
