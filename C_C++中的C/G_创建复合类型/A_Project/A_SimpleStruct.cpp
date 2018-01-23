//
// Created by 何时夕 on 2017/12/10.
//
#include <iostream>
using namespace std;

// typedef  可以将一连串 的符号用简单的来代替。在定义 struct的时候特别有用。
typedef unsigned long ulong;

struct Structure1{
    char c;
    int i;
    float f;
    double d;
};

int main() {
    struct Structure1 s1 , s2;
    s1.c = 'A';
    s1.i = 1;
    s1.f = 1.1f;
    s1.d = 1.1;

    s2.c = 'A';
    s2.i = 1;
    s2.f = 1.1f;
    s2.d = 1.1;

    ulong a = static_cast<ulong>(-1);
    cout << "ulong a = " << a << endl;
}

