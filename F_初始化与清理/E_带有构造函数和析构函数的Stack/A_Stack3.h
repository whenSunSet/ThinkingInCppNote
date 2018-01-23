//
// Created by 何时夕 on 2017/12/14.
//

#ifndef THINKING_IN_C_A_STACK3_H
#define THINKING_IN_C_A_STACK3_H
class Stack {
    struct Link {
        void* data;
        Link* next;
        Link(void* dat , Link* nxt);
        ~Link();
    }* head;

public:
    Stack();
    ~Stack();
    void push(void* dat);
    void* peek();
    void* pop();
};

#endif //THINKING_IN_C_A_STACK3_H
