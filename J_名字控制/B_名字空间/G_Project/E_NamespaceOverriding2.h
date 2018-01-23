//
// Created by 何时夕 on 2017/12/31.
//

#ifndef THINKING_IN_C_E_NAMESPACEOVERRIDING2_H
#define THINKING_IN_C_E_NAMESPACEOVERRIDING2_H

#include "A_NamespaceInt.h"
namespace Calculation {
    using namespace Int;
    // 引入命名空间的时候 名字可能会 产生冲突，但是是在使用的时候产生冲突
    Integer divide(Integer , Integer);
}

#endif //THINKING_IN_C_E_NAMESPACEOVERRIDING2_H
