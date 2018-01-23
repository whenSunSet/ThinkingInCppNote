//
// Created by 何时夕 on 2017/12/11.
//
int a;
void f() {}
struct S {
    int a;
    void f();
};
// 如果不想在 struct 实现函数中调用 成员函数  可以指定 全局命名空间 ::
// 这样一来调用的就是 成员函数以外的函数了 如果不加的话  默认使用的是 成员函数
void S::f() {
    ::f();
    ::a++;
    a--;
}

int main() {
    S s;
    f();
}

