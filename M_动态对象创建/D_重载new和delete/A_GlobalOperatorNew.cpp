//
// Created by 何时夕 on 2018/1/6.
//
#include <cstdio>
#include <cstdlib>
using namespace std;

void* operator new(size_t sz) {
    printf("operator new: %d Bytes\n" , sz);
    void *m = malloc(sz);
    if(!m) {
        puts("out of memory");
    }
    return m;
}

void operator delete(void *m) {
    puts("operator delete");
    free(m);
}

class S {
    int i[100];
public:
    S() {
        puts("S::S()");
    }
    ~S() {
        puts("S::~S()");
    }
};

int main() {
    puts("creating & destroying an int");
    int *p = new int(47);
    delete p;
    puts("creating & destroying an s");
    S *s = new S;
    delete s;
    puts("creating & destroying an S[3]");
    S *sa = new S[3];
    delete []sa;
}
/**
 * 1.当调用一个new的时候做了两件事
 *      1.传入了一个 size_t 表示内存大小 然后分配了这么大的内存 最后返回了一个 void*
 *      2.调用该类的构造函数
 * 2.当调用了一个delete的时候做了两件事情
 *      1.调用该对象的析构函数
 *      2.传入了一个 void* 指针表示要delete的对象 然后 回收对象的内存
 * 3.在某些情况下 为了解决 堆内存碎片、嵌入式系统的环境 会为特定的类创建自己的
 * 内存分配器 此时可以重载该类的 new 和 delete
 * 4.记住在重载了 new 和 delete 之后会改变的只有一个操作 就是 分配和回收内存的方式 其他的都不变、
 * 5.当全局的 new 和 delete都不能满足整个系统的时候 可以重载全局的 new 和 delete，就像上面的代码一样
 * 上面不使用 cout 是因为cout的初始化也是使用 new的 所以这样会导致 死锁。
 * 6.全局的重载适用于所有对象在堆内存上面的分配，也包括了 内置数据类型
 */
