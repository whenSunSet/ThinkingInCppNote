//
// Created by 何时夕 on 2017/12/24.
//
#include "E_Cpptime.h"
#include <iostream>
using namespace std;

int main() {
    Time start;
    for (int i = 1; i < 10000; ++i) {
        cout << i << ' ';
        if(i%10 == 0) cout << endl;
    }

    Time end;
    cout << endl;
    cout << "start = " << start.ascii();
    cout << "end = " << end.ascii();
    cout << "delta = " << end.delta(&start);
}

