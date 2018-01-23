//
// Created by 何时夕 on 2017/12/8.
//
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int > v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << ", ";
        cout << endl;
    }
    for (int i = 0; i < v.size(); ++i) {
        //[] 重载符  不仅能取数据， 还能存数据
        v[i] = v[i] * 10;
    }
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << ", ";
        cout << endl;
    }
}

