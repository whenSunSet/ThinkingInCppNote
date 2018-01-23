//
// Created by 何时夕 on 2017/12/9.
//
#include <iostream>
using namespace std;

// 这是一个全局变量  可以在任意文件中使用，但是需要在要用的文件中进行 声明
int globe;
extern void func();

int main() {
    globe = 12;

    cout << globe << endl;
    func();
    cout << globe << endl;

    register int a = 1;
    /**
     * 1.关键字register 修饰局部变量
     * 2.关键字告诉 编译器尽快访问这个变量 ，但是还是取决于实现，并不能保证该变量一定放在寄存器中
     * 3.register是有限制的，不能计算出register变量的地址，不能有全局或者静态的register变量。
     * 4.一般不使用register
     */
}

