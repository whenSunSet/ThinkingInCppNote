//
// Created by 何时夕 on 2018/1/9.
//

#ifndef PROJECT_P_B_E_A_TSTASH_H
#define PROJECT_P_B_E_A_TSTASH_H
template <class T>
class Stack {
    struct Link {
        T *data;
        Link *next;
        Link(T *dat , Link *nxt) : data(dat) , next(nxt) {

        }
    }* head;

public:
    Stack() : head(0) {

    }
    ~Stack() {
        while (head) {
            delete pop();
        }
    }
    void push(T *dat) {
        head = new Link(dat , head);
    }
    T* peek() const {
        return head ? head->data : 0;
    }
    T* pop() {
        if(head == 0) {
            return 0;
        }
        T* result = head->data;
        Link* oldHead = head;
        head = head->next;
        return result;
    }
};

#endif //PROJECT_P_B_E_A_TSTASH_H
