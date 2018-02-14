//
// Created by 何时夕 on 2018/2/6.
//
#include <iostream>
#include <cstddef>
using namespace std;

template <class T , int sz = 1> class PWrap {
    T *ptr;
public:
    class RangeError {};

    PWrap() {
        ptr = new T[sz];
        cout << "PWrap constructor" << endl;
    }

    virtual ~PWrap() {
        delete[] ptr;
        cout << "PWrap destructor" << endl;
    }

    T& operator[](int i) throw(RangeError) {
        if(i >= 0 && i < sz) {
            return ptr[i];
        }
        throw RangeError();
    }
};

class Cat {
public:
    Cat() {
        cout << "Cat()" << endl;
    }

    virtual ~Cat() {
        cout << "~Cat()" << endl;
    }

    void g() {}
};

class Dog {
public:
    void* operator new[](size_t) {
        cout << "Allocation a Dog" << endl;
        throw 47;
    }

    void operator delete[](void *p) {
        cout << "Deallocating a Dog" << endl;
        ::operator delete[](p);
    }
};

class UseResources {
    PWrap<Cat , 3> cats;
    PWrap<Dog> dog;
public:
    UseResources() {
        cout << "UseResources()" << endl;
    }

    virtual ~UseResources() {
        cout << "~UseResources()" << endl;
    }
    void f() {
        cats[1].g();
    }
};

int main() {
    try {
        UseResources ur;
    } catch (int) {
        cout << "inside handler" << endl;
    } catch (...) {
        cout << "inside catch(...)" << endl;
    }
}
/**
 * 有两种方式可以防止B_Rawp中那样，因为异常导致的Cat无法被调用析构函数的问题
 * 1.在构造函数中捕获异常然后手动释放资源
 * 2.如上面的代码：
 *      1.上面的代码与B_Rawp不同的地方在于：UseResources中的cats是在栈上面分配内存，所以就算抛出异常了，
 *      在栈回收的时候也会调用cats的析构函数，这样就能调用Cat的析构函数了
 *      2.说到底就是让，对象获取资源的时间和资源的生命周期相等，再利用局部对象在抛出异常时候的回收资源的方式来
 *      回收堆内存
 */
