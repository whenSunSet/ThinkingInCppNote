//
// Created by 何时夕 on 2017/12/9.
//
#include <iostream>
using namespace std;

void f(int& r){
    cout << "r = " << r <<endl;
    cout << "&r = " << &r << endl;
    r = 5;
    cout << "r = " << r << endl;
}

int main() {
    int x = 47;
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    f(x);
    cout << "x = " << x << endl;

    /**
     * x = 47
     * &x = 0x7ffee04986bc
     * r = 47
     * &r = 0x7ffee04986bc
     * r = 5
     * x = 5
     * 和值传递比较一下可以发现：
     * 值传递的 函数参数 和 传入参数 的地址是不同的
     * 而这里的 引用传递 函数参数 和 传入参数 的地址是相同的
     * 那么我就可以直接修改 函数参数 来影响 传入参数 了
     * 相当于 c++ 将 指针的值传递 简化成了一个语法糖
     * 只要在函数定义的时候加一个 & 就能用 值传递的写法 实现 指针的值传递
     */
}

