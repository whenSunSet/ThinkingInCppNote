//
// Created by 何时夕 on 2018/1/23.
//
#include <iostream>
using namespace std;

class X {
public:
    class Trouble {};
    class Small : public Trouble {};
    class Big : public Trouble {};
    void f() {
        throw Big();
    }
};

int main() {
    X x;
    try {
        x.f();
    } catch (X::Trouble&) {
        cout << "caught Trouble" << endl;
    } catch (X::Small&) {
        cout << "caught Small" << endl;
    } catch (X::Big&) {
        cout << "caught Big" << endl;
    } catch (...) {
        cout << "caught all" << endl;
    } catch (...) {
        cout << "caught all and throw" << endl;
    }
    throw ;
}
// 匹配基类异常也和 java 类似，基类会将派生类的异常捕获 然后结束。建议基类异常放最后面，
// 并且异常捕获建议使用引用传递 防止对象切片
// ... 表示捕获所有异常
// 可以在捕获异常之后继续抛出异常
