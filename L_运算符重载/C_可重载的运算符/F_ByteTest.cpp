//
// Created by 何时夕 on 2018/1/3.
//
#include "E_Byte.h"
#include <fstream>
using namespace std;
ofstream out("ByteTest.out");

void k(Byte &b1 , Byte &b2) {
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

    Byte b3 = 92;
    b1 = b2 = b3;
}

int main() {
    cout << "member functions" << endl;
    Byte b1(47) , b2(9);
    k(b1 , b2);
}
/**
 * 1.=的符号重载只能交给 成员函数实现
 * 2.重载运算符不仅可以处理单一类型 还可以处理混合类型
 * 3.对于任何参数如果只是要读取他 那么需要默认为const 如果该函数是 类成员的话 那么久设置成 const函数
 * 4.返回参数的类型 取决于 运算符
 */


