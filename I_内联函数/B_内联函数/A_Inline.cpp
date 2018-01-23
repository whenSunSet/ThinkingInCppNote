//
// Created by 何时夕 on 2017/12/24.
//
#include <iostream>
#include <string>
using namespace std;

// 内联函数只有放在函数体上才有用，声明的时候加是没有用的
inline int plusOne(int x) {
    return ++x;
}

// 任何类内部定义的函数都自动成为内联函数，在类外部定义内联函数需要加 inline，
class Point {
    int i , j , k;
public:
    Point() : i(0) , j(0) , k(0) {}
    Point(int ii , int jj , int kk) : i(ii) , j(jj) , k(kk) {}
    void print(const string &msg = "") const {
        if(msg.size() != 0) {
            cout << msg << endl;
        }
        cout << "i = " << i << ", "
             << "j = " << j << ", "
             << "k = " << k << endl;
    }
};

int main() {
    Point p , q(1 , 2 , 3);
    p.print("value of p");
    q.print("value of q");
}


