
#ifndef MINUS_H
#define MINUS_H

#include <cmath>

#include "../operator.h"
#include "../tensor.h"
#include "../graph.h"

#include <operators/negative.h>
#include <operators/plus.h>

/*
    f(x, y) = x - y
    由于这个函数可以由已有的算子定义, 所以不需要继承operator类.
*/

struct Minus
{
    static inline Tensor::Ptr op(const Tensor::Ptr &x, const Tensor::Ptr &y)
    {
        return Plus::op(x, Negative::op(y));
    }
};

#endif