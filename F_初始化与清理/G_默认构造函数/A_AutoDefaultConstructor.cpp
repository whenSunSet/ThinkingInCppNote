//
// Created by 何时夕 on 2017/12/14.
//
#include <iostream>
using namespace std;
class V {
    int i;
};

struct C {
private:
    int i ;
    float f;
    char c;
public:
    C(int a);
    void print();
};
C::C(int a) {
    i = a;
}
void C::print() {
    cout << "C: i = " << i << ", f = " << f << ", c = " << c << endl;
}


int main() {
    V v , v2[10];
//    C c1[2] = {C(1)};// 这样会编译报错 因为 编译器会自动去初始化 第二个没有定义的变量，但是没有默认构造函数
//    C c;// 同理 这样也找不到构造函数
    // 这里和 java 类似
}

