//
// Created by 何时夕 on 2018/1/6.
//
#include <iostream>
#include <new>
using namespace std;

class NoMemory {
public:
    NoMemory() {
        cout << "NoMemory::NoMemory()" << endl;
    }
    void* operator new(size_t sz) throw(bad_alloc) {
        cout << "NoMemory::operator new " << endl;
        throw bad_alloc();
    }
};

int main() {
    NoMemory *nm = 0;
    try {
        nm = new NoMemory;
    } catch (bad_alloc) {
        cerr << "Out of memory exception" << endl;
    }
    cout << "nm = " << nm << endl;
}

/**
 * 如果new的内存分配失败了 那么接下来的构造函数将不会调用
 * 将 *nm初始化为0 很有用，这样可以防止 内存分配失败的时候 我们误用。
 */

