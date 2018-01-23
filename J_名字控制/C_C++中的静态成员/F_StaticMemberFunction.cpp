//
// Created by 何时夕 on 2017/12/31.
//

class X {
    int i;
    static int j;
public:
    X(int ii = 0) : i(ii) {
        j = 1;
    }
    int val() const {
        return i;
    }
    static int incr() {
        return ++j;
    };
    static int f() {
//        val(); 静态函数只允许访问静态成员
        return incr();
    }
};

int X::j = 0;

int main() {
    X x;
    X* xp = &x;
    // 静态函数可以使用 对象来调用 也可以使用 类来调用
    x.f();
    xp->f();
    X::f();
}

