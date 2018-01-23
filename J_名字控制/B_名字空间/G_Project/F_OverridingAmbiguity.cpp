//
// Created by 何时夕 on 2017/12/31.
//
#include "B_NamespaceMath.h"
#include "E_NamespaceOverriding2.h"

Int::Integer Math::divide(Integer, Integer) {}
Int::Integer Calculation::divide(Integer, Integer) {}

void s() {
    using namespace Math;
    using namespace Calculation;
//    divide(1 , 2); 因为 Math 和 Calculation 中都有 这个函数 所以会有歧义
    Math::divide(1 , 2);
    Calculation::divide(2 , 3);
}

int main() {}

