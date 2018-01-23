//
// Created by 何时夕 on 2017/12/9.
//
#include <iostream>
using namespace std;

void f(int* p){
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    *p = 5;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
}

int main() {
    int x = 47;
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    f(&x);
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    /**
     * x = 47
     * &x = 0x7ffeecda06bc
     * p = 0x7ffeecda06bc
     * *p = 47
     * p = 0x7ffeecda06bc
     * *p = 5
     * x = 5
     * &x = 0x7ffeecda06bc
     *
     * 可见指针可以在函数内部，修改 传入参数的数值。
     */
}

