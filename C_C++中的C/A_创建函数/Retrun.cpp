//
// Created by 何时夕 on 2017/12/9.
//
#include <iostream>
using namespace std;

// 在使用函数之前 声明是必须的。
extern char cfunc(int);

int main(){
    cout << "type an integer: ";
    int val;
    cin >> val;
    cout << cfunc(val) << endl;
}

char cfunc(int i){
    if(i == 0){
        return 'a';
    }
    if(i == 1){
        return 'b';
    }
    if(i == 2){
        return 'c';
    }
    return 'd';
}

