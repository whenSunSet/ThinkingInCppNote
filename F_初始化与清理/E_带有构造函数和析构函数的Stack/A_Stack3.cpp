//
// Created by 何时夕 on 2017/12/14.
//
#include "A_Stack3.h"
#include <iostream>
#include <cassert>
using namespace std;

Stack::Link::Link(void *dat, Link *nxt) {
    data = dat;
    next = nxt;
}

Stack::Link::~Link() {}

Stack::Stack() {head = 0;}

void* Stack::peek() {
    assert(head != 0);
    return head->data;
}

void Stack::push(void *dat) {
    head = new Link(dat , head);
}

void* Stack::pop() {
    if(head == 0) {
        return 0;
    }

    void* result = head->data;
    Link* oldHead = head;
    head = head->next;
    delete oldHead;
    return result;
}

Stack::~Stack() {
    if(head != 0){
        cout << "Stack not empty";
    }
}


