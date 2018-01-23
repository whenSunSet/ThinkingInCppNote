//
// Created by 何时夕 on 2017/12/10.
//

#ifndef THINKING_IN_C_A_CLIB_H
#define THINKING_IN_C_A_CLIB_H

typedef struct CStashTag{
    int size;// 一个单位的字节大小
    int quantity;// 当前总共的单位数
    int next;// 当前的单位数
    // 这个字符指针可以用来当做 连续的字节块 来储存变量
    unsigned char* storage;
} CStash;

void initialize(CStash* s , int size);
void cleanup(CStash* s);
int add(CStash* s , const void* element);
void* fetch(CStash* s , int index);
int count(CStash* s);
void inflate(CStash* s , int increase);
#endif //THINKING_IN_C_A_CLIB_H
