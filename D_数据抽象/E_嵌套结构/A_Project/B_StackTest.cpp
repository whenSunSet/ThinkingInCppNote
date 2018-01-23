//
// Created by 何时夕 on 2017/12/11.
//
#include <iostream>
#include <fstream>
#include <string>
#include "A_Stack.h"
#include <assert.h>
using namespace std;

int main(int argc , char* argv[]) {
    ifstream in(argv[1]);
    assert(in);

    Stack textLine;

    textLine.initailize();
    string line;
    while(getline(in , line)) {
        textLine.push(new string(line));
    }
    string* s;

    while ((s = (string*)textLine.pop()) != 0) {
        cout << *s << endl;
        delete s;
    }
    textLine.cleanup();
}

