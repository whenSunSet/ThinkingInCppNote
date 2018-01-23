//
// Created by 何时夕 on 2017/12/13.
//

#ifndef THINKING_IN_C_C_STACK2_H
#define THINKING_IN_C_C_STACK2_H
class Stack {
    struct Link {
        void* data;
        Link* next;
        void initialize(void* dat , Link* nxt);
    }* head;

public:
    void initialize();
    void push(void* dat);
    void* peek();
    void* pop();
    void cleanup();
};

#endif //THINKING_IN_C_C_STACK2_H
