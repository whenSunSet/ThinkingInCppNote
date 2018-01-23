//
// Created by 何时夕 on 2017/12/10.
//
#include <iostream>
using namespace std;

#define PRINT(STR , VAR) cout << STR " = " << VAR << endl
/**
 * 1.宏 在用到的地方会被替换成 括号后面的代码，
 * 2.宏 可能变得为危险 因为编译器不会有任何报错信息 而且 不会对参数进行任何类型检查
 */

int main(){
    int i , j , k;
    cout << "enter an integer: ";
    cin >> j;
    cout << "enter another integer: ";
    cin >> k;
    PRINT("j" , j);
    PRINT("k" , k);
    i = j + k; PRINT("j + k" , i);
    i = j - k; PRINT("j - k" , i);
    i = j / k; PRINT("j / k" , i);
    i = j * k; PRINT("j * k" , i);
    i = j % k; PRINT("j % k" , i);
    j %= k; PRINT("j %= k" , j);

    float  u , v , w;
    cout << "enter an floating-point number: ";
    cin >> v;
    cout << "enter another floating-point number: ";
    cin >> w;
    PRINT("v" , v);
    PRINT("w" , w);
    u = v + w; PRINT("v + w" , u);
    u = v - w; PRINT("v - w" , u);
    u = v / w; PRINT("v / w" , u);
    u = v * w; PRINT("v * w" , u);
//    u = v % w; PRINT("v % w" , u); 浮点型 无法使用 %操作符

    PRINT("u" , u);
    PRINT("v" , v);
    u += v; PRINT("u += v" , u);
    u -= v; PRINT("u -= v" , u);
    u *= v; PRINT("u *= v" , u);
    u /= v; PRINT("u /= v" , u);
}
