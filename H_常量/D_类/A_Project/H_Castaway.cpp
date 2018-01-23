//
// Created by 何时夕 on 2017/12/18.
//
class Y {
    int i;
public:
    Y();
    void f() const ;
};
Y::Y() {
    i = 0;
}

/**
 * 可以在一个 const 成员函数里面修改 变量
 * 有下面两种方式 都是将 指向const数据this指针，转型成可以修改内部数据的指针。
 */
void Y::f() const {
//    i++;
    ((Y*)this)->i++;
    (const_cast<Y*>(this))->i++;
//    this->i++;this是指向const数据的指针
}

int main() {
    const Y yy;
    yy.f();
}

