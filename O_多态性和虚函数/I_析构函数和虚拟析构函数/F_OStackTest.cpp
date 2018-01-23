//
// Created by 何时夕 on 2018/1/9.
//
#include "E_OStack.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class MyString : public string , public Object {
public:
    ~MyString() {
        cout << "deleting string: " << *this << endl;
    }
    MyString(string s) : string(s) {}
};

int main(int argc , char* argv[]) {
    ifstream in(argv[1]);
    Stack textlines;
    string line;
    while (getline(in , line)) {
        textlines.push(new MyString(line));
    }
    MyString *s;

    for (int i = 0; i < 10; ++i) {
        if((s = (MyString*)textlines.pop()) == 0) {
            break;
        }
        cout << *s << endl;
        delete s;
    }
    cout << "Letting the destructor do the rest:";
}

