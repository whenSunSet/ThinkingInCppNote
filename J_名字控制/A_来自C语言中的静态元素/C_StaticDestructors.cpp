//
// Created by 何时夕 on 2017/12/31.
//
#include <fstream>
using namespace std;

ofstream out("statdest.out");

class Obj {
    char c;
public:
    Obj(char cc) : c(cc) {
        out << "Obj::Obj() for" << c << endl;
    }
    ~Obj() {
        out << "Obj::~Obj() for" << c << endl;
    }
};

Obj a('a');

void f() {
    static Obj b('b');
}

void g() {
    static Obj c('c');
}

int main() {
    out << "inside main()" << endl;
    f();
    out << "leaving main()" << endl;
}
/**
 * 1. a 是全局Obj对象，所以其 初始化 在main之前 销毁在main之后
 * 2. b 是 局部静态对象 其初始化在 f() 第一次调用的时候  销毁也在main之后
 */

