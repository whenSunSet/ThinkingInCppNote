//
// Created by 何时夕 on 2018/1/5.
//
#include <iostream>
using namespace std;

class Object {
    void *data;
    const int size;
    const char id;
public:
    Object(int sz , char c) : size(sz) , id(c) {
        data = new char[size];
        cout << "Constructing object " << id << ", size = " << size << endl;
    }
    ~Object() {
        cout << "Destructing object " << id << endl;
        delete []data;
    }
};

int main() {
    Object *a = new Object(40 , 'a');
    delete a;
    void *b = new Object(40 , 'b');
    delete b;
}
/**
 * 如果 delete 一个 void* 那么会造成 void* 指向的对象的 析构函数不会被调用，因为void*的对象信息都没了
 * 此时如果 void*指向的对象简单还好，如果其比较复杂就像上面一样 在析构函数中进行了 内存释放，那么此时就会
 * 出现内存泄漏
 */

