//
// Created by 何时夕 on 2018/1/22.
//

#include "A_ValueStack.h"
#include "B_SelfCounter.h"
#include <iostream>
using namespace std;
int main() {
    Stack<SelfCounter> sc;
    for (int i = 0; i < 10; ++i) {
        sc.push(SelfCounter());
    }
    cout << sc.peek() << endl;
    for (int j = 0; j < 10; ++j) {
        cout << sc.pop() << endl;
    }
}