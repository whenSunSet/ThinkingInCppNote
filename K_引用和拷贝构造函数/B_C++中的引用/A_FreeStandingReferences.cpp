//
// Created by 何时夕 on 2018/1/1.
//
#include <iostream??>
using namespace std;

int y;
int &r = y;

const int &q = 12;
int x = 0;
int &a = x;
int main() {
    cout << "x = " << x << ", a = " << a << endl;
    a++;
    cout << "x = " << x << ", a = " << a << endl;
}

/**
 * 1.引用在被创建的时候就 必须被初始化 指针则可以在任何时候初始化
 * 2.引用的指向不能改变对象 指针可以
 * 3.不可能有NULL 引用
 */

