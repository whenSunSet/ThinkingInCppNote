//
// Created by 何时夕 on 2017/12/11.
//
#include <iostream>
#include <cassert>
#include <fstream>
#include <string>
#include "A_CLib.h"
using namespace std;

int main() {
    CStash intStash , stringStash;
    int i;
    char* cp;
    ifstream in;
    string line;
    const int bufsize = 80;
    initialize(&intStash , sizeof(int));
    for (int j = 0; j < 100; ++j) {
        add(&intStash , &j);
    }

    for (int k = 0; k < count(&intStash); ++k) {
        cout << "fetch(&intStash), " << k << ") = " << *(int*)fetch(&intStash , k) << endl;
    }

    initialize(&stringStash , sizeof(char) * bufsize);
    in.open("B_CLibTest.cpp");
    assert(in);
    while(getline(in , line)) {
        add(&stringStash , line.c_str());
    }
    i = 0;
    while((cp = (char*)fetch(&stringStash , i++)) != 0) {
        cout << "fetch(&stringStash), " << i << ") = " << cp << endl;
    }
    cleanup(&intStash);
    cleanup(&stringStash);

    /**
     * 由这个简单的c库 我们可以了解到c中所存在的问题
     * 1.CLib.h文件必须包含在所有 调用 CStash的地方，但是CLib.h中又没有真正的函数。
     * 2.每个独立的c文件是一个 编译器的 翻译单元，所以声明就代表着 本文件对其他文件的理解
     * 如果头文件中有一个声明是 void func(float) 那么编译器就知道当 func(int)
     * 的时候应该把int提升为 float。但是如果头文件没有定义，那么编译器就会假设一个 func(int)
     * 并且不做提升，这样就将一个错误数据传给了 func().
     * 3.观察调用我们可以发现，库中的每个函数都必须传入 CStash的指针，这样是十分笨重的。
     * 4.函数名字冲突，比如两个库都觉得 initialize 这个名字好就都给库的初始化函数取这个名字，
     * 那么就会出现函数名冲突，解决办法是在函数名前面加上前缀。
     */
}


