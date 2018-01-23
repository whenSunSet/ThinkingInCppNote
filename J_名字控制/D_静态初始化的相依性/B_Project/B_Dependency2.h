//
// Created by 何时夕 on 2017/12/31.
//

#ifndef THINKING_IN_C_B_DEPENDENCY2_H
#define THINKING_IN_C_B_DEPENDENCY2_H

#include "A_Dependency1.h"

class Dependency2 {
    Dependency1 d1;
public:
    Dependency2(const Dependency1 &dep1) : d1(dep1) {
        cout << "Dependency2 construction ";
        print();
    }
    void print() const {
        d1.print();
    }
};

#endif //THINKING_IN_C_B_DEPENDENCY2_H
