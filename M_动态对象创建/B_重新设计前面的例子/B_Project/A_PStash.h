//
// Created by 何时夕 on 2018/1/5.
//
/**
 * 对指针清理的责任:
 * 1.因为 Stash 和 Stack 具有储存所有中类的对象的灵活性 所以会使用void指针，这就意味着一个指针从容器中
 * 返回的时候需要被转化成适合的对象，要不然在delete的时候就容易内存泄漏
 * 2.delete只能由 用户程序员调用，因为容器内并不知道储存对象的类型
 * 3.容器内的对象的指针指向的内存 不能是栈和堆的内存混用，所以必须全部储存的是 堆内存
 * 4.要在Stash中全部的对象指针都被 回收了内存 可以使用 void* 数组的形式来实现
 */

#ifndef THINKING_IN_C_A_PSTASH_H
#define THINKING_IN_C_A_PSTASH_H
class PStash {
    int quantity;
    int next;
    void **storage;
    void inflate(int increase);
public:
    PStash() : quantity(0) , storage(0) , next(0) {

    }
    ~PStash();
    int add(void *element);
    void *operator[](int index) const ;
    void *remove(int index);
    int count() const {
        return next;
    }
};

#endif //THINKING_IN_C_A_PSTASH_H
