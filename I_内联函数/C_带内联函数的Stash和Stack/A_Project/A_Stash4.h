//
// Created by 何时夕 on 2017/12/24.
//

#ifndef THINKING_IN_C_STASH4_H
#define THINKING_IN_C_STASH4_H
#include <cassert>
class Stash {
private:
    int size;
    int quantity;
    int next;
    unsigned char* storage;
    void inflate(int increase);

public:
    Stash(int sz) : size(size) , quantity(0) , next(0) , storage(0) {}
    Stash(int sz , int initQuantity) : size(sz) , quantity(0) , next(0) , storage(0) {
        inflate(initQuantity);
    }
    ~Stash() {
        if(storage != 0) {
            delete []storage;
        }
    }
    int add(const void* element);
    void* fetch(int index) const {
        assert(0 <= index);
        if(index >= next) {
            return 0;
        }

        return &(storage[index * size]);
    }
    int count() const { return next; }
};
/**
 * 注意小函数作为内联函数工作是理想的，最大的函数还是保留为非内联函数
 */
#endif //THINKING_IN_C_STASH4_H
