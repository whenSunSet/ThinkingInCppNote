//
// Created by 何时夕 on 2017/12/11.
//
struct X;
struct Y {
    void f(X*);
};
struct X {
private:
    int i;
public:
    void initialize();
    //友元 表示 该结构内 可以访问 当前 结构内的 private 的函数 和 变量
    friend void g(X* , int);//全局函数是 友元
    friend void Y::f(X *);//某个 struct 的 函数是 友元
    friend struct Z;//某个 struct 是友元
    friend void h();
};

void X::initialize() {
    i = 0;
}

void g(X* x , int i){
    x->i = i;
}

void Y::f(X* x) {
    x->i = 47;
}

struct Z {
private:
    int j;
public:
    void initialize();
    void g(X* x);
};
void Z::initialize() {
    j = 99;
}
void Z::g(X *x) {
    x->i += j;
}
void h() {
    X x;
    x.i = 100;
}

int main() {
    X x;
    Z z;
    z.g(&x);
}