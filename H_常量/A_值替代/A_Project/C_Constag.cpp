//
// Created by 何时夕 on 2017/12/15.
//
#include <iostream>
using namespace std;
const int i[] = {1 , 2 , 3 , 4};
//float f[i[3]];

struct S {
    int i , j;
};

const S s[] = {{1 , 2} , {3 , 4}};
//double d[s[1].i];


const int a = 1;
int j[a];

int b = 1;
//int i[b];

/**
 * 1.全局数组 的大小在编译期间确定，所以不可用变量定义
 * 2.const 数组成员 在编译期未知，所以也不可用const 数组成员定义 全局数组
 * 3.const 变量 在编译期确定，所以可以用来定义数组
 * 4.局部数组 似乎不遵守 全局数组的规则，但是写代码的时候还是尽量遵守
 * 5.c++ 没有像 java 那种数组访问越界的错误，不会对 数组进行越界检查，这里得小心
 */

int main() {

}