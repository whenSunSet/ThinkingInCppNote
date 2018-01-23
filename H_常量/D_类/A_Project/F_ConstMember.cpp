//
// Created by 何时夕 on 2017/12/18.
//
class X {
    int i;
public:
    X(int ii);
    int f() const;
};

X::X(int ii) : i(ii) {}
int X::f() const { return i;}

int main() {
    X x1(10);
    const X x2(20);
    x1.f();
    x2.f();
}

/**
 * 1.定义 const 成员函数的方式
 * 2.不仅在定义的时候要 加 const 实现的时候也要加const，如果不加 编译器会识别成两个不同的函数
 */
