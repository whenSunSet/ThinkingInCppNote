//
// Created by 何时夕 on 2017/12/10.
//
#include "../../../common/printBinary.h"
#include <iostream>
using namespace std;

int main(int argc , char* argv[]) {
    if (argc != 2){
        cout << "Must provider a number" << endl;
        exit(1);
    }

    double d = atof(argv[1]);
    unsigned char* cp = reinterpret_cast<unsigned char*>(&d);

    for (int i = sizeof(double); i > 0 ; i -= 2) {
        cout << " " << endl;
        printBinary(cp[i -1]);
        cout << " " << endl;
        printBinary(cp[i]);
        cout << "-------" << endl;
    }
}

