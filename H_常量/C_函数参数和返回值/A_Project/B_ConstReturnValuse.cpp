//
// Created by 何时夕 on 2017/12/15.
//

class X {
    int i;
public:
    X(int ii = 0);
    void modify();
};

X::X(int ii) {
    i = ii;
}

void X::modify() {
    i++;
}

X f5() {
    return X();
}

const X f6() {
    return X();
}

void f7(X &x) {
    x.modify();
}

/**
 * 当 返回值返回的是自己的对象的时候 使用const修饰只有一个作用就是：防止返回的对象作为一个左值。
 *
 */
int main() {
    f5() = X(1);//返回的 非const对象可以作为左值
    f5().modify();
//    f6() = X(1);返回的 const对象不可以作为左值
//    f6().modify();返回的 const对象不可以改变

//    f7(f5());f5()会产生一个临时变量 这个变量由编译器决定，并且是 const的，所以传到f7中会报错
//    f7(f6());f6()会产生一个临时变量 这个变量由编译器决定，并且是 const的，所以传到f7中会报错
}
