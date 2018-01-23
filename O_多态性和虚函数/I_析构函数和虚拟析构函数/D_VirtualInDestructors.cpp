//
// Created by 何时夕 on 2018/1/9.
//
#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {
        cout << "Base1()\n";
        f();
    }
    virtual void f() {
        cout << "Base::f()\n";
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "~Derived()\n";
    }
    void f() {
        cout << "Derived::f()\n";
    }
};

int main() {
    Base *bp = new Derived;
    delete(bp);
}
/**
 * 无论是析构函数还是虚析构函数 在其中调用虚函数时 虚机制都不会生效，该虚函数只会调用本地版本
 * 因为在调用当前析构函数的时候  子类可能已经被销毁了 那么此时再调用子类的虚函数就会出问题，
 * 所以编译器自动避免了这个问题
 */
