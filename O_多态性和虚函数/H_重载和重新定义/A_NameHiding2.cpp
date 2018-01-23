//
// Created by 何时夕 on 2018/1/9.
//
#include <iostream>
#include <string>
using namespace std;

class Base {
public:
    virtual int f() const {
        cout << "Base::f()\n";
        return 1;
    }
    virtual void f(string) const {}
    virtual void g() const {}
    int n() const {}
    void n(int) const {}
};

class Derived : public Base {
public:
    void g() const {}
};

class Derived2 : public Base {
public:
    int f() const {
        cout << "Derived2::f()\n";
        return 2;
    }
};

class Derived3 : public Base {
public:
//    void f() const {
//        cout << "Derived3::f())\n";
//    }
};

class Derived4 : public Base {
public:
    int f(int) const {
        cout << "Derived4::f())\n";
        return 4;
    }
};

class Derived5 : public Base {
public:
    void n() const {
        cout << "Derived5::n())\n";
    }
};

int main() {
    string s("hello");
    Derived d1;
    int x = d1.f();
    d1.f(s);
    Derived2 d2;
    x = d2.f();
//    d2.f(s);
    Derived4 d4;
    x = d4.f(1);
//    x = d4.f();
//    d4.f(s);
    Derived5 d5;
    d5.n();


    Base &br = d4;
//    br.f(1);
    br.f();
    br.f(s);
}

/**
 * 对于虚函数的重写和重载 和 普通函数差不多 但是有些问题需要注意一下
 * 1.虚函数的 重载签名还是只有 函数名 所以只要 子类中定义了同名符合重载规则的函数 那么基类的重载函数就会被隐藏
 * 2.在1的基础上 如果定义的是同名但是不符合重载规则 例如 修改了返回值 那么就会编译报错，这是虚函数的特例，
 * 普通函数的话 还是会将基类的同名函数隐藏
 */
