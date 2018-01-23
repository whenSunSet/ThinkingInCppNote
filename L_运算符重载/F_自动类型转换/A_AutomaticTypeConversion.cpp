//
// Created by 何时夕 on 2018/1/4.
//
class One {
public:
    One() {}
};

class Two {
public:
    Two(const One&) {}
};

void f(Two) {}

int main() {
    One one;
    //编译器会隐式调用Two的构造函数来初始化一个Two
    f(one);
}
/**
 * 自动类型转换有两种方式
 * 1.A 有 传入B的构造函数 那么 B可以被编译器自动类型转换成A，
 * 2.重载的运算符
 */
