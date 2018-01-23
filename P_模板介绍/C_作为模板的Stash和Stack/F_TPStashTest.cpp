//
// Created by 何时夕 on 2018/1/9.
//
#include <iostream>
#include <fstream>
#include "E_AutoCounter.h"
#include "C_TPStash.h"
using namespace std;

int main() {
    PStash<AutoCounter> acStash;
    for (int i = 0; i < 10; ++i) {
        acStash.add(AutoCounter::create());
    }
    cout << "Removing 5 manually:" << endl;
    for (int j = 0; j < 5 ; ++j) {
        delete acStash.remove(j);
    }
    cout << "Remove two the cleanup error message";
    cout << acStash.remove(5) << endl;
    cout << acStash.remove(6) << endl;
    cout << "The destructor cleans up the rest:" << endl;
    ifstream in("F_TPStashTest.cpp");
    PStash<string> stringStash;
    stirng line;
    while (getline(in , line)) {
        stringStash.add(new string(line));
    }
    for (int k = 0; k < stringStash[k]; ++k) {
        cout << "stringStash[" << u << "] = " << *stringStash[u] << endl;
    }
}

