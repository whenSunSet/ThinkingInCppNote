//
// Created by 何时夕 on 2017/12/10.
//
#include <iostream>
using namespace std;

typedef struct {
    int i , j , k;

} ThreeDpoint;

int main() {
    // c++ 中变量的定义不像 java中一样没有被赋值的时候是null
    // c++ 中变量没有被赋值的时候 里面是垃圾数据 不是 null
    int a[10];
    for (int i = 0; i < 10; ++i) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
    for (int i = 0; i < 10; ++i) {
        a[i] = i * 10;
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    ThreeDpoint p[10];
    for (int j = 0; j < 10; ++j) {
        cout << "p[" << j << "].i = " << p[j].i << endl;
        cout << "p[" << j << "].j = " << p[j].j << endl;
        cout << "p[" << j << "].k = " << p[j].k << endl;
    }

    for (int j = 0; j < 10; ++j) {
        p[j].i = j + 1;
        p[j].j = j + 2;
        p[j].k = j + 3;
    }

    int b[10];
    cout << "sizeof(int) = " << sizeof(int) << endl;
    for (int k = 0; k < 10; ++k) {
        // 每个地址差4 说明 数值是连续存放的
        cout << "&a[" << k << "] = " << (long)&a[k] << endl;
    }
}


