//
// Created by 何时夕 on 2017/12/8.
//
#include <iostream>
using namespace std;

int main(){
    //输出 十 八 十六 进制数字 和 浮点型数字 和 ASC II码值
    cout << "a number in decimal: "
         << dec << 15 << endl;
    cout << "in octal: " << oct << 15 << endl;
    cout << "in hex: " << hex << 15 << endl;
    cout << "a floating-point number: "
         << 3.14159 << endl;
    cout << "non-printing char (escape): "
         << char(27) << endl;
}
