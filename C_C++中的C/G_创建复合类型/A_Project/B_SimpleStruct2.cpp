//
// Created by 何时夕 on 2017/12/10.
//
#include <iostream>
using namespace std;

typedef struct {
    char c;
    int i;
    float f;
    double d;
} Structure2;

// 如果需要提早使用 定义的 struct 那么可以这样
typedef struct SelfReferential{
    int i;
    SelfReferential* sr;
} SelfReferential;
int main(){
    Structure2 s1 , s2;

    s1.c = 'A';
    s1.i = 1;
    s1.f = 1.1f;
    s1.d = 1.1;

    s2.c = 'A';
    s2.i = 1;
    s2.f = 1.1f;
    s2.d = 1.1;

    SelfReferential s3 , s4;
    s3.i = 1;
    s3.sr = &s4;

    SelfReferential* sp = s3.sr;

    // struct 指针 可以通过 -> 直接访问内部数据
    sp->i = 1;
}

