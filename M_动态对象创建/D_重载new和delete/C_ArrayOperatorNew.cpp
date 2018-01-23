//
// Created by 何时夕 on 2018/1/6.
//
#include <new>
#include <fstream>
using namespace std;
ofstream trace("ArrayOperatorNew.out");

class Widget {
    enum {
        sz = 10
    };
    int i[sz];
public:
    Widget() {
        trace << "*";
    }

    ~Widget() {
        trace << "~";
    }

    void* operator new(size_t sz) {
        trace << "Widget::new: " << sz << " bytes" << endl;
        return ::new char[sz];
    }

    void operator delete(void *p) {
        trace << "Widget::delete" << endl;
        ::delete []p;
    }

    void* operator new[](size_t sz) {
        trace << "Widget::new[]: " << sz << " bytes" << endl;
        return ::new char[sz];
    }

    void operator delete[](void *p) {
        trace << "Widget::delete[]" << endl;
        ::delete []p;
    }
};

int main() {
    trace << "new Widget" << endl;
    Widget *w = new Widget;
    trace << "\ndelete Widget" << endl;
    delete w;

    trace << "new Widget[25]" << endl;
    Widget *ws = new Widget[25];
    trace << "\ndelete []Widget" << endl;
    delete []ws;
}

