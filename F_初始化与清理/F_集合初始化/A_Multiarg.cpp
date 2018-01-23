//
// Created by 何时夕 on 2017/12/14.
//
#include <iostream>
using namespace std;

class Z {
    int i , j;
public:
    Z(int i1 , int jj);
    void print();
};

Z::Z(int i1, int jj) {
    i = i1;
    j = jj;
}

void Z::print() {
    cout << "Z: i = " << i << ", j = " << j << endl;
}

struct X {
    int i ;
    float f;
    char c;
    void print();
};
void X::print() {
    cout << "X: i = " << i << ", f = " << f << ", c = " << c << endl;
}


class Y {
    int i ;
    float f;
    char c;
public:
    void print();
};

void Y::print() {
    cout << "Y: i = " << i << ", f = " << f << ", c = " << c << endl;
}

class A {
private:
    int i ;
    float f;
    char c;
public:
    void print();
};

void A::print() {
    cout << "Y: i = " << i << ", f = " << f << ", c = " << c << endl;
}

struct B {
private:
    int i ;
    float f;
    char c;
public:
    void print();
};
void B::print() {
    cout << "B: i = " << i << ", f = " << f << ", c = " << c << endl;
}

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
    int a[5] = {1 , 2 , 3 , 4 , 5};// 类似 java 的集合初始化
    int b[] = {1 , 2 , 3 , 4 , 5};// 类似 java 的集合初始化

    X x1 = {1 , 2.2f , 'c'};// struct 也是一种数组 所以可以用数组的方式初始化
    x1.print();

//    Y y1 = {1 , 2.2f , 'c'};// class 不允许使用 数组的方式初始化
//    y1.print();

//    A a1 = {1 , 2.2f , 'c'};// class 不允许使用 数组的方式初始化
//    a1.print();

//    B b1 = {1 , 2.2f , 'c'};// struct 的私有成员 不允许使用 数组的方式初始化
//    b1.print();

    X x2[3] = {{1 , 2.2f , 'c'} , {2 , 3.3f , 'd'} , {3 , 4.4f , 'e'}};// struct 数组可以使用二维数组的方式初始化
    x2[0].print();
    x2[1].print();
    x2[2].print();

//    Y y2[3] = {{1 , 2.2f , 'c'} , {2 , 3.3f , 'd'} , {3 , 4.4f , 'e'}};// class 不允许使用 数组的方式初始化
//    y2[0].print();
//    y2[1].print();
//    y2[2].print();

    C c1[3] = {C(1) , C(2) , C(3)};
    c1[0].print();
    c1[1].print();
    c1[2].print();


}

