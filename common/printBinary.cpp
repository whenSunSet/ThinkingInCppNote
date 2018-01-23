//
// Created by 何时夕 on 2017/12/10.
//
#include <iostream>
using namespace std;

void printBinary(const unsigned char val){
    for (int i = 7 ; i >= 0 ; --i) {
        if (val & (1 << i)){
            cout << "1";
        } else {
            cout << "0";
        }
    }
}

