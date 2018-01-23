//
// Created by 何时夕 on 2018/1/2.
//
#include <iostream>
using namespace std;

class Integer {
    long i;
    Integer* This() {
        return this;
    }
public:
    Integer(long ll = 0) : i(ll) {}
    // 一元操作符
    friend const Integer& operator+(const Integer &a);
    friend const Integer operator-(const Integer &a);
    friend const Integer operator~(const Integer &a);
    friend Integer* operator&(Integer &a);
    friend int operator!(const Integer &a);
    friend const Integer& operator++(Integer &a);
    friend const Integer operator++(Integer &a , int);
    friend const Integer& operator--(Integer &a);
    friend const Integer operator--(Integer &a , int);
};

const Integer& operator+(const Integer &a) {
    cout << "+Integer\n";
    return a;
}
const Integer operator-(const Integer &a) {
    cout << "-Integer\n";
    return Integer(-a.i);
}
const Integer operator~(const Integer &a) {
    cout << "~Integer\n";
    return Integer(~a.i);
}
Integer* operator&(Integer &a) {
    cout << "&Integer\n";
    return a.This();
}
int operator!(const Integer &a) {
    cout << "!Integer\n";
    return !a.i;
}
const Integer& operator++(Integer &a) {
    cout << "++Integer\n";
    ++a.i;
    return a;
}
const Integer operator++(Integer &a , int) {
    cout << "Integer++\n";
    Integer before(a.i);
    a.i++;
    return before;
}
const Integer& operator--(Integer &a) {
    cout << "--Integer\n";
    --a.i;
    return a;
}
const Integer operator--(Integer &a , int) {
    cout << "Integer--\n";
    Integer before(a.i);
    a.i--;
    return before;
}

void f(Integer a) {
    +a;
    -a;
    ~a;
    Integer *ip = &a;
    !a;
    ++a;
    a++;
    --a;
    a--;
}

class Byte {
    unsigned char b;
public:
    Byte(unsigned char bb = 0) : b(bb) {}
    const Byte& operator+() const {
        cout << "+Byte\n";
        return *this;
    }
    const Byte operator-() const {
        cout << "-Byte\n";
        return Byte(-b);
    }
    const Byte operator~() const {
        cout << "~Byte\n";
        return Byte(~b);
    }
    Byte* operator&() {
        cout << "&Byte\n";
        return this;
    }
    Byte operator!() const {
        cout << "!Byte\n";
        return Byte(!b);
    }
    Byte& operator++() {
        cout << "++Byte\n";
        ++b;
        return *this;
    }
    Byte operator++(int) {
        cout << "Byte++\n";
        Byte before(b);
        b++;
        return before;
    }
    Byte& operator--() {
        cout << "--Byte\n";
        --b;
        return *this;
    }
    Byte operator--(int) {
        cout << "Byte--\n";
        Byte before(b);
        b--;
        return before;
    }

};

void g(Byte b) {
    +b;
    -b;
    ~b;
    Byte *bp = &b;
    !b;
    ++b;
    b++;
    --b;
    b--;
}

int main() {
    Integer a;
    f(a);
    Byte b;
    g(b);
}
/**
 * 注意一个问题
 * 如果成员函数 是 const的  那么传入的this指针也是 const的，否则不是const的
 */



