//
// Created by 何时夕 on 2017/12/31.
//

#ifndef THINKING_IN_C_A_DEPENDENCY1_H
#define THINKING_IN_C_A_DEPENDENCY1_H

#include <iostream>
using namespace std;
class Dependency1 {
    bool init;
public:
    Dependency1() : init(true) {
        cout << "Dependency1 construction: " << endl;
    }

    void print() const {
        cout << "Dependency1 init: " << init << endl;
    }
};

#endif //THINKING_IN_C_A_DEPENDENCY1_H
