//
// Created by 何时夕 on 2018/1/5.
//
/**
 * 创建一个C++对象的时候会有发生两件事
 * 1.为对象分配内存
 *      1.静态储存区域，在程序开始之前分配，储存空间在整个运行期间存在
 *      2.到了一个左大括号的时候 对象的内存会被分配在栈上面 到了右大括号内存就会被回收，编译期间就知道对象的数量
 *      3.使用 new 和 delete在堆上获取内存 和 释放内存 对象数量未知 程序员操作
 * 2.调用构造函数来初始化 对象内存
 */
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
class Obj {
    int i , j , k;
    enum {
        sz = 100;
    };
    char buf[sz];
public:
    void initialize() {
        cout << "initializing Obj" << endl;
        i = j = k = 0;
        memset(buf , 0 , sz);
    }
    void destroy() const {
        cout << "destroying Obj" << endl;
    }
};

int main() {
    Obj *obj = (Obj*)malloc(sizeof(Obj));
    obj->initialize();

    obj->destroy();
    free(obj);
}
/**
 * 以上是c中为一个对象分配一个内存的方式，有以下几个问题:
 * 1.malloc只是分配了一块内存 所以返回的是一个void*指针 需要类型转化
 * 2.需要用户计算出 内存的大小
 * 3.malloc() 可能找不到可分配的内存 此时会返回0，所以需要检查是否成功
 * 4.obj对象需要程序员手动初始化，因为分配内存的时候 对象并没有调用构造函数，构造函数是编译器隐式调用的
 *
 * c中回收内存有以下几个问题:
 * 1.不会能调用析构函数，因为析构函数是隐式调用的
 * 2.需要手动调用 销毁的操作
 *
 * c++中为对象分配堆内存：MyType *fp = new MyType(1 , 2);
 * 上面这一句话有以下一些含义
 * 1.使用malloc精准的在堆上分配了 MyType需要的内存
 * 2.内部自动将内存地址转型为 Obj的指针
 * 3.内部检查了 malloc是否将内存分配成功了，如果分配失败会程序报错
 * 4.将(1 , 2) 传入对应的构造函数
 * 5.将内存地址 赋值给 this指针
 *
 * c++中回收内存：使用delete关键字
 * 1.delete只回收由new分配的内存
 */

