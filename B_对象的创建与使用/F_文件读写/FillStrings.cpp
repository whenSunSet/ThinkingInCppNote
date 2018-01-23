//
// Created by 何时夕 on 2017/12/8.
//
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main(){
    // string 具有动态性  不用担心string的内存分配
    // 只要将新的内容添加进去，string会自动扩展内存
    ifstream in("FillStrings.cpp");//创建文件的输入流
    string s , line;
    while (getline(in , line)){//不断从输入流中获取数据
        s += line + "\n";//将输入流的数据给string
    }
    cout << s;
}

