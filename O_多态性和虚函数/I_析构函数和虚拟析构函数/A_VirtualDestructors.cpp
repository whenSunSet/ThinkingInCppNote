//
// Created by 何时夕 on 2018/1/9.
//
#include <iostream>
using namespace std;

class Base1 {
public:
    ~Base1() {
        cout << "~Base1()\n";
    }
};

class Derived1 : public Base1 {
public:
    ~Derived1() {
        cout << "~Derived1()\n";
    }
};

class Base2 {
public:
    virtual ~Base2() {
        cout << "~Base2()\n";
    }
};

class Derived2 : public Base2 {
public:
    ~Derived2() {
        cout << "~Derived2()\n";
    }
};

int main() {
    Base1 *bp = new Derived1;
    delete bp;
    Base2 *bp2 = new Derived2();
    delete(bp2);
}

/**
 * 1.构造函数不能为虚函数 因为调用链是从 基类开始的 所以当基类初始化的时候 子类还没初始化，所以不能为虚函数
 * 2.析构函数可以为虚函数 因为调用链是从 子类开始的 如果当前子类被向上转型成基类了 如果析构函数不能为虚函数
 * 那么 此时就只会从基类的析构函数开始调用 那么 子类的内存就不能被回收了。
 * 3.只有构造函数 和 析构函数 会由编译器自动生成 调用链， 其他函数 都只会调用目标版本，要生成调用链只能显式调用
 */
