//
// Created by 何时夕 on 2017/12/8.
//
#include <iostream>
using namespace std;

int main(){
    // 将输入的数字 转化成八 十六 进制
    // cin通常指的是控制台输入，但是这种输入可以被重定向成其他输入，例如 文件流、网络数据流 等等。
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;
    cout << "value in octal = 0"
         << oct << number << endl;
    cout << "value in hex = 0x"
         << hex << number << endl;
}

