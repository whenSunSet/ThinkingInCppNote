//
// Created by 何时夕 on 2017/12/14.
//
#include <iostream>
using namespace std;

union U {
private:
    int i;
    float f;
public:
    U(int a);
    U(float b);
    ~U();
    int read_int();
    float read_float();
};

U::U(int a) {
    i = a;
}

U::U(float b) {
    f = b;
}

U::~U() {
    cout << "U::~U() \n";
}

int U::read_int() {
    return i;
}

float U::read_float() {
    return f;
}

int main() {
    U X(12) , Y(1.9f);

    cout << X.read_int() << endl;
    cout << Y.read_float() << endl;
}
/**
 * 1.struct中各成员有各自的内存空间， 一个结构变量的总长度是各成员长度之和，而在union中，各成员共享一段内存空间，
 * 一个联合变量的长度等于各成员中最长的长度。共享不是指把多个成员同时装入一个联合变量内，而是指该联合变量可被赋予任一成员值，
 * 但每次只能赋一种值， 赋入新值则冲去旧值。
 * 2.union 不能再继承的时候作为基类使用
 * 3.在访问union的时候 可能会选择到错误的元素，例如上面 X.read_float();
 */

