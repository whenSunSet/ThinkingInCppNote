//
// Created by 何时夕 on 2018/1/22.
//
#include <iostream>
#include <fstream>
#include <string>
#include "E_TStack2.h"
using namespace std;

int main() {
    ifstream file("test");
    Stack<string> textline;
    string line;
    while (getline(file , line)) {
        textline.push(new string(line));
    }
    int i = 0;
    Stack<string>::iterator it = textline.begin();
    Stack<string>::iterator* it2 = 0;
    while (it != textline.end()) {
        cout << it->c_str() << endl;
        it++;
        if(++i == 10) {
            it2 = new Stack<string>::iterator(it);
        }
    }
    cout << (*it2)->c_str() << endl;
}

