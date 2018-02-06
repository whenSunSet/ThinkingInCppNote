//
// Created by 何时夕 on 2018/1/23.
//
#include <iostream>
using namespace std;
class E1 {};
class E2 {
public:
    E2(const E1&) {}
};

void f() {
    throw E1();
}

int main() {
    try {
        f();
    } catch (E2&) {
        cout << "inside catch(E2)" << endl;
    } catch (E1&) {
        cout << "inside catch(E1)" << endl;
    }
}
// 异常匹配类似java ，按顺序匹配异常 并且不会遵循c++的自动转型规则
