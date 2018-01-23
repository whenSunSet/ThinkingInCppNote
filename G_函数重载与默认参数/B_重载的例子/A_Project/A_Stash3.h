//
// Created by 何时夕 on 2017/12/14.
//

#ifndef THINKING_IN_C_STASH3_H
#define THINKING_IN_C_STASH3_H
class Stash {
private:
    int size;
    int quantity;
    int next;
    unsigned char* storage;
    void inflate(int increase);

public:
    Stash(int size);
    Stash(int size , int initQuantity);
    ~Stash();
    int add(const void* element);
    void* fetch(int index);
    int count();
};

#endif //THINKING_IN_C_STASH3_H
