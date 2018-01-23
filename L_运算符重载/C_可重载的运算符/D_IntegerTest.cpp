//
// Created by 何时夕 on 2018/1/2.
//
#include "B_Integer.h"
#include <fstream>
using namespace std;
ofstream out("IntegerTest.out");

void h(Integer &c1 , Integer &c2) {
    c1 += c1 * c2 + c2 % c1;
    #define TRY(OP) \
        out << "c1 = "; c1.print(out); \
        out << ", c2 = "; c2.print(out); \
        out << "; c1 " #OP " c2 produces "; \
        (c1 OP c2).print(out);\
        out << endl;

    TRY(+) TRY(-) TRY(*) TRY(/)
    TRY(%) TRY(^) TRY(&) TRY(|)
    TRY(<<) TRY(>>) TRY(+=) TRY(-=)
    TRY(*=) TRY(/=) TRY(%=) TRY(^=)
    TRY(&=) TRY(|=) TRY(>>=) TRY(<<=)
    #define TRYC(OP) \
        out << "c1 = "; c1.print(out); \
        out << ", c2 = "; c2.print(out); \
        out << "; c1 " #OP " c2 produces "; \
        out <<(c1 OP c2);\
        out << endl;
    TRYC(<) TRYC(>) TRYC(<=) TRYC(>=)
    TRYC(==) TRYC(!=) TRYC(&&) TRYC(||)
}

int main() {
    cout << "friend functions" << endl;
    Integer c1(47) , c2(9);
    h(c1 , c2);
}
