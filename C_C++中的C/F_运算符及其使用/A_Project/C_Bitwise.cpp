//
// Created by 何时夕 on 2017/12/10.
//
#include <iostream>
#include "../../../common/printBinary.h"
using namespace std;

#define PR(STR , EXPR) cout << STR; printBinary(EXPR); cout << endl;

unsigned char rol(unsigned char val);
unsigned char ror(unsigned char val);

int main(){
    // 使用字节操作的时候 一般希望是不带符号
    unsigned int getval;
    unsigned char a , b;
    cout << "Enter a number between 0 and 255: ";
    cin >> getval;
    a = getval;
    PR("a in binary: " , a);
    cout << "Enter a number between 0 and 255: ";
    cin >> getval;
    b = getval;
    PR("b in binary: " , b);
    PR("a | b = " , a | b);
    PR("a & b = " , a & b);
    PR("a ^ b = " , a ^ b);
    PR("~a = " , ~a);
    PR("~b = " , ~b);

    unsigned  char c = 0x5A;
    PR("c in binary: " , c);

    a |= c;
    PR("a |= c: a = " , a);

    b &= c;
    PR("b &= c: b = " , b);

    b ^= a;
    PR("b ^= a: b = " , b);

    // 左循环移位
    unsigned  char d = 0x8A;
    PR("d in binary: " , d);
    PR("rol(d) = " , rol(d));

    // 右循环移位
    unsigned  char e = 0x8A;
    PR("e in binary: " , e);
    PR("ror(e) = " , ror(e));

}


