//
// Created by 何时夕 on 2017/12/9.
//
#include <iostream>
using namespace std;

void f(int a){
    cout << "a = " << a <<endl;
    cout << "&a = " << &a <<endl;
    a = 5;
    cout << "&a = " << &a <<endl;
    cout << "a = " << a <<endl;
}

int main() {
    int x = 47;
    cout << "x = " << x <<endl;
    cout << "&x = " << &x <<endl;
    f(x);
    cout << "&x = " << &x <<endl;
    cout << "x = " << x <<endl;
    /**
     * x = 47
     * &x = 0x7ffee09ab6bc
     * a = 47
     * &a = 0x7ffee09ab63c
     * &a = 0x7ffee09ab63c
     * a = 5
     * &x = 0x7ffee09ab6bc
     * x = 47
     * 可以看见 函数参数 和 传入参数 的地址是不同的。
     * 在向函数中传递参数的时候，函数中的参数只是传入参数的一个拷贝，
     * 函数参数再怎么变化 都不会影响到传入的参数
     */

}

