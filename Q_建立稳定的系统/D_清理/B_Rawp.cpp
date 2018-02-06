//
// Created by 何时夕 on 2018/1/23.
//
#include <iostream>
#include <cstddef>
using namespace std;

class Cat {
public:
    Cat() {
        cout << "Cat()" << endl;
    }

    virtual ~Cat() {
        cout << "~Cat()" << endl;
    }
};

class Dog {
public:
    void operator new(size_t sz) {
        cout << "allocating a Dog" << endl;
        throw 47;
    }
    void operator delete(void *p) {
        cout << "allocating a Dog" << endl;
        ::operator delete(p);
    }
};

class UseResources {
    Cat *bp;
    Dog *op;
public:
    UseResources(int count = 1) {
        cout << "UseResources()" << endl;
        bp = new Cat[count];
        op = new Dog;
    }

    virtual ~UseResources() {
        cout << "~UseResources()" << endl;
        delete []bp;
        delete op;
    }
};

int main() {
    try {
        UseResources ur(3);
    } catch (int) {
        cout << "inside handler" << endl;
    }
}
// 由于抛出异常了，所以Cat的析构函数都不会被调用了，所以我们需要在捕获异常的时候 确保资源的释放
