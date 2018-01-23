//
// Created by 何时夕 on 2017/12/18.
//
#include <iostream>
using namespace std;

class Fred {
    const int size;
    int i;
public:
    const int j;
    Fred(int sz);
    void print();
};

Fred::Fred(int sz) : size(sz) , i(sz + 1) , j(sz + 2) {
    size = 0;
    j = 0;
}
void Fred::print() {
    cout << size << endl;
    cout << i << endl;
    cout << j << endl;
}

int main() {
    Fred a(1) , b(2) , c(3);
    a.print() , b.print() , c.print();
}
/**
 * 1.在类内部声明一个常量，这个常量在对象的生命周期内是一个常量，被初始化之后不能被改变
 * 2.在创建一个 非(static) 的 const的时候，不能给它初值，这个初始化只能在构造函数中进行
 * 3.const需要在构造函数初始化之前进行初始化，并且只能这样做，其他任何地方都不能给其赋值
 * 4.任何参数都能像3那样初始化
 */

