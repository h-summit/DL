#include <cstdio>

#include <tensor.h>
#include <graph.h>
#include <operators.h>

Graph Graph::graph = Graph();

int main()
{
    Tensor::Ptr x = Tensor::Get(1);
    Tensor::Ptr b = Tensor::Get(2);
    Tensor::Ptr p = Tensor::Get(3);
    Tensor::Ptr y1 = Tensor::Get(0);

    y1 = Multiply::op(x, Tensor::Get(10));
    y1 = Plus::op(y1, b);
    y1 = Minus::op(y1);
    y1 = Power::op(p, y1);
    // y1 = Multiply::op(y1, x);

    // std::cout << x.use_count() << "\n";
    // y2 = Sigma(y1);
    // y3 = y2 + x;
    // loss = Loss(y3);

    Graph::graph.backward(y1);

    printf("%f\n", x->gradient);
    printf("%f\n", b->gradient);
    // cout << x.gradient << endl;

    return 0;
}

