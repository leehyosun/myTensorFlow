/*
 * Tensor.h
 *
 *  Created on: 2016. 1. 26.
 *      Author: hyosun.lee
 */

/*
 * tensorflow.core.framework �� tensor�� �⺻ �����ӿ�
 */
#ifndef TENSORFLOW_CORE_FRAMEWORK_TENSOR_H_
#define TENSORFLOW_CORE_FRAMEWORK_TENSOR_H_


namespace tensorflow {

// n ������ �迭�� ����
class Tensor {

private:
	DataType type_;
	TensorShape shape_;
	TensorBuffer* buf_;

	// ����Ʈ �ټ�, 1����, 0 ����� float �ټ�
	Tensor();


};

}

#endif /* TENSORFLOW_CORE_FRAMEWORK_TENSOR_H_ */
