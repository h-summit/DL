
## 深度学习框架

这是一个用来锻炼面向对象思维和数值算法能力的深度学习框架. 

## 依赖

+ 软件
  + cmake
  + cublas
+ 硬件
  + Nvidia GPU

## 结构

## 运行

```
mkdir build
cd build
cmake ..
make
./sample
```

## 如何定义新的算子到框架中

新的算子作为一个类存在于程序中, 需要实现根据参数,计算值,计算偏导等等. 例:include/operators/multiply.h

如果使用已存在的算子定义一个函数, 那么则不需要计算偏导. 例:include/functions/minus.h

值得注意的是, 使用基本算子进行运算, 速度上会差一些. 比如Sigmoid函数, 可以使用基本的算子实现, 
求导的时候, 使用计算图自动求导. 但是根据Sigmoid的导数和原函数满足特定关系, 如果不使用基本算子
实现Sigmoid函数, 就能应用这个关系, 使求导更简便.


