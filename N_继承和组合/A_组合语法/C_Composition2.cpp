//
// Created by 何时夕 on 2018/1/6.
//
#include "A_Useful.h"
class Y {
    int i;
    X x;
public:
    Y() {
        i = 0;
    }
    void f(int ii) {
        i = ii;
        x.set(ii);
    }
    int g() const {
        return i * x.read();
    }
    void permute() {
        x.permute();
    }
};

int main() {
    Y y;
    y.f(47);
    y.permute();
}

