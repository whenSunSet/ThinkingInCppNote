//
// Created by 何时夕 on 2018/1/4.
//
#include <cstring>
#include <cstdlib>
#include <string>
using namespace std;
class Stringc {
    string s;
public:
    Stringc(const string &str = "") : s(str) {}
    operator const char*() const {
        return s.c_str();
    }
};

int main() {
    Stringc s1("hello") , s2("there");
    strcmp(s1 , s2);
    strspn(s1 , s2);
}
/**
 * 自动类型转换还会有以下问题
 * 1.如果既有 重载操作符的自动类型转换 又有 构造函数的自动类型转换 那么编译器就不知道用哪个了 所以最好只写一个
 * 2.如果 A 能自动转换到B和C  并且又有 B和C 的重载函数 那么 编译器也不知道选择哪个重载函数调用了
 */
