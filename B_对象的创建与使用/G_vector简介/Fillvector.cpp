//
// Created by 何时夕 on 2017/12/8.
//
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> v;
    ifstream in("Fillvector.cpp");//创建文件的输入流
    string line;
    while (getline(in , line)){//不断从输入流中获取数据
        v.push_back(line);
    }

    for (int i = 0; i < v.size(); ++i) {
        cout << i << ": " << v[i] << endl;//使用重载操作符的方式 获取 vector中数据
    }
}


