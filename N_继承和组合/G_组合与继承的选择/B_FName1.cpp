//
// Created by 何时夕 on 2018/1/7.
//
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// 如果我们只是需要使用类的部分功能 并且不需要遵守其接口 那么可以使用组合
class FName1 {
    ifstream file;
    string fileName;
    bool named;
public:
    FName1() : named(false) {}
    FName1(const string &fname) : fileName(fname) , file(fname.c_str()) {
        named = true;
    }
    string name() const {
        return fileName;
    }
    void name(const string &newName) {
        if(named) {
            return;
        }
        fileName = newName;
        named = true;
    }
    operator ifstream&() {
        return file;
    }
};

int main() {
    FName1 file("B_FName1.cpp");
    cout << file.name() << endl;
//    file.close; 虽然类中定义了 自动类型转换函数 但是其只在函数调用的时候进行，成员选择期间不进行
}


