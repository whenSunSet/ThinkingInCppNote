//
// Created by 何时夕 on 2018/1/7.
//
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FName2 : public ifstream {
    string fileName;
    bool named;
public:
    FName2() : named(false) {}
    FName2(const string &fname) : ifstream(fname.c_str()) , fileName(fname) {
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
};

int main() {
    FName2 file("C_FName2.cpp");
    cout << "name: " << file.name() << endl;
    string s;
    getline(file , s);
    file.seekg(-200 , ios::end);
    file.close();
}

/**
 * 要使用类的绝大部分功能 并且希望遵守 类的接口定义
 */
