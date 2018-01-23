//
// Created by 何时夕 on 2018/1/5.
//
#include "A_PStash.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    PStash intPStash;
    for (int i = 0; i < 25; ++i) {
        intPStash.add(new int(i));
    }
    for (int j = 0; j < 25; ++j) {
        cout << "intPStash[" << j << "] = " << *(int*)intPStash[j] << endl;
    }

    for (int k = 0; k < intPStash.count(); ++k) {
        delete intPStash.remove(k);
    }

    ifstream in("/Users/whensunset/CLionProjects/Thinking In c++/F_初始化与清理/D_带有构造函数和析构函数的Stash/B_Stash2Test.cpp");
    PStash stringPStash;
    string line;
    while (getline(in , line)) {
        stringPStash.add(new string(line));
    }
    for (int l = 0; stringPStash[l]; ++l) {
        cout << "stringStash[" << l << "] = " << *(string*)stringPStash[l] << endl;
    }
    for (int m = 0; m < stringPStash.count(); ++m) {
        delete (string*)stringPStash.remove(m);
    }
}

