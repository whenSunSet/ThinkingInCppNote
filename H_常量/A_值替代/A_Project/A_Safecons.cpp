//
// Created by 何时夕 on 2017/12/15.
//
#include <iostream>
#include "A_Test.h"
using namespace std;

// i是一个编译期间就已经确定的值
const int i = 100;
// j是一个 一个常量表达式 所有也是在 编译期间确定
const int j = i + 10;
long address = (long)&j;
char buf[j + 10];

extern int a();

int main() {
    a();
    cout << "test: " << test << endl;
    cout << "test: " << test << endl;
    cout << "type a character & CR:";
    const char c = cin.get();
    const char c2 = c + 'a';
    cout << c2;
}

/**
 * 1.const 默认是 内连接 所以多个编译单元之间 定义相同的 const变量不会有冲突
 * 2.使用const 代替 #define 可以将其放在 头文件中，此时只有在引用了 头文件的地方才有这个常量。
 * 3.当定义一个const 的时候必须给其赋值，当然声明的时候不用
 * 4.不能使用 extern 将const 声明成外部连接。
 */

