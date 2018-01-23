//
// Created by 何时夕 on 2017/12/31.
//
class X {
    static void f() {};
};

int main() {
    X::f();
}

/**
 * 1.静态函数可以内联
 * 2.静态函数只能访问静态成员
 */

