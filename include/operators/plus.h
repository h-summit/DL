

#ifndef PLUS_H
#define PLUS_H

#include <cmath>

#include "../operator.h"
#include "../tensor.h"
#include "../graph.h"

/*
    f(x, y) = x + y
*/


struct Plus : public Operator
{
    static Tensor::Ptr op(const Tensor::Ptr &x, const Tensor::Ptr &y)
    {
        Operator::Ptr oprator_ = std::make_shared<Plus> (x, y);
        Graph::graph.add(oprator_, oprator_->res);
        return oprator_->res;
    }

    Plus(const Tensor::Ptr &x, const Tensor::Ptr &y)
    {
        this->paramters.push_back(x);
        this->paramters.push_back(y);
        calculate();
    }

    void calculate() override
    {
        const float x = this->paramters[0]->data;
        const float y = this->paramters[1]->data;

        // result data
        res->data = x + y;

        // diffirential data
        diffirentials.push_back(Tensor::Get(1));
        diffirentials.push_back(Tensor::Get(1));
    }
};

#endif