//
// Created by 何时夕 on 2018/1/9.
//

#ifndef PROJECT_O_I_D_E_OSTACK_H
#define PROJECT_O_I_D_E_OSTACK_H
class Object {
public:
    virtual ~Object() = 0;
};

inline Object::~Object() {}

class Stack {
    struct Link {
        Object *data;
        Link *next;
        Link(Object *dat , Link *net) : data(dat) , next(net) {}
    }* head;

public:
    Stack() : head(0) {}
    ~Stack() {
        while (head) {
            delete pop();
        }
    }
    void push(Object *dat) {
        head = new Link(dat , head);
    }
    Object *pop() {
        if(head == 0) {
            return 0;
        }
        Object *result = head->data;
        Link *oldHead = head;
        head = head->next;
        delete oldHead;
        return result;
    }
};

#endif //PROJECT_O_I_D_E_OSTACK_H
