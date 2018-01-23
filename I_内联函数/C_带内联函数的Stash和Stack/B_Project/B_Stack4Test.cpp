//
// Created by 何时夕 on 2017/12/24.
//
#include <iostream>
#include <fstream>
#include <cassert>
#include <string>
#include "A_Stack4.h"
using namespace std;

int main(int argc , char* argv[]) {
    ifstream in(argv[1]);
    Stack textLines;
    string line;
    while (getline(in, line)) {
        textLines.push(new string(line));
    }

    string* s;
    while ((s = (string*)textLines.pop()) != 0){
        cout << *s << endl;
        delete s;
    }
}




