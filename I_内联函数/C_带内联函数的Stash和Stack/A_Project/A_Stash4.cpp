//
// Created by 何时夕 on 2017/12/24.
//
#include <iostream>
#include <cassert>
#include "A_Stash4.h"
using namespace std;
const int increment = 100;


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
