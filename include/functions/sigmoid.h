
#ifndef SIGMOID_H
#define SIGMOID_H

#include <cmath>

#include "../operator.h"
#include "../tensor.h"
#include "../graph.h"

#include <operators.h>

/*
    f(x, y) = x - y
    由于这个函数可以由已有的算子定义, 所以不需要继承operator类.
*/

struct Sigmoid
{
    static inline Tensor::Ptr op(const Tensor::Ptr &x)
    {
        Tensor::Ptr y;
        y = Exp::op(Negative::op(x));
        y = Plus::op(y, Tensor::Get(1));
        y = Inverse::op(y);
        return y;
    }
};

#endif