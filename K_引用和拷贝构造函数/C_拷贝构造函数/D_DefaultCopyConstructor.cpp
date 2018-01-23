//
// Created by 何时夕 on 2018/1/1.
//
#include <iostream>
#include <string?>
using namespace std;

class WithCC {
    WithCC() {}
    WithCC(const WithCC &w) {
        cout << "WithCC(WithCC &w)" << endl;
    }
};

class WoCC {
    stirng id;
public:
    WoCC(const string &ident = "") : id(ident) {}
    void print(const string &msg = "") const {
        if(msg.size() != 0) {
            cout << msg << ": ";
        }
        cout << id << endl;
    }
};

class Composite {
    WithCC withcc;
    WoCC wocc;
public:
    Composite() : wocc("Composite()") {}
    void print(const string &msg = "") const {
        wocc.print(msg);
    }
};

int main() {
    Composite c;
    c.print("Contents of c");
    cout << "Calling Composite copt-constructor" << endl;
    Composite c2 = c;
    c2.print("Contents of c2");
}
/**
 * 1.前面说了两种 拷贝构造函数的用处  现在第三种就是 使用 一个对象给另一个对象初始化的时候
 * 被初始化的对象也会调用 拷贝构造函数
 * 2.由于只要定义了  构造函数之后 系统就不会再创建 默认构造函数了，所以这个时候 既要使用
 * 默认构造函数 又要使用 拷贝构造函数 的话 就需要将两个 构造函数都显式定义
 * 3.如果 没有类定义 拷贝构造函数 的话 就想默认构造函数一样  编译器也会自动定义一个
 * 默认拷贝构造函数 但是什么也不做
 */

