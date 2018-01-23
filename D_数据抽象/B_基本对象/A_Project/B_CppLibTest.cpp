//
// Created by 何时夕 on 2017/12/11.
//
#include <iostream>
#include <cassert>
#include <fstream>
#include <string>
#include "A_CppLib.h"
using namespace std;

int main() {
    Stash intStash;
    intStash.initialize(sizeof(int));

    for (int i = 0; i < 100; ++i) {
        intStash.add(&i);
    }

    for (int k = 0; k < intStash.count(); ++k) {
        cout << "intStash.fetch(" << k << ") = " << *(int*)intStash.fetch(k) << endl;
    }

    Stash stringStash;
    const int bufsize = 80;
    stringStash.initialize(sizeof(char) * bufsize);
    ifstream in("B_CppLibTest.cpp");
    assert(in);
    string line;
    while(getline(in , line)) {
        stringStash.add(line.c_str());
    }

    int k = 0;
    char* cp;
    while((cp = (char*)stringStash.fetch(k++)) != 0) {
        cout << "stringStash.fetch(" << k << ") = " << cp << endl;
    }
    intStash.cleanup();
    stringStash.cleanup();
}