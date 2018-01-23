//
// Created by 何时夕 on 2017/12/31.
//
#include "A_UsingDeclaration.h"
void h() {
    using namespace U;
    using V::f;

    f();
    U::f();
}

