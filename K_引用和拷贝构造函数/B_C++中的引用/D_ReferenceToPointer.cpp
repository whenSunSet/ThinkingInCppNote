//
// Created by 何时夕 on 2018/1/1.
//
#include <iostream>
using namespace std;

void increment(int *&i) {
    i++;
}

int main() {
    int *i = 0;
    cout << "i = " << i << endl;
    increment(i);
    cout << "i = " << i << endl;
}
/**
 * 1.c中如果需要在函数中修改 指针那么 需要把参数这样定义  int **
 * 2.c++中则可以将  参数定义成 指针的引用  int &*
 * 3.c++中方便的地方在于  在调用函数的时候  少了一层地址指向
 * 4.一般情况下人们习惯 使用 常量引用来传递 参数 这样比起值传递 效率高了 因为不需要调用 构造和析构函数
 * 5.只有一种情况下不适合 地址传递  那就是调用者不希望改变外部对象的时候
 */
