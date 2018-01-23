//
// Created by 何时夕 on 2017/12/18.
//
#include <iostream>
using namespace std;

class B {
    int i;
public:
    B(int ii);
    void print();
};

B::B(int ii) : i(ii){}
void B::print() {
    cout << i << endl;
}

int main() {
    B a(1) , b(2);
    // 基本数据类型能使用 构造函数的方式初始化
    float pi(3.14159);
    a.print();
    b.print();
    cout << pi << endl;
}
