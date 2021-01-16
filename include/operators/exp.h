
#ifndef EXP_H
#define EXP_H

#include <cmath>

#include "../operator.h"
#include "../tensor.h"
#include "../graph.h"

/*
    f(x) = e^x
*/

struct Exp : public Operator
{
    static Tensor::Ptr op(const Tensor::Ptr &x)
    {
        Operator::Ptr oprator_ = std::make_shared<Exp> (x);
        Graph::graph.add(oprator_, oprator_->res);
        return oprator_->res;
    }

    Exp(const Tensor::Ptr &x)
    {
        this->paramters.push_back(x);
        calculate();
    }

    void calculate() override
    {
        const float x = this->paramters[0]->data;
        const float y = this->paramters[1]->data;

        // result data
        res->data = std::pow(std::, y);

        // diffirential data
        diffirentials.push_back(Tensor::Get( std::pow(x, y - 1) * y ));
        diffirentials.push_back(Tensor::Get( res->data * std::log(x) ));
    }
};

#endif