//
// Created by 何时夕 on 2017/12/11.
//

#ifndef THINKING_IN_C_STACK_H
#define THINKING_IN_C_STACK_H
/**
 * struct 可以嵌套声明  声明之后 Link 就是Stack命名空间下的一员了。
 */
struct Stack {
    struct Link {
        void* data;
        Link* next;
        void initailize(void* dat , Link* nxt);
    };
    Link* head;
    void initailize();
    void push(void* dat);
    void* peek();
    void* pop();
    void cleanup();
};
#endif //THINKING_IN_C_STACK_H
