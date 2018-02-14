//
// Created by 何时夕 on 2018/2/6.
//
#include <iostream>
using namespace std;

class Base {
public:
    class BaseException {};
    class DerivedException : public BaseException {};
    virtual void f() throw(DerivedException) {
        throw DerivedException();
    }
    virtual void g() throw(BaseException) {
        throw BaseException();
    }

    virtual void h() throw(DerivedException) {
        throw DerivedException();
    }
};

class Derived : public Base {
public:
    void f() throw(BaseException) {
        throw BaseException();
    }
    virtual void g() throw(DerivedException) {
        throw DerivedException();
    }
    virtual void h() throw(){
    }
};

/**
 * 类似java，对于继承来说，函数的异常声明 派生类需要 小于和少于 基类, 当然是对于虚函数来说的
 * 
 * 
 */



