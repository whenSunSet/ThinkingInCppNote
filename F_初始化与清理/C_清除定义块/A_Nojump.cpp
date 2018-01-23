//
// Created by 何时夕 on 2017/12/13.
//
class X {
public:
    X();
};

X::X() {}

void f(int i) {
    if(i < 10) {
//        goto jump1;// 不可跳过某 变量的初始化  编译的时候 会报错
    }
    X x1;
    jump1:
        switch (i) {
            case 1 :
                X x2;
                break;
//            case 2 :// 不可跳过某 变量的初始化  编译的时候 会报错
                X x3;
//                x2;// 这里 switch 会导致x2 跳过初始化 而直接访问   编译的时候会报错
                break;
        }
//    x1;// 这里 goto 会导致 x1 跳过初始化 而直接访问   编译的时候会报错

}

int main() {
    f(9);
    f(11);

}
