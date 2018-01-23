//
// Created by 何时夕 on 2018/1/22.
//
#include "../A_容器/B_fibonacci.h"
#include "C_IterStackTemplate.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
    StackTemplate<int> is;
    for (int i = 0; i < 20; ++i) {
        is.push(fibonacci(i));
    }
    cout << "Traverse the whole StackTemplate\n";

    StackTemplate<int>::iterator it = is.begin();
    while (it != is.end()) {
        cout << it++ << endl;
    }
    cout << "Traverse a position\n";
    StackTemplate<int>::iterator start = is.begin() , end = is.begin();
    start += 5 , end += 15;
    cout << "start = " << start << endl;
    cout << "end = " << end << endl;
    while(start != end) {
        cout << start++ << endl;
    }

    ifstream in("D_IterStackTemplateTest.cpp");
    string line;
    StackTemplate<string> strings;
    StackTemplate<string>::iterator sb = strings.begin() , se = strings.end();
    while (sb != se) {
        cout << sb++ << endl;
    }
}





