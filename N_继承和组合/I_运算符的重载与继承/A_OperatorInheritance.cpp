//
// Created by 何时夕 on 2018/1/7.
//
#include <fstream>
#include "../../L_运算符重载/C_可重载的运算符/E_Byte.h"
using namespace std;
ofstream out("ByteTest.out");

class Byte2 : public Byte {
public:
    Byte2(unsigned char bb = 0) : Byte(bb) {}
    Byte2& operator=(const Byte &right) {
        Byte::operator=(right);
        return *this;
    }
    Byte2& operator=(int i) {
        Byte::operator=(i);
        return *this;
    }
};

void k(Byte2 &b1 , Byte2 &b2) {
    b1 = b1 * b2 + b2 % b1;
#define TRY2(OP) \
        out << "b1 = "; b1.print(out); \
        out << ", b2 = "; b2.print(out); \
        out << "; b1 " #OP " b2 produces "; \
        (b1 OP b2).print(out);\
        out << endl;

    b1 = 9; b2 = 47;
    TRY2(+) TRY2(-) TRY2(*) TRY2(/)
    TRY2(%) TRY2(^) TRY2(&) TRY2(|)
    TRY2(<<) TRY2(>>) TRY2(+=) TRY2(-=)
    TRY2(*=) TRY2(/=) TRY2(%=) TRY2(^=)
    TRY2(&=) TRY2(|=) TRY2(>>=) TRY2(<<=)

#define TRYC2(OP) \
        out << "b1 = "; b1.print(out); \
        out << ", b2 = "; b2.print(out); \
        out << "; b1 " #OP " b2 produces "; \
        out <<(b1 OP b2);\
        out << endl;
    b1 = 9; b2 = 47;
    TRYC2(<) TRYC2(>) TRYC2(<=) TRYC2(>=)
    TRYC2(==) TRYC2(!=) TRYC2(&&) TRYC2(||)

    Byte2 b3 = 92;
    b1 = b2 = b3;
}

int main() {
    out << "member functions: " << endl;
    Byte2 b1(47) , b2(9);
    k(b1 , b2);
}
// 运算符重载函数可以被继承，除了=

