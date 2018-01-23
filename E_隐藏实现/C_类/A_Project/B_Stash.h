//
// Created by 何时夕 on 2017/12/13.
//

#ifndef THINKING_IN_C_B_STASH_H
#define THINKING_IN_C_B_STASH_H
class Stash {
private:
    int size;
    int quantity;
    int next;
    unsigned char* storage;
    void inflate(int increase);
public:
    void initialize(int size);
    void cleanup();
    int add(void* element);
    void* fetch(int index);
    int count();
};

#endif //THINKING_IN_C_B_STASH_H
