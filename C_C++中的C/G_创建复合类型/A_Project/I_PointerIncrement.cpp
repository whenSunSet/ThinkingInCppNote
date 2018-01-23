//
// Created by 何时夕 on 2017/12/10.
//
#include <iostream>
using namespace std;

typedef struct {
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;
} Primitives;

int main(){
    int i[10];
    double d[10];
    int* ip = i;
    double* dp = d;
    cout << "ip = " << (long)ip << endl;
    ip++;
    cout << "ip = " << (long)ip << endl;

    cout << "dp = " << (long)dp << endl;
    dp++;
    cout << "dp = " << (long)dp << endl;

    Primitives p[10];
    Primitives* pp = p;

    cout << "sizeof(Primitives) = " << sizeof(Primitives) << endl;
    cout << "pp = " << (long)pp << endl;
    pp++;
    cout << "pp = " << (long)pp << endl;

    /**
     * 1.指针的 ++ 操作会将指针的地址移动 当前类型的字节长度
     * 2.struct 也不例外
     * 3.指针算术只在 数组中有用
     * 4.数组的标识符不能想指针那样移动
     * 5.指针算术是有限制的：可以使用 + - ++ -- ，但是不能两个指针相加，两个指针相减返回的是中间元素个数，
     */
}

