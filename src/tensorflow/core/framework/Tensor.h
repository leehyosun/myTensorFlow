/*
 * Tensor.h
 *
 *  Created on: 2016. 1. 26.
 *      Author: hyosun.lee
 */

/*
 * tensorflow.core.framework 는 tensor의 기본 프레임웍
 */
#ifndef TENSORFLOW_CORE_FRAMEWORK_TENSOR_H_
#define TENSORFLOW_CORE_FRAMEWORK_TENSOR_H_


namespace tensorflow {

// n 차원의 배열을 가짐
class Tensor {

private:
	DataType type_;
	TensorShape shape_;
	TensorBuffer* buf_;

	// 디폴트 텐서, 1차원, 0 요소의 float 텐서
	Tensor();


};

}

#endif /* TENSORFLOW_CORE_FRAMEWORK_TENSOR_H_ */
