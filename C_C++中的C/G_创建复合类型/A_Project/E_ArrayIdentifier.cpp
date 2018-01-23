//
// Created by 何时夕 on 2017/12/10.
//
#include <iostream>
using namespace std;

int main() {
    int a[10];
    cout << "a = " << a << endl;
    cout << "&a[0] = " << &a[0] << endl;
    // a 和 &a[0] 的地址是一致的 ，可以把 数组的标识符看做是 数组启始处的指针 只是这个指针不会移动。

    // 可以创建指针 使其在数组中移动 ，方括号语法和指针一样工作
    int* ip = a;
    for (int i = 0; i < 10; ++i) {
        ip[i] = i * 10;
    }

    for (int i = 0; i < 10; ++i) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
}
