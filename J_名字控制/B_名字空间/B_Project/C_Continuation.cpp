//
// Created by 何时夕 on 2017/12/31.
//
#include "B_Header2.h"
#include <iostream>
using namespace std;
using namespace MyLib;

void MyLib::g() {
    cout << "g() "
         << "y = " << y << endl;
}
void MyLib::f() {
    cout << "f() "
         << "x = " << x << endl;
}

int main() {
    g();
    f();
    cout << "main() " << " y = " << y << endl;
    cout << "main() " << " x = " << x << endl;
}

