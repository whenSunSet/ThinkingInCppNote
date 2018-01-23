//
// Created by 何时夕 on 2017/12/14.
//
#include <iostream>
#include <cassert>
#include "A_Stash3.h"
using namespace std;
const int increment = 100;

Stash::Stash(int size) {
    this->size = size;
    quantity = 0;
    next = 0;
    storage = 0;
}

Stash::Stash(int size, int initQuantity) {
    this->size = size;
    quantity = 0;
    next = 0;
    storage = 0;
    inflate(initQuantity);
}

int Stash::add(const void* element) {
    if(next >= quantity){
        inflate(increment);
    }
    int startBytes = next * size;
    unsigned char* e = static_cast<unsigned char*>(const_cast<void*>(element));
    for (int i = 0; i < size; ++i) {
        storage[startBytes + i] = e[i];
    }
    next++;
    return (next - 1);
}

void* Stash::fetch(int index) {
    assert(0 <= index);
    if(index >= next) {
        return 0;
    }

    return &(storage[index * size]);
}

int Stash::count() {
    return next;
}

void Stash::inflate(int increase) {
    assert(increase > 0);
    int newQuantity = quantity + increase;
    int newBytes = newQuantity * size;
    int oldBytes = quantity * size;
    unsigned char* b = new unsigned char[newBytes];
    for (int i = 0; i < oldBytes; ++i) {
        b[i] = storage[i];
    }
    delete []storage;
    storage = b;
    quantity = newQuantity;
}

Stash::~Stash() {
    if(storage != 0){
        cout << "freeing storage" << endl;
        delete []storage;
    }
}

