
#ifndef NEGATIVE_H
#define NEGATIVE_H

#include <cmath>

#include "../operator.h"
#include "../tensor.h"
#include "../graph.h"

/*
    f(x) = -x
*/


struct Negative : public Operator
{
    static Tensor::Ptr op(const Tensor::Ptr &x)
    {
        Operator::Ptr oprator_ = std::make_shared<Negative> (x);
        Graph::graph.add(oprator_, oprator_->res);
        return oprator_->res;
    }

    Negative(const Tensor::Ptr &x)
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
        diffirentials.push_back(Tensor::Get(-1));
    }
};

#endif