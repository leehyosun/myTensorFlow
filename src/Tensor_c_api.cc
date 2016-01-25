/*
 * Tensor_c_api.cc
 *
 *  Created on: 2016. 1. 25.
 *      Author: hyosun.lee
 */

#include "tensor_c_api.h"
#include "tensor_shape.h"

using tensorflow::TensorShape;
// using namespace tensorflow;

struct TF_Tensor {
  TF_DataType dtype;
  TensorShape shape;
//  TensorBuffer* buffer;
};

TF_Tensor* TF_NewTensor(TF_DataType dtype) {

	return new TF_Tensor{dtype};
}
