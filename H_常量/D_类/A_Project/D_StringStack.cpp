//
// Created by 何时夕 on 2017/12/18.
//
#include <string>
#include <iostream>
using namespace std;

/**
 * static const 类似 java 中的 static final
 */
class StringStack {
    static const int size = 100;
    const string *stack[size];
    int index;
public:
    StringStack();
    void push(const string *s);
    const string* pop();
};

StringStack::StringStack() : index(0) {
}

void StringStack::push(const string *s) {
    if(index < size){
        stack[index++] = s;
    }
}

const string* StringStack::pop() {
    if(index > 0) {
        const string *rv = stack[--index];
        stack[index] = 0;
        return rv;
    }
    return 0;
}

string iceCream[] = {
        "A iceCream",
        "B iceCream",
        "C iceCream",
        "D iceCream",
        "E iceCream",
        "F iceCream",
        "G iceCream",
        "H iceCream",
};

const int iCsz = sizeof iceCream / sizeof *iceCream;

int main() {
    StringStack ss;
    for (int i = 0; i < iCsz; ++i) {
        ss.push(&iceCream[i]);
    }
    const string *cp;
    while ((cp = ss.pop()) != 0) {
        cout << *cp << endl;
    }
}
