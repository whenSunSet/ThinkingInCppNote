//
// Created by 何时夕 on 2017/12/10.
//
#include <iostream>
using namespace std;

int main() {
    int a = 0 , b = 1 , c = 2 , d = 3 , e = 4;
    // 逗号作为分隔符 只产生最后一个表达式的值， 所以这里 a = 4
    a = (b++ , c++ , d++ , e++);
    cout << "a = " << a << endl;
    (a = b++) , c++ , d++ , e++;
    cout << "a = " << a << endl;
}

