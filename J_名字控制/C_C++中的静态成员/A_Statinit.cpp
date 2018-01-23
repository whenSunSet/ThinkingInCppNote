//
// Created by 何时夕 on 2017/12/31.
//
#include <iostream>
using namespace std;

int x = 100;

class WithStatic {
    // 这里不是定义 只是声明
    static int x;
    static int y;
public:
    void print() const {
        cout << "WithStatic::x = " << x << endl;
        cout << "WithStatic::y = " << y << endl;
    }
};

// static 的变量需要在 类外部定义(因为 不能内联) 并且只能定义一次
int WithStatic::x = 1;
int WithStatic::y = x + 1;

int main() {
    WithStatic ws;
    ws.print();
}

