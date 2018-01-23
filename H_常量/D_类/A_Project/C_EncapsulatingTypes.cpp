//
// Created by 何时夕 on 2017/12/18.
//
#include <iostream>
using namespace std;

class Integer {
    int i;
public:
    Integer(int ii = 0);
    void print();
};

Integer::Integer(int ii) : i(ii){}
void Integer::print() {
    cout << i << ' ';
}
int main() {
    Integer i[100];
    for (int i = 0; i < 100; ++i) {
        i[j].print();
    }
}

