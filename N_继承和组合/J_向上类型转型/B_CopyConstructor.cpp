//
// Created by 何时夕 on 2018/1/7.
//
#include <iostream>
using namespace std;
class Parent {
    int i;
public:
    Parent(int ii) : i(ii) {
        cout << "Parent(int ii)\n";
    }
    Parent(const Parent &b) : i(b.i) {
        cout << "Parent(const Parent&)\n";
    }
    Parent() : i(0) {
        cout << "Parent()\n";
    }
    friend ostream& operator<<(ostream &os , const Parent &b) {
        return os << "Parent: " << b.i << endl;
    }
};

class Member {
    int i;
public:
    Member(int ii) : i(ii) {
        cout << "Member(int ii)\n";
    }
    Member(const Member &m) : i(m.i) {
        cout << "Member(const Member &)\n";
    }
    friend ostream& operator<<(ostream &os , const Member &m) {
        return os << "Member: " << m.i << endl;
    }
};

class Child : public Parent {
    int i;
    Member m;
public:
    Child(int ii) : Parent(ii) , i(ii) , m(ii) {
        cout << "Child(int ii)]\n";
    }
    friend ostream& operator<<(ostream &os , const Child &c) {
        return os << (Parent&)c << c.m << "Child: " << c.i << endl;
    }
};


int main() {
    Child c(2);
    cout << "calling copy-constructor: " << endl;
    Child c2 = c;
    cout << "values in c2:\n" << c2;
}

/**
 * 1.在继承体系中  默认拷贝构造函数会 自动向上回溯调用 而自定义的 拷贝构造函数需要手动回溯
 * 2.向上类型转换还能发生在 对指针 或者 引用初始化 的简单赋值期间
 * 3.向上转型会损失对象类型信息  类似java
 */
