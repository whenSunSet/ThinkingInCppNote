//
// Created by 何时夕 on 2018/1/7.
//
#include <iostream>
using namespace std;

class NoVirtual {
    int a;
public:
    void x() const {

    }
    int i() const {
        return 1;
    }
};

class OneVirtual {
    int a;
public:
    virtual void x() const {}
    int i() const {
        return 1;
    }
};

class TwoVirtuals {
    int a;
public:
    virtual void x() const {}
    virtual int i() const {
        return 1;
    }
};

int main() {
    cout << "int: " << sizeof(int) << endl;
    cout << "NoVirtual: " << sizeof(NoVirtual) << endl;
    cout << "OneVirtual: " << sizeof(OneVirtual) << endl;
    cout << "TwoVirtuals: " << sizeof(TwoVirtuals) << endl;
}
/**
 * c++是怎么实现晚绑定的呢？
 * 1.编译器会对每个包含虚函数的类创建一个 虚函数表
 * 2.有一个void指针会指向这个虚函数表
 * 3.当做虚函数调用的时候 编译器静态的插入 能取得这个虚函数表的指针的代码 和 查找函数地址的代码
 * 4.每个类不管有多少个虚函数 都会存在一个虚函数表中 所以一个类最多只会多一个 void指针
 * 5.基类有虚函数表 那么 子类也会有虚函数表 只不过表中的函数地址是 本类的函数
 * 6.虚函数表指针是在 构造函数内由编译器初始化的
 */

