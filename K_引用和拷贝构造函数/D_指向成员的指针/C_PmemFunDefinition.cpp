//
// Created by 何时夕 on 2018/1/2.
//
#include <iostream>
using namespace std;
class Simple2 {
public:
    int f(float f) const {
        return 1;
    }
};

int (Simple2::*fp)(float) const;
int (Simple2::*fp2)(float) const = &Simple2::f;

int main() {
    fp = &Simple2::f;
    Simple2 simple2;

    cout << "simple2.*fp(1.1): " << (simple2.*fp)(1.1) << endl;
}

/**
 * 比起普通的函数指针多了以下几点:
 * 1.需要在定义 函数指针名前面加上  类的命名空间
 * 2.在赋值的时候 &不是可选的  并且要在对应的函数名前面加上 类的命名空间
 * 3.在调用的时候 需要使用具体的类来调用这个 函数指针 指向的成员函数
 */

