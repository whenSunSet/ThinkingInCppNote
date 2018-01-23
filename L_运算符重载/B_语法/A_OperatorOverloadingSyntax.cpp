//
// Created by 何时夕 on 2018/1/2.
//
#include <iostream>
using namespace std;
class Integer {
    int i;
public:
    Integer(int ii) : i(ii) {}
    const Integer operator+(const Integer& rv) const {
        cout << "operator+" << endl;
        return Integer(i + rv.i);
    }
    const Integer operator+=(const Integer& rv) {
        cout << "operator+=" << endl;
        i += rv.i;
        return *this;
    }
};

int main() {
    cout << "built-in types:" << endl;
    int i = 1 , j = 2 , k = 3;
    k +=i + j;
    cout << "user-defined types:" << endl;
    Integer ii(1) , jj(2) , kk(3);
    kk += ii + jj;
}
/**
 * 1.运算符重载不能用在基本类型上面
 * 2.如果是成员函数参数是该类型
 * 3.如果不是成员函数 那么参数是 被重载的类型
 * 3.运算符重载要让 开发者用的方便 而不是产生疑惑
 */

