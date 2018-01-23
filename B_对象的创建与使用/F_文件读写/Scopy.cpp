//
// Created by 何时夕 on 2017/12/8.
//
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream in("Scopy.cpp");//创建文件的输入流
    ofstream out("Scopy2.cpp");//创建文件的输出流
    string s;
    while (getline(in , s)){//不断从输入流中获取数据
        out << s << "\n";//将从输入流中获取的数据给输出流 直至终止
    }
}

