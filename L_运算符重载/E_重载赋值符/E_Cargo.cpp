//
// Created by 何时夕 on 2018/1/4.
//
#include <iostream>
using namespace std;
class Cargo {
    Cargo& operator=(const Cargo&) {
        cout << "inside Cargo::oprator=()" << endl;
        return *this;
    }
};
class Truck {
    Cargo b;
};

int main() {
    Truck a , b;
    a = b;
}

