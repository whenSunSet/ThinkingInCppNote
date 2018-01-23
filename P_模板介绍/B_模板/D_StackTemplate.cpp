//
// Created by 何时夕 on 2018/1/9.
//
#include "../A_容器/B_fibonacci.h"
#include "C_StackTemplate.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    StackTemplate<int> is;
    for (int i = 0; i < 20; ++i) {
        is.push(fibonacci(i));
    }
    for (int j = 0; j < 20; ++j) {
        cout << is.pop() << endl;
    }
    ifstream in("D_StackTemplate.cpp");
    string line;
    StackTemplate<string> strings;
    while (getline(in , line)) {
        strings.push(line);
    }
    while (strings.siez() > 0) {
        cout << strings.pop() << endl;
    }
}

