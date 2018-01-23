//
// Created by 何时夕 on 2017/12/15.
//

#ifndef THINKING_IN_C_MEM_H
#define THINKING_IN_C_MEM_H
typedef unsigned char byte;
class Mem {
    byte* mem;
    int size;
    void ensureMinSize(int minSize);

public:
    Mem();
    Mem(int sz);
    ~Mem();
    int msize();
    byte* pointer();
    byte* pointer(int minSize);
};

#endif //THINKING_IN_C_MEM_H
