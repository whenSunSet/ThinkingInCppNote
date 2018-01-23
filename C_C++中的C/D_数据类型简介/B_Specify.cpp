//
// Created by 何时夕 on 2017/12/9.
//
#include <iostream>
using namespace std;

int main(){
    char c;
    unsigned char cu;

    int i;
    unsigned int iu;

    // short int  和 short 是等价的 同理 unsigned short int 和 unsigned short也等价
    // 注意 unsigned 只能修饰整数类型 ，不能修饰 float 和double ，浮点型数字总是带符号的
    short int is;
    short iis;
    unsigned short int isu;
    unsigned short iisu;

    long int il;
    long iil;
    unsigned long int ilu;
    unsigned long iilu;

    // 只有long double  没有 long float
    float f;
    double d;
    long double ld;
    cout << "\n char= " << sizeof(c) << endl;
    cout << "\n unsigned char= " << sizeof(cu) << endl;

    cout << "\n int= " << sizeof(i) << endl;
    cout << "\n unsigned int= " << sizeof(iu) << endl;

    cout << "\n short int = " << sizeof(is) << endl;
    cout << "\n short= " << sizeof(iis) << endl;
    cout << "\n unsigned short int= " << sizeof(isu) << endl;
    cout << "\n unsigned short= " << sizeof(iisu) << endl;

    cout << "\n long int = " << sizeof(il) << endl;
    cout << "\n long= " << sizeof(iil) << endl;
    cout << "\n unsigned long int= " << sizeof(ilu) << endl;
    cout << "\n unsigned long= " << sizeof(iilu) << endl;

    cout << "\n float= " << sizeof(f) << endl;
    cout << "\n double= " << sizeof(d) << endl;
    cout << "\n long double= " << sizeof(ld) << endl;

}



