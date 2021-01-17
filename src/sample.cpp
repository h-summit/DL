#include <cstdio>
#include <tensor.h>
#include <graph.h>
#include <operators.h>
#include <functions.h>


// Graph Graph::graph = Graph::Get();
Graph Graph::graph = Graph();



Tensor::Ptr f_(Tensor::Ptr x)
{    
    return Multiply::op(
        Sigmoid::op(x), 
        Minus::op(Tensor::Get(1), Sigmoid::op(x))
    );
}

int main()
{
    Tensor::Ptr x = Tensor::Get(4);
    Tensor::Ptr y;
    Tensor::Ptr y_;
    y = Sigmoid::op(x);
    y_ = f_(x);

    // y1 = Multiply::op(y1, x);

    // std::cout << x.use_count() << "\n";
    // y2 = Sigma(y1);
    // y3 = y2 + x;
    // loss = Loss(y3);

    Graph::graph.backward(y);

    // FloatTensor<1, 3, 228, 228>::Ptr ;

    printf("%f\n", x->gradient);
    printf("%f\n", y_->data);

    return 0;
}

