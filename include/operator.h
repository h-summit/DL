#ifndef OPERATOR_H
#define OPERATOR_H

#include <vector>
#include <memory>

#include "tensor.h"

struct Operator
{
    using Ptr = std::shared_ptr<Operator>;

    Operator()
    {
        res = Tensor::Get(0, false);
    }

    virtual void calculate() = 0;

    Tensor::Ptr res;
    std::vector<Tensor::Ptr> diffirentials;
    std::vector<Tensor::Ptr> paramters;
};

#endif