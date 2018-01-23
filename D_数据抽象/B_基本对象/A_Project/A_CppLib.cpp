//
// Created by 何时夕 on 2017/12/11.
//
#include <iostream>
#include <cassert>
#include "A_CppLib.h"
using namespace std;

static int increment = 100;

/**
 * 这里完全是照搬 前面c风格的代码，可以看见有几个变化
 * 1.函数前面增加了 命名空间标识符 :: ，这就表示该函数实现是 属于 Stash的
 * 2.不用传递 Stash指针了，因为有了命名空间之后 内部隐含了一个 this指针，这个指针表示需要更改的Stash。
 *
 */
void Stash::initialize(int size) {
    this->size = size;
    quantity = 0;
    storage = 0;
    next = 0;
}

void Stash::cleanup() {
    if(storage != 0){
        cout << "freeing storage" << endl;
        delete []storage;
    }
}

int Stash::add(const void *element) {
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
    if(index >= next){
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
    delete [](storage);
    storage = b;
    quantity = newQuantity;

    increment *= 2;
}
