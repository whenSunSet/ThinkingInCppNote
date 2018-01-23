//
// Created by 何时夕 on 2017/12/31.
//

#ifndef THINKING_IN_C_A_INITIALIZER_H
#define THINKING_IN_C_A_INITIALIZER_H

#include <iostream>
extern int x;
extern int y;
using namespace std;
class Initializer {
    static int initCount;
public:
    Initializer() {
        cout << "Initializer()" << endl;

        if(initCount++ == 0) {
            cout << "performing initialization" << endl;
            x = 100;
            y = 200;
        }
    }
    ~Initializer() {
        cout << "~Initializer()" << endl;
        if(--initCount == 0) {
            cout << "performing cleanup" << endl;
        }
    }
};

static Initializer init;
#endif //THINKING_IN_C_A_INITIALIZER_H
