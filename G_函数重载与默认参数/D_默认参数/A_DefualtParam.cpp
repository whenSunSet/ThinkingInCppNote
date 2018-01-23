//
// Created by 何时夕 on 2017/12/14.
//
#include <iostream>
using namespace std;

class A {
public:
    int a;
    int b;
    A(int a);
    A(int a , int b);
};

class B {
public:
    int a;
    int b;
    B(int a , int b = 2);
};

A::A(int a) {
    this->a = a;
}

A::A(int a , int b) {
    this->a = a;
    this->b = b;
}

B::B(int a, int b) {
    this->a = a;
    this->b = b;
}

int main() {
    A a1(1) , a2(1 , 2);
    B b1(1) , b2(1 , 2);

    cout << "A: a1 a:" << a1.a << " b:" << a1.b << endl;
    cout << "A: a2 a:" << a2.a << " b:" << a2.b << endl;

    cout << "B: b1 a:" << b1.a << " b:" << b1.b << endl;
    cout << "B: b2 a:" << b2.a << " b:" << b2.b << endl;

    /**
     * 1.函数参数是可以在被提供默认值的
     * 2.参数列表后面的参数数才能使用默认值
     * 3.一旦参数使用默认值 该参数后面的参数都要是提供默认值
     * 4.默认参数只能放在函数声明中，一般可以放在头文件中
     */
}

