//
// Created by 何时夕 on 2018/1/1.
//
#include <fstream>
#include <string>
using namespace std;
ofstream out("HowMany2.out");

class HowMany2 {
    string name;
    static int objectCount;
public:
    HowMany2(const string &id = "") : name(id) {
        ++objectCount;
        print("HowMany2()");
    }
    ~HowMany2() {
        --objectCount;
        print("~HowMany2()");
    }

    HowMany2(const HowMany2 &h) : name(h.name) {
        name += " copy";
        ++objectCount;
        print("HowMany2(const HowMany2&)");
    }

    void print(const string &msg = "") const {
        if(msg.size() != 0) {
            out << msg << endl;
        }

        out << '\t' << name << ": " << "objectCount = " << objectCount << endl;
    }
};

int HowMany2::objectCount = 0;

HowMany2 f(HowMany2 x) {
    x.print("x argument inside f()");
    out << "Returning from f()" << endl;
    return x;
}

int main() {
    HowMany2 h("h");
    out << "Entering f()" << endl;
    HowMany2 h2 = f(h);
    h2.print("h2 after call to f()");
    out << " Call f() , no return value" << endl;
    f(h);
    out << "After call to f()" << endl;
}

/**
 * 这里的 拷贝构造函数 就是为了解决 c++中 自定义类型值传递 和 自定义类返回值 默认使用位拷贝的问题 ，
 * 只要定义了 拷贝构造函数 那么 编译器就会在 上面这两种情况的时候 调用 这个构造函数来代替 位拷贝
 */

