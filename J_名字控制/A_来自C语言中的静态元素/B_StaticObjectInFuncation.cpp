//
// Created by 何时夕 on 2017/12/31.
//
#include <iostream>
using namespace std;

class X {
    int i;
public:
    X(int ii = 0) : i(ii) {}
    ~X() { cout << "X::~X()" << endl; }
};
void f() {
    static X x1(47);
    static X x2;// 局部static对象 需要有构造函数进行初始化，默认 或者 自定义 构造函数 都行
}

int main() {
    f();
}
