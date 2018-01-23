//
// Created by 何时夕 on 2017/12/11.
//
#include <iostream>
#include "A_Stack.h"
#include <assert.h>
using namespace std;

void Stack::Link::initailize(void *dat, Stack::Link *nxt) {
    data = dat;
    next = nxt;
}

void Stack::initailize() {
    head = 0;
}

void Stack::push(void *dat) {
    Link* newLink = new Link;
    newLink->initailize(dat , head);
    head = newLink;
}

void *Stack::peek() {
    assert(head != 0);
    return head->data;
}

void *Stack::pop() {
    if(head == 0) return 0;
    void* result = head->data;
    Link* oldHead = head;
    head = head->next;
    delete oldHead;
    return result;
}

void Stack::cleanup() {
    /**
     * 1.为什么不对 Stack 进行清理呢？ 在后面会讲到 delete void* 不能正确清理内存，
     * 所以只能让 知道到底 void* 指向了什么对象的 用户来清理内存
     * 2.同理pop函数中 delete oldHead 代码也不能清理 其内部 void* 指向的内存。
     * 此时如果pop之后 用户没有手动清理那一块内存 那么就会内存泄漏
     */
    assert(head == 0);
}
