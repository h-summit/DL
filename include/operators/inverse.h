
#ifndef INVERSE_H
#define INVERSE_H

#include <cmath>

#include "../operator.h"
#include "../tensor.h"
#include "../graph.h"

/*
    f(x) = 1 / x
*/

struct Inverse : public Operator
{
    static Tensor::Ptr op(const Tensor::Ptr &x)
    {
        Operator::Ptr oprator_ = std::make_shared<Inverse> (x);
        Graph::graph.add(oprator_, oprator_->res);
        return oprator_->res;
    }

    Inverse(const Tensor::Ptr &x)
    {
        this->paramters.push_back(x);
        calculate();
    }

    void calculate() override
    {
        const float x = this->paramters[0]->data;

        // result data
        res->data = static_cast<float> (1) / x;

        // diffirential data
        diffirentials.push_back(Tensor::Get(
            static_cast<float> (-1) * res->data / x
        ));
    }
};

#endif