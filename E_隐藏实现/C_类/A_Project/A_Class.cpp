//
// Created by 何时夕 on 2017/12/13.
//
struct A {
private:
    int i , j , k;
public:
    int f();
    void g();
};

int A::f() {
    return i + j + k;
}

void A::g() {
    i = j = k = 0;
}

class B {
    int i , j , k;
public:
    int f();
    void g();
};

int B::f() {
    return i + j + k;
}

void B::g() {
    i = j = k = 0;
}

int main() {
    A a;
    B b;
    a.f();
    b.f();
}
/**
 * 1.在 c++ 中class 和 struct 基本上是一致的
 * 2.有一点不同  struct 默认是 public的   class 默认是 private 的
 */




