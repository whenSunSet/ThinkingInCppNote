//
// Created by 何时夕 on 2017/12/11.
//

#ifndef THINKING_IN_C_CPPLIB_H
#define THINKING_IN_C_CPPLIB_H
struct Stash{
    int size;// 一个单位的字节大小
    int quantity;// 当前总共的单位数
    int next;// 当前的单位数
    // 这个字符指针可以用来当做 连续的字节块 来储存变量
    unsigned char* storage;
    void initialize(int size);
    void cleanup();
    int add(const void* element);
    void* fetch(int index);
    int count();
    void inflate(int increase);
};

/**
 * 1.c++ 中允许将 函数放入 struct 中
 * 2.不再需要传递 Stash，编译器会自动做这件事情
 * 3.编译器还会做的一件事就是 将 struct 中的函数 自动加上 前缀类似于 Stash_add() 这样一来命名重复也解决了
 */

#endif //THINKING_IN_C_CPPLIB_H
