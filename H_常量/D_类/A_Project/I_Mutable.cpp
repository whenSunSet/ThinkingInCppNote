//
// Created by 何时夕 on 2017/12/18.
//
class Z {
    int i;
    mutable int j;
public:
    Z();
    void f() const ;
};

Z::Z() : i(0) , j(0){}

/**
 * 将变量声明成 mutable 可以在const成员函数里面 修改他
 */
void Z::f() const {
//    i++;
    j++;
}

int main() {
    const Z zz;
    zz.f();
}

