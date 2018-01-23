//
// Created by 何时夕 on 2017/12/31.
//
#include <iostream>
using namespace std;

// 函数内部的 static变量  只会在函数第一次调用的时候被初始化，之后这个变量不会在变化，
// 注意 任何 局部static变量 都会有 多线程的问题 这个要记住
char oneChar(const char *charArray = 0) {
    static const char* s;

    if(charArray) {
        s = charArray;
        return *s;
    } else {
        cout << "un-initialized s";
    }

    if(*s == '\0') {
        return 0;
    }
    return *s++;
}

char *a = "nsdbjnbacjlbdsbldblbvsl";

int main() {
    oneChar();
    oneChar(a);
    char c;
    while ((c = oneChar()) != 0) {
        cout << c <<endl;
    }
}
