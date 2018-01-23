//
// Created by 何时夕 on 2017/12/10.
//
#include <iostream>
using namespace std;

void func() {
    cout << "func() called...." << endl;
}

int main() {
    void (*fp)();
    fp = func;
    (*fp)();

    void (*fp2)() = func;
    (*fp2)();
}

