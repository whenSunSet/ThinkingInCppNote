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
    int strcmp(const Stringc &S) const {
        return ::strcmp(s.c_str() , S.s.c_str());
    }
};

int main() {
    Stringc s1("hello") , s2("there");
    s1.strcmp(s2);
}

