//
// Created by 何时夕 on 2017/12/10.
//
#include <iostream>
using namespace std;

void func(int a){}

int main() {
    int i = 0x7fff;
    long l;
    float f;

    // 1.c 中常见的 隐式 扩大容量 自动类型转换 不会有问题。
    l = i;
    f = i;
    // 2.c 中常见的 显式 扩大容量 自动类型转换 不会有问题。效果同1
    l = (int)i;
    f = (int)i;
    // 3.c++ 中显式 扩大容量 自动类型转换 和 2类似，但是可以突出转换，建议使用
    l = static_cast<long>(i);
    f = static_cast<float >(i);

    // 4.c 中常见的 隐式 窄化自动类型转换 可能会丢失精度 编译器会给警告
    i = l;
    i = f;
    // 5.c 中常见的 显式 窄化自动类型转换 可能会丢失精度 编译器会给警告 效果同4
    i = (long)l;
    i = (float)f;
    // 6.c++ 中显式 窄化 自动类型转换 和 5类似，但是用这个表示我们确定需要转化 所以编译器不会再警告
    i = static_cast<int>(l);
    i = static_cast<int>(f);
    char c = static_cast<char>(f);

    // 7.c++ 中不允许 void* 隐式自动类型转换 需要 显式强制转换。static_cast 可以更清楚的定位
    void* vp = &i;
    float * fp = (float*)vp;
//    fp = vp; 会报错
    fp = static_cast<float*>(vp);

    // 8.调用方法也是一样的
    double d = 0.0;
    int x = d;
    x = static_cast<int>(d);
    func(d);
    func(static_cast<int>(d));

    /**
     * 综上所述 static_cast 是c++中推荐的 强制转换 和 自动类型转换 的标识符
     * 1.可以 扩大容量 强制转换
     * 2.可以 扩大容量 自动类型转换
     * 3.可以 窄化 强制转换 编译器不警告
     * 4.可以 窄化 自动类型转换 编译器不警告
     * 5.可为 void* 进行强制转换 编译器不警告
     * 6.更突出的显示 类型转换 方便查找
     */
}
