//
// Created by 何时夕 on 2018/1/9.
//
#include <fstream>
#include <iostream>
#include <string>
#include "A_TStash.h"
using namespace std;

class X {
public:
    virtual ~X() {
        cout << "~X" << endl;
    }
};

int main(int argc , char* argv[]) {
    ifstream in(argc[1]);
    Stack<string> textlines;
    string line;
    while (getline(in , line)) {
        textlines.push(new string(line));
    }
    string *s;
    for (int i = 0; i < 10; ++i) {
        if((s = (string*)textlines.pop()) == 0) {
            break;
        }
        cout << *s << endl;
        delete(s);
    }
    Stack<X> xx;
    for (int j = 0; j < 10; ++j) {
        xx.push(new X);
    }
}

