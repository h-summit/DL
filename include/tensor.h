#ifndef TENSOR_H
#define TENSOR_H

#include <memory>


template <class DataType>
struct Tensor
{
    using Ptr = std::shared_ptr<Tensor>;
    using data_type = DataType;

    static Tensor::Ptr Get(float data, bool is_end_node)
    {
        return std::make_shared<Tensor> (data, is_end_node);
    }

    static Tensor::Ptr Get(float data)
    {
        return std::make_shared<Tensor> (data, true);
    }

    Tensor(float data, bool is_end_node) : is_end_node(is_end_node)
    {
        this->data = data;
        if (is_end_node)
            this->gradient = 0;
        else
            this->gradient = 1;
    }


    const bool is_end_node;
    float data;
    float gradient;

};


using FloatTensor = Tensor<float>::Ptr;
using FloatTensor = Tensor<float>::Ptr;

#endif