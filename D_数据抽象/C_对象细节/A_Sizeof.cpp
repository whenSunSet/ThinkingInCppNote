//
// Created by 何时夕 on 2017/12/11.
//
#include <iostream>
#include <cassert>
#include "../B_基本对象/A_Project/A_CppLib.h"
#include "../A_一个袖珍C库/A_Project/A_CLib.h"
using namespace std;

struct A {
    int i[100];
};

struct B {
    void f();
};

void B::f() {

}

int main() {
    cout << "sizeof struct A = " << sizeof(A) << "bytes" << endl;
    cout << "sizeof struct B = " << sizeof(B) << "bytes" << endl;
    cout << "sizeof CStash in C = " << sizeof(CStash) << "bytes" << endl;
    cout << "sizeof Stash in C++ = " << sizeof(Stash) << "bytes" << endl;
}

/**
 * 1.C++ 产生的struct 大小 和C 是一样大的。
 * 2.B 是 1byte 但是并不是 f() 函数的大小，只是不允许出现 0byte 的struct
 */


