//
// Created by 何时夕 on 2018/1/9.
//

#ifndef PROJECT_P_B_B_C_STACKTEMPLATE_H
#define PROJECT_P_B_B_C_STACKTEMPLATE_H
template <class T>
class StackTemplate {
    enum {
        ssize = 100
    };
    T stack[ssize];
    int top;
public:
    StackTemplate() : top(0) {}
    void push(const T &i) {
        stack[top++ ] = i;
    }
    T pop() {
        return stack[--top];
    }
    int siez() {
        return top;
    }
};

#endif //PROJECT_P_B_B_C_STACKTEMPLATE_H
