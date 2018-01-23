//
// Created by 何时夕 on 2017/12/8.
//
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> words;
    ifstream in("GetWords.cpp");//创建文件的输入流
    string word;
    while (in >> word){//重载操作符的方式从 输入流in 中一个个获取单词 以 空格为分割
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); ++i) {
        cout << i << ": " << words[i] << endl;//使用重载操作符的方式 获取 vector中数据
    }
}


