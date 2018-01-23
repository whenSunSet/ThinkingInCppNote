//
// Created by 何时夕 on 2017/12/31.
//
#include "A_NamespaceInt.h"

void arithmetic() {
    // 可以将一个 命名空间的名称 全部引入一个函数中
    using namespace Int;
    Integer x;
    x.setSign(positive);
}

int main() {}

