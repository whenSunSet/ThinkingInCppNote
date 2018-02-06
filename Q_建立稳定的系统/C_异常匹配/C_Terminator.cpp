//
// Created by 何时夕 on 2018/1/23.
//
#include <exception>
#include <iostream>
using namespace std;

void terminator() {
    cout << "be back" << endl;
    exit(0);
}

void (*old_terminator)() = set_terminate(terminator);

class Botch {
public:
    class Fruit{};
    void f() {
        cout << "Botch::f()" << endl;
        throw Fruit();
    }

    virtual ~Botch() {
        throw 'c';
    }
};

int main() {
    try {
        Botch b;
        b.f();
    } catch (...) {
        cout << "inside catch(...)" << endl;
    }
}
/**
 * 如果有异常没有被捕捉到，那么最终会调用 terminator()这个函数,其会在下面这种场景中调用
 * 1.在析构函数中抛出异常
 * 
 * set_terminator()  函数可以将替换内置的terminator()换成我们自己的函数。
 */
