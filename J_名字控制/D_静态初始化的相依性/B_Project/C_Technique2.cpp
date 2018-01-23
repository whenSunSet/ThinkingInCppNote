//
// Created by 何时夕 on 2017/12/31.
//
#include "B_Dependency2.h"
using namespace std;

int separator() {
    cout << "------------------------" << endl;
    return 1;
}

extern Dependency1 dep1;
// 在这种情况下  dep1 还没有初始化 就被 dep2 使用了 这样就会有问题
Dependency2 dep2(dep1);
Dependency1 dep1;

int x1 = separator();

// 这种方式 如果需要 dep1  dep2必须去调用d1 这样一来 dep1 一定在 dep2之前被初始化
// 不能将d1 d2 声明为内联函数  如果这样做那么就会出现多个 静态Dependency2 实例。
extern Dependency1 &d1();

Dependency2 &d2() {
    static Dependency2 dep2(d1());
    return dep2;
}

Dependency1 &d1() {
    static Dependency1 dep1;
    return dep1;
}

int main() {
    Dependency2 & dep2 = d2();
}


