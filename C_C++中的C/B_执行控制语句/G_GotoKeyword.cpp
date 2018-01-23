//
// Created by 何时夕 on 2017/12/9.
//
#include <iostream>
using namespace std;

int main(){
    long val = 0;
    for (int i = 1; i < 1000; ++i) {
        for (int j = 1; j < 100; ++j) {
            val = i * j;
            if (val > 47000){
                //在绝大多数情况下需要避免使用go to
                //在这种情况下 如果不要goto 需要break两次，所以goto可以谨慎使用 来解决一些问题
                goto bottom;
            }
        }
    }
    bottom:
    cout << val << endl;
}


