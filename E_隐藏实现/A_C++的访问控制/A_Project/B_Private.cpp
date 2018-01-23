//
// Created by 何时夕 on 2017/12/11.
//
struct B {
private:
    char j;
    float f;
public:
    int i;
    void func();
};

void B::func() {
    i = 0;
    j = '0';
    f = 0.0;
}

int main() {
    B b;
    b.i = 1;
//    b.j = '1';
//    b.f = 1.0;
}

/**
 * private 的 成员变量 和 成员函数 不能再外部被调用。如果使用了 会在编译时报错。
 * protect 只能在子类中被使用
 */



