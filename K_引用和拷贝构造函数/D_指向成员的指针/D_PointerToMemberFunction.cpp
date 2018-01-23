//
// Created by 何时夕 on 2018/1/2.
//
#include <iostream>
using namespace std;

class Widget {
public:
    void f(int) const {
        cout << "Widget::f()\n";
    }
    void g(int) const {
        cout << "Widget::g()\n";
    }
    void h(int) const {
        cout << "Widget::h()\n";
    }
    void i(int) const {
        cout << "Widget::i()\n";
    }
};

int main() {
    Widget w;
    Widget *wp = &w;
    void (Widget::*pmem)(int) const = &Widget::h;
    (w.*pmem)(1);
    (wp->*pmem)(2);
}

