//
// Created by 何时夕 on 2017/12/31.
//
#include <iostream>
using namespace std;

class Outer {
    class Inner {
        static int i;
    };
};

int Outer::Inner::i = 47;


void f() {
    class Local {
    public:
//        static int i; 局部类型不能声明static变量 因为不能再 文件中定义i
    } x;
}

int main() {
    Outer x;
    f();
}
