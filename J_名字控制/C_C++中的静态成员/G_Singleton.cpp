//
// Created by 何时夕 on 2017/12/31.
//
#include <iostream>
using namespace std;

class Egg {
    static Egg e;
    int i ;
    // 这里类似java的单例 私有的构造函数
    Egg(int ii) : i(ii) {}
    Egg(const Egg&);
public:
    static Egg *instance() {
        return &e;
    }
    int val() const {
        return i;
    }
};

Egg Egg::e(47);

int main() {
//    Egg x(); 没有构造函数可以使用
    cout << Egg::instance()->val() << endl;
}

