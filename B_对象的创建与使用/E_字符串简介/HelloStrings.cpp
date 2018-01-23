//
// Created by 何时夕 on 2017/12/8.
//
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1 , s2;//空 string
    string s3 = "Hello, World.";//字符数组 初始化 string
    string s4("I am");//构造函数 初始化 string
    s2 = "Today";//延迟初始化string
    s1 = s3 + " " + s4; //使用 另外的string 来给 string初始化，+ 可以连接string 和 字符数组
    s1 += " 8 ";
    cout << s1 + s2 + "!" << endl; //cout 可以直接 输出 string
}


