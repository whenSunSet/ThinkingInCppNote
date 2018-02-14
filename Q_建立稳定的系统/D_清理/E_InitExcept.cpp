//
// Created by 何时夕 on 2018/2/6.
//
#include <iostream>
using namespace std;

class Base {
    int i;
public:
    class BaseExcept {};
    Base(int i) : i(i) {
        throw BaseExcept();
    }
};

class Derived : public Base {
public:
    class DerivedExcept {
        const char *msg;
    public:
        DerivedExcept(const char *msg) : msg(msg) {}
        const char* what() const {
            return msg;
        }
    };

    Derived(int i) try : Base(i) {
        cout << "wont print" << endl;
    } catch (BaseExcept&) {
        throw DerivedExcept("Base subobject threw");
    }
};

int main() try {
    throw "main";
} catch (const char *msg) {
    cout << msg << endl;
    return 1;
}

// 如果希望在成员实例在初始化的时候被catch，那么可以使用上面这种操作
