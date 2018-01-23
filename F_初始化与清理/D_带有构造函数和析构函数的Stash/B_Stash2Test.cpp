//
// Created by 何时夕 on 2017/12/13.
//
#include <fstream>
#include <iostream>
#include <string>
#include "A_Stash2.h"
#include <cassert>

using namespace std;

int main() {
    Stash intStash(sizeof(int));
    for (int i = 0; i < 100; ++i) {
        intStash.add(&i);
    }

    for (int j = 0; j < 100; ++j) {
        cout << "intStash.fetch(" << j << ") = " << *(int*)intStash.fetch(j) << endl;
    }

    const int bufsize = 80;
    Stash stringStash(sizeof(char) * bufsize);
    ifstream in("A_Stash2.cpp");
    string line;
    while (getline(in , line)) {
        stringStash.add((char*)line.c_str());
    }
    int k = 0;
    char* cp;

    while ((cp = (char*)stringStash.fetch(k++)) != 0) {
        cout << "stringStash.fetch(" << k << ") = " << cp << endl;
    }
}

