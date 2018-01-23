//
// Created by 何时夕 on 2018/1/22.
//
#include "../A_容器/B_fibonacci.h"
#include <iostream>
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
    friend class IntStackIter;
};

class IntStackIter {
    IntStack &s;
    int index;
public:
    IntStackIter(IntStack &is) : s(is) , index(0) {}
    int operator++() {
        return s.stack[++index];
    }
    int operator++(int) {
        return s.stack[index++];
    }
};

int main() {
    IntStack is;
    for (int i = 0; i < 20; ++i) {
        is.push(fibonacci(i));
    }
    IntStackIter it(is);
    for (int j = 0; j < 20; ++j) {
        cout << it++ << endl;
    }
}

