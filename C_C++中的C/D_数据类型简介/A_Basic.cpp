//
// Created by 何时夕 on 2017/12/9.
//
#include <iostream>
using namespace std;

int main(){
    // 没有被初始化的 基本数据类型 会随机指向一块垃圾内存 这个内存中的数据是不确定的
    char protein;
    int carbohydrate;
    float fiber;
    double fat;
    char pizza = 'A' , pop = 'Z';
    int dongdings = 100 , twinkles = 150 , heehos = 200;
    float  chocolate = 3.14159;
    double fudge_ripple = 6e-4;
    cout << carbohydrate << endl;
    cout << fiber << endl;
    cout << fat << endl;
    cout << pizza << endl;
    cout << pop << endl;
    cout << dongdings << endl;
    cout << twinkles << endl;
    cout << heehos << endl;
    cout << chocolate << endl;
    cout << fudge_ripple << endl;
}

