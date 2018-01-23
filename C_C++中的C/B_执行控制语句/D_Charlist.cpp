//
// Created by 何时夕 on 2017/12/9.
//
#include <iostream>
using namespace std;

int main(){
    // 这里和传统的c 不同的地方在于 c中需要在 程序块起始的时候定义变量 而c++是在使用的地方定义
    for (int i = 0; i < 128; ++i) {
        if (i != 26){
            cout << " value: "
                 << i
                 << " character: "
                 << char(i)
                 << endl;
        }
    }
    cout << "You guessed it!" << endl;
}

