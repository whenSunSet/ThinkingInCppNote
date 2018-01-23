//
// Created by 何时夕 on 2017/12/10.
//
#include <iostream>
using namespace std;
#define P(EX) cout << #EX <<": " << EX << endl;
// # 的作用是获取任何表达式 然后将其转化成 字符数组

int main() {
    int a[10];
    for (int i = 0; i < 10; ++i) {
        a[i] = i;
    }
    int* ip = a;
    P(*ip);
    P(*++ip);
    P(*(ip + 5));
    int* ip2 = ip + 5;
    P(*ip2);
    P(*(ip2 - 4));
    P(*--ip2);
    P(ip2 - ip);
}

