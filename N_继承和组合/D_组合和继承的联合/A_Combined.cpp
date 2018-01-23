//
// Created by 何时夕 on 2018/1/6.
//
class A{
    int i;
public:
    A(int ii) : i(ii) {}
    ~A() {}
    void f() const {}
};

class B {
    int i;
public:
    B(int ii) : i(ii) {}
    ~B() {}
    void f() const {}
};

class C : public B {
    A a;
public:
    C(int ii) : B(ii) , a(ii) {}
    ~C() {}
    void f() const {
        a.f();
        B::f();
    }
};

int main() {
    C c(47);
}

/**
 * 析构函数的四个调用处：
 * 1.最外层对象 在 方法结束的时候调用
 * 2.对象内的成员对象 在 外层对象的 析构函数中调用
 * 3.基类对象 在子类对象析构函数调用完毕之后调用
 * 4.静态对象 在程序结束的时候调用
 */

