//
// Created by 何时夕 on 2018/2/6.
//
#include <exception>
#include <iostream>
using namespace std;

class Up {};
class Fit {};
void g();

void f(int i) throw(Up , Fit) {
    switch (i) {
        case 1: throw Up();
        case 2: throw Fit();
    }
    g();
}

void g() {
    throw 47;
}

void my_unexpected() {
    cout << "my_unexpected" << endl;
    exit(0);
}

int main() {
    set_unexpected(my_unexpected);
    for (int i = 1; i <= 3; ++i) {
        try {
            f(i);
        } catch (Up) {
            cout << "Up" << endl;
        } catch (Fit) {
            cout << "Fit" << endl;
        }
    }
}

/**
 * 1.可以在声明函数的时候 定义函数可能会抛出的异常 供开发者知道
 * 2.但是如果 开发的函数中调用了其他函数，那么可能会出现 抛出了在声明的时候不知道的异常
 * 3.所以在java中 有了 throws这个关键字
 * 4.为了解决2 有了 throw(...)表示可以抛出任何异常 和 throw()表示可能抛出异常也可能不抛出异常
 */



