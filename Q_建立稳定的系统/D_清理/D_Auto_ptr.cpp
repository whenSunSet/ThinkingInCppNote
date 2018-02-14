//
// Created by 何时夕 on 2018/2/6.
//
#include <memory>
#include <iostream>
#include <cstddef>
using namespace std;

class TraceHeap {
    int i;
public:
    static void* operator new(size_t siz) {
        void *p = ::operator new(siz);
        cout << "A address " << p << endl;
        return p;
    }
    static void operator delete(void *p) {
        cout << "D address " << p << endl;
        ::operator delete(p);
    }

    TraceHeap(int i) : i(i) {}

    int getI() const {
        return i;
    }
};

int main() {
    auto_ptr<TraceHeap> p(new TraceHeap(9));
    cout << p->getI() << endl;
}

// 这里的 auto_ptr就是类似C_Wrapped 的封装

