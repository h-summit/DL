
#ifndef GRAPH_H
#define GRAPH_H

#include <memory>
#include <map>
#include <deque>

#include "tensor.h"
#include "operator.h"


struct Graph
{
    static Graph graph;

    std::map<Tensor::Ptr, Operator::Ptr> mapping;

    Graph() {}
    ~Graph() {}

    void backward(Tensor::Ptr result)
    {
        std::deque<Tensor::Ptr> stack;
        stack.push_back(result);
        while (!stack.empty())
        {
            Tensor::Ptr current_tensor = stack.back();
            Operator::Ptr operator_ = mapping[current_tensor];
            stack.pop_back();

            const size_t num_paramters = operator_->paramters.size();
            for (size_t i = 0 ; i<num_paramters ; i++)
            {
                Tensor::Ptr param = operator_->paramters[i];
                const Tensor::Ptr diff = operator_->diffirentials[i];
                if (param->is_end_node)
                {
                    param->gradient += current_tensor->gradient * diff->data;
                }
                else
                {
                    param->gradient = current_tensor->gradient * diff->data;
                    stack.push_back(param);
                }
            }
        }
    }

    inline void add(Operator::Ptr _operator, Tensor::Ptr tensor)
    {
        mapping[tensor] = _operator;
    }

};

#endif