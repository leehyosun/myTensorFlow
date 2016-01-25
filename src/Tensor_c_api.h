/*
 * Tensor_c_api.h
 *
 *  Created on: 2016. 1. 25.
 *      Author: hyosun.lee
 */

#ifndef TENSORFLOW_PUBLIC_TENSOR_C_API_H_
#define TENSORFLOW_PUBLIC_TENSOR_C_API_H_

#include <stddef.h>

// __cplusplus : This macro is defined when the C++ compiler is in use.

#ifdef __cplusplus
extern "C" {
#endif

// TF_DataType holds the type for a scalar value.  E.g., one slot in a tensor.
// The enum values here are identical to corresponding values in types.proto.
typedef enum {
  TF_FLOAT = 1,
  TF_DOUBLE = 2,
  TF_INT32 = 3,  // Int32 tensors are always in 'host' memory.
  TF_UINT8 = 4,
  TF_INT16 = 5,
  TF_INT8 = 6,
  TF_STRING = 7,
  TF_COMPLEX = 8,  // Single-precision complex
  TF_INT64 = 9,
  TF_BOOL = 10,
  TF_QINT8 = 11,     // Quantized int8
  TF_QUINT8 = 12,    // Quantized uint8
  TF_QINT32 = 13,    // Quantized int32
  TF_BFLOAT16 = 14,  // Float32 truncated to 16 bits.  Only for cast ops.
  TF_QINT16 = 15,    // Quantized int16
  TF_QUINT16 = 16,   // Quantized uint16
} TF_DataType;

typedef struct TF_Tensor TF_Tensor;

#ifdef __cplusplus
} /* end extern "C" */
#endif

#endif  // TENSORFLOW_PUBLIC_TENSOR_C_API_H_
