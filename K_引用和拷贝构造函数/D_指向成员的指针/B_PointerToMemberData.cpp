//
// Created by 何时夕 on 2018/1/1.
//
#include <iostream>
using namespace std;

class Data {
public:
    int a , b , c;
    void print() const  {
        cout << "a = " << a << ". b = " << b << ",c = " << c << endl;
    }
};

int main() {
    Data d , *dp = &d;
    int Data::*pmInt = &Data::a;
    d.*pmInt = 47;
    pmInt = &Data::b;
    d.*pmInt = 48;
    pmInt = &Data::c;
    d.*pmInt = 49;
    dp->print();

    pmInt = &Data::a;
    dp->*pmInt = 49;
    pmInt = &Data::b;
    dp->*pmInt = 48;
    pmInt = &Data::c;
    dp->*pmInt = 47;
    d.print();
}
/**
 * 要定义一个  外部的指针 使得这个 指针指向 对象内部的成员，有以下几点:
 * 1.我们需要获取  对象内部成员地址
 * 2.先声明 一个指针 这个指针是指向 某个类 的 成员的。
 * 例如:int Data::*pmInt = &Data::a;  表示 定义了 int指针 pmInt 的类型是 Data的a
 * 3.将具体的 指针进行初始化
 * 例如:d.*pmInt = 47;  表示指向 d对象 中的一个成员变量a的指针 其指向的值 被初始化成了47
 */

