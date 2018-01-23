//
// Created by 何时夕 on 2018/1/7.
//
#include <fstream>
using namespace std;

class Base {
    int i;
protected:
    int read() const {
        return i;
    }
    void  set(int ii) {
        i = ii;
    }

public:
    Base(int ii = 0) : i(ii) {}
    int value(int m) const {
        return m * i;
    }
};

class Derived : public Base {
    int j;
public:
    Derived(int jj = 0) : j(ii) {}
    void change(int x) {
        set(x);
    }
};


int main() {
    Derived d;
    d.change(10);
}

//类似java的 protected