//
// Created by 何时夕 on 2018/1/6.
//
#include <iostream>
#include <string>
using namespace std;

class Base {
public:
    int f() const {
        cout << "Base::f()\n";
        return 1;
    }
    int f(string) const {
        return 1;
    }
    void g() {

    }
};

class Derived1 : public Base {
public:
    void g() const {

    }
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
    void f() const {
        cout << "Derived3::f()\n";
    }
};

class Derived4 : public Base {
public:
    int f(int) const {
        cout << "Derived4::f()\n";
        return 4;
    }
};

int main() {
    string s("hello");
    Derived1 d1;
    int x = d1.f();
    d1.f(s);

    Derived2 d2;
    x = d2.f();
//    d2.f(s); Base的 f(string) 被隐藏了

    Derived3 d3;
//    x = d3.f(); Base 的返回 int 的版本被隐藏了
    d3.f();

    Derived4 d4;
//    x = d4.f(); Base 的不传参的 版本被隐藏了
    x = d4.f(1);

}

/**
 * c++中 子类 和 父类 重载和重写的关系 与 java中不同
 * 1.c++中以 子类和父类间的重载以方法名为唯一 签名。
 * 2.如果 父类中有多个重载方法 子类中没有名称相同的方法 那么 父类的重载就是子类的重载
 * 3.如果 父类中有多个重载方法 子类中有任意一个名称相同的方法 那么父类的重载方法会全部隐藏
 * 接下来的重载 以子类为准，当然以上是以 protect 和 public方法为准。
 */

