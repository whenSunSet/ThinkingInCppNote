//
// Created by 何时夕 on 2018/1/6.
//
#include <iostream>
#include <cstdlib>
#include <new>
using namespace std;

int count1 = 0;

void out_of_memory() {
    cerr << "memory exhausted after " << count1 << " allocation!" << endl;
    exit(1);
}

int main() {
    set_new_handler(out_of_memory);
    while (1) {
        count1++;
        new int[10000000];
    }
}


