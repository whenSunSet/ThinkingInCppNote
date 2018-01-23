//
// Created by 何时夕 on 2018/1/6.
//

#include "../A_组合语法/A_Useful.h"
#include <iostream>
using namespace std;

class Y : public X {
    int i;
public:
    Y() {
        i = 0;
    }
    int change() {
        i = permute();
        return i;
    }
    void set(int ii) {
        i = ii;
        X::set(ii);
    }
};

int main() {
    cout << "sizeof(X) = " << sizeof(X) << endl;
    cout << "sizeof(Y) = " << sizeof(Y) << endl;
    Y D;
    D.change();
    D.read();
    D.permute();
    D.set(12);
}

/**
 * 继承有以下特点：
 * 1.Y继承了X 那么Y会拥有X的所有数据成员和成员函数，但是X中的私有成员对Y来说还是私有的，
 * 在这里 继承 和 组合没有什么区别
 * 2.在基类前面使用了一个public 是因为我们希望 X中的 public被Y接收之后还是public的
 */
