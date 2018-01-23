//
// Created by 何时夕 on 2017/12/15.
//
#include "A_Mem.h"
#include <cstring>
using namespace std;

Mem::Mem() {
    mem = 0;
    size = 0;
}

Mem::Mem(int sz) {
    size = sz;
    mem = 0;
    ensureMinSize(sz);
}

Mem::~Mem() {
    delete []mem;
}

int Mem::msize() {
    return size;
}

void Mem::ensureMinSize(int minSize) {
    if(size < minSize) {
        byte* newMem = new byte[minSize];
        memset(newMem + size , 0 , minSize - size);
        memcpy(newMem , mem , size);
        delete []mem;
        mem = newMem;
        size = minSize;
    }
}

byte* Mem::pointer() {
    return mem;
}

byte* Mem::pointer(int minSize) {
    ensureMinSize(minSize);
    return mem;
}