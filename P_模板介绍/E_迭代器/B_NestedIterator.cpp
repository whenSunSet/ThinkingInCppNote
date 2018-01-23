//
// Created by 何时夕 on 2018/1/22.
//
#include "../A_容器/B_fibonacci.h"
#include <iostream>
#include <string>
using namespace std;

class IntStack {
    enum {
        ssize = 100
    };
    int stack[ssize];
    int top;
public:
    IntStack() : top(0) {}
    void push(int i) {
        stack[top++] = i;
    }
    int pop() {
        return stack[--top];
    }
    class iterator;
    friend class iterator;
    class iterator {
        IntStack &s;
        int index;
    public:
        iterator(IntStack &is) : s(is) , index(0) {}
        iterator(IntStack &is , bool) : s(is) , index(s.top) {}
        int current() const {
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
        friend ostream& operator<<(ostream& os , const iterator &it) {
            return os << it.current();
        }
    };
    iterator begin() {
        return iterator(*this);
    }
    iterator end() {
        return iterator(*this , true);
    }
};

int main() {
    IntStack is;
    for (int i = 0; i < 20; ++i) {
        is.push(fibonacci(i));
    }
    IntStack::iterator it = is.begin();
    while (it != is.end()) {
        cout << it++ << endl;
    }
    cout << "Traverse a position of the IntStack\n";
    IntStack::iterator start = is.begin() , end = is.begin();
    start += 5 , end += 15;
    cout << "start = " << start << endl;
    cout << "end = " << end << endl;
    while(start != end) {
        cout << start++ << endl;
    }
}



