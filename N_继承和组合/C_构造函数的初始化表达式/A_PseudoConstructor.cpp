//
// Created by 何时夕 on 2018/1/6.
//

class A {
    int i;
public:
    A(int ii = 0) : i(ii) {

    }
};

class B {
    int i;
public:
    B(int ii = 0) : i(ii) {

    }
};

class X : public A{
    int i;
    float f;
    char c;
    char  *s;
    B b;
public:
    X() : A(1) , b(1) , i(7) , f(1.4) , c('x') , s("ssss") {}
};

int main() {
    X x;
    int i(100);
    int *ip = new int(47);
}
/**
 * 以下三种东西可以在 构造函数前初始化
 * 1.成员对象
 * 2.基类对象
 * 3.内置数据结构
 */

