//
// Created by 何时夕 on 2018/1/22.
//

#ifndef PROJECT_P_C_F_VALUESTACK_H
#define PROJECT_P_C_F_VALUESTACK_H
template <class T , int ssize = 100>
class Stack {
    T stack[ssize];
    int top;
public:
    Stack() : top(0) {}
    void push(const T &x) {
        stack[top++] = x;
    }
    T peek() const {
        return stack[top];
    }
    T pop() {
        return stack[--top];
    }
};

#endif //PROJECT_P_C_F_VALUESTACK_H
