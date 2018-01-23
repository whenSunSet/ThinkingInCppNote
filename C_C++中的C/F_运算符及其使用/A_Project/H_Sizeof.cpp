//
// Created by 何时夕 on 2017/12/10.
//
#include <iostream>
using namespace std;

int main(){
    cout << "sizeof(double) = " << sizeof(double) << endl;

    cout << "sizeof(char) = " << sizeof(char) << endl;
    cout << "sizeof(unsigned char) = " << sizeof(unsigned char) << endl;

    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(unsigned int) = " << sizeof(unsigned int) << endl;

    cout << "sizeof(long) = " << sizeof(long) << endl;
    cout << "sizeof(unsigned long) = " << sizeof(unsigned long) << endl;
    cout << "sizeof(unsigned long int) = " << sizeof(unsigned long int) << endl;

    cout << "sizeof(unsigned long int) = " << sizeof(unsigned long int) << endl;

    int x;
    int i = sizeof(x);
    cout << "sizeof(x) = " << i << endl;
    i = sizeof x;
    cout << "sizeof x = " << i << endl;

    /**
     * 1.sizeof 是一个运算符 不是函数
     * 2.对应 类型来说 需要 这样 sizeof()
     * 3.对应 变量来说 两种都行 sizeof() sizeof x
     */
}

