//
// Created by 何时夕 on 2018/1/5.
//
#include "A_PStash.h"
#include <iostream>
#include <cstring>
using namespace std;
int PStash::add(void *element) {
    const int inflateSIze = 10;
    if(next >= quantity) {
        inflate(inflateSIze);
    }
    storage[next++] = element;
    return (next - 1);
}

PStash::~PStash() {
    for (int i = 0; i < next; ++i) {
        // 循环判断内部的指针的内存是否被detele了，如果没有就不能 delete数组  被delete的指针  == 0
    }
    delete []storage;
}

void* PStash::operator[](int index) const {
    if(index >= next) {
        return 0;
    }
    return storage[index];
}

void* PStash::remove(int index) {
    void *v = operator[](index);
    if(v != 0) {
        storage[index] = 0;
        return storage[index];
    }
}

void PStash::inflate(int increase) {
    const int psz = sizeof(void*);
    void **st = new void*[quantity + increase];
    memset(st , 0 , (quantity + increase) * psz);
    memcpy(st , storage , quantity * psz);
    quantity += increase;
    delete []storage;
    storage = st;
}

