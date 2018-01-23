//
// Created by 何时夕 on 2017/12/11.
//

#ifndef THINKING_IN_C_SIMPLE_H
#define THINKING_IN_C_SIMPLE_H
struct Simple {
    int i , j , k;
    void initailize() {
        i = j = k = 0;
    }
};
#endif //THINKING_IN_C_SIMPLE_H
/**
 * 头文件有几个限制
 * 1.函数和变量的声明可以重复
 * 2.struct 和 class 不能重复 定义
 * 3.c++ 中 在使用和定义函数的时候 头文件 是必须的，如果不加就会编译出错。
 */
