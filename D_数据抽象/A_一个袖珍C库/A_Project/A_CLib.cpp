//
// Created by 何时夕 on 2017/12/10.
//
#include <iostream>
#include <cassert>
#include "A_CLib.h"
using namespace std;

static int increment = 100;

void initialize(CStash* s , int size) {
    s->size = size;
    s->quantity = 0;
    s->storage = 0;
    s->next = 0;
}
void cleanup(CStash* s) {
    if(s->storage != 0){
        cout << "freeing storage" << endl;
        delete []s->storage;
    }
}
int add(CStash* s , const void* element) {
    if(s->next >= s->quantity){
        inflate(s , increment);
    }

    int startBytes = s->next * s->size;
    unsigned char* e = static_cast<unsigned char*>(const_cast<void*>(element));
    for (int i = 0; i < s->size; ++i) {
        s->storage[startBytes + i] = e[i];
    }
    s->next++;
    return (s->next - 1);
}
void* fetch(CStash* s , int index) {
    assert(0 <= index);
    if(index >= s->next){
        return 0;
    }
    return &(s->storage[index * s->size]);
}
int count(CStash* s) {
    return s->next;
}
void inflate(CStash* s , int increase) {
    assert(increase > 0);
    int newQuantity = s->quantity + increase;
    int newBytes = newQuantity * s->size;
    int oldBytes = s->quantity * s->size;
    /**
     * new type ，这句话相当于 在堆上创建 newBytes大的 char数组，然后把该数组的首位指针给 b
     * 可能会想写成下面这种格式：
     * unsigned char c[newBytes];
     * unsigned char* b = c;
     * 但是这种情况是去栈中申请内存 这种情况不需要释放内存，超出作用域之后 内存就会被自动释放。
     *
     * 例子中的写法是去 堆中申请内存，需要手动释放内存，否则会内存泄漏
     */
    unsigned char* b = new unsigned char[newBytes];
    for (int i = 0; i < oldBytes; ++i) {
        b[i] = s->storage[i];
    }
    /**
     * delete x 和 delete []x 分别表示的意思是
     * 1.释放 对象x的内存空间
     * 2.释放 对象x数组 的内存空间
     */
    delete [](s->storage);
    s->storage = b;
    s->quantity = newQuantity;

    increment *= 2;
}


