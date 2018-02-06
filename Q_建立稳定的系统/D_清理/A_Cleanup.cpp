//
// Created by 何时夕 on 2018/1/23.
//
#include <iostream>
using namespace std;

class Trace {
    static int counter;
    int objid;
public:
    Trace() {
        objid = counter++;
        cout << "constructing Trace #" << objid << endl;
        if(objid == 3) {
            throw 3;
        }
    }

    virtual ~Trace() {
        cout << "destructing Trace #" << objid << endl;
    }
};

int Trace::counter = 0;
int main() {
    try {
        Trace n1;
        Trace array[5];
        Trace n2;
    } catch (int i) {
        cout << "caught " << i << endl;
    }
}
// 由于析构函数是被编译器在 某个参数于作用域中插入调用的，如果在程序转到了一个异常中的时候，
// 比如在一个对象的构造函数中抛出异常了，那么该对象的析构函数就不会再调用了，同理
// 该作用域中其他对象的茨沟函数都不会调用了

