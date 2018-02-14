//
// Created by 何时夕 on 2018/2/6.
//
#include <stdexcept>
#include <iostream>
using namespace std;

class MyError : public runtime_error {
public:
    MyError(const string &msg = "") : runtime_error(msg){}
};

int main() {
    try {
        throw MyError("m");
    } catch (MyError &x) {
        cout << x.what() << endl;
    }
}


