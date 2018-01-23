//
// Created by 何时夕 on 2018/1/22.
//

#ifndef PROJECT_P_E_B_C_ITERSTACKTEMPLATE_H
#define PROJECT_P_E_B_C_ITERSTACKTEMPLATE_H

#include <iostream>

template <class T , int ssize = 100>
class StackTemplate {
    T stack[ssize];
    int top;
public:
    StackTemplate() : top(0) {}
    void push(const T &i) {
        stack[top++] = i;
    }
    T pop() {
        return stack[--top];
    }
    class iterator;
    friend class iterator;
    class iterator {
        StackTemplate &s;
        int index;
    public:
        iterator(StackTemplate &is) : s(is) , index(0) {}
        iterator(StackTemplate &is , bool) : s(is) , index(s.top) {}
        T operator*() const {
            return s.stack[index];
        }
        int operator++() {
            return s.stack[++index];
        }
        int operator++(int) {
            return s.stack[index++];
        }
        iterator& operator+=(int amount) {
            index += amount;
            return *this;
        }
        bool operator==(const iterator &rv) const {
            return index == rv.index;
        }
        bool operator!=(const iterator &rv) const {
            return index != rv.index;
        }
        friend std::ostream& operator<<(std::ostream& os , const iterator &it) {
            return os << *it;
        }
    };
    iterator begin() {
        return iterator(*this);
    }
    iterator end() {
        return iterator(*this , true);
    }
};

#endif //PROJECT_P_E_B_C_ITERSTACKTEMPLATE_H
