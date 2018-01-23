//
// Created by 何时夕 on 2017/12/24.
//

#ifndef THINKING_IN_C_A_STACK_H
#define THINKING_IN_C_A_STACK_H
#include <cassert>
using namespace std;
class Stack {
    struct Link {
        void* data;
        Link* next;
        Link(void* dat , Link* nxt) : data(dat) , next(nxt) {}
    }* head;

public:
    Stack() : head(0) {}
    ~Stack() {
        if(head != 0){
            cout << "Stack not empty";
        }
    }
    void push(void* dat) {
        head = new Link(dat , head);
    }
    void* peek() {
        assert(head != 0);
        return head->data;
    }
    void* pop() {
        if(head == 0) {
            return 0;
        }

        void* result = head->data;
        Link* oldHead = head;
        head = head->next;
        delete oldHead;
        return result;
    }
};
/**
 * 可以把 所有类函数的实现都放在 类中，这样减少了库连接 也因为内联函数增强了效率
 */
#endif //THINKING_IN_C_A_STACK_H
