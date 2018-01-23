//
// Created by 何时夕 on 2017/12/15.
//
/**
 * 1.c++会对 指针的赋值进行类型检查
 * 2.可以把 非const对象赋值给 const指针
 * 3.不能把 const对象赋值给 指向 非const类型的指针，因为这样可以通过 被赋值的指针修改 const对象
 * 4.当然 只要使用了类型转换 那么久可以打破3，但是这是不好的习惯
 */
#include <iostream>
using namespace std;
int d = 1;
const int e = 2;
int *u = &d;
//int *v = &e; 编译报错 const int  和 int 不是一种类型
int *w = (int*)&e;// 将类型强制转换了之后 就能被 赋值了

char *cp = "howdy";// 编译警告
char cps[] = "howdy";

int main() {
    cout << cp << endl;
//    *cp = 'a';"howdy"会被编译器转换成 常量字符数组，所以只要 cp改动了任意字符就会运行时报错。
    cps[0] = 'a';// 要修改的话 可以将其转换成 字符数组
    cout << cps << endl;
}

