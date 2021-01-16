
#ifndef MINUS_H
#define MINUS_H

#include <cmath>

#include "../operator.h"
#include "../tensor.h"
#include "../graph.h"

/*
    f(x) = -x
*/


struct Minus : public Operator
{
    static Tensor::Ptr op(const Tensor::Ptr &x)
    {
        Operator::Ptr oprator_ = std::make_shared<Minus> (x);
        Graph::graph.add(oprator_, oprator_->res);
        return oprator_->res;
    }

    Minus(const Tensor::Ptr &x)
    {
        this->paramters.push_back(x);
        calculate();
    }

    void calculate() override
    {
        const float x = this->paramters[0]->data;

        // result data
        res->data = -x;

        // diffirential data
        diffirentials.push_back(Tensor::Get(1));
    }
};

#endif