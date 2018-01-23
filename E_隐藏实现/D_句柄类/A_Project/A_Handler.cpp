//
// Created by 何时夕 on 2017/12/13.
//
#include "A_Hanlder.h"

struct Cheshire {
    int i;
};

void Handler::initialize() {
    smile = new Cheshire;
    smile->i = 0;
}

void Handler::cleanup() {
    delete smile;
}

int Handler::read() {
    return smile->i;
}

void Handler::change(int x) {
    smile->i = x;
}



