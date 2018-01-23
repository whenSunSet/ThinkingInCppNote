//
// Created by 何时夕 on 2018/1/9.
//
#include <iostream>
#include "B_fibonacci.h"
using namespace std;

class IntStack {
    enum {
        ssize = 100
    };
    int stack[ssize];
    int top;
public:
    IntStack() : top(0) {}
    void push(int i) {
        stack[top++] = i;
    }
    int pop() {
        return stack[--top];
    }
};

int main() {
    IntStack is;
    for (int i = 0; i < 20; ++i) {
        is.push(fibonacci(i));
    }
    for (int j = 0; j < 20; ++j) {
        cout << is.pop() << endl;
    }
}
