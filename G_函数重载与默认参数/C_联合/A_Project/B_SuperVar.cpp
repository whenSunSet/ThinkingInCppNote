//
// Created by 何时夕 on 2017/12/14.
//
#include <iostream>
using namespace std;

class SuperVar {
    enum {
        character,
        integer,
        floating_point
    } vartype;
    union {
        char c;
        int i;
        float f;
    };
public:
    SuperVar(char c);
    SuperVar(int i);
    SuperVar(float f);
    void print();
};

SuperVar::SuperVar(int i) {
    vartype = integer;
    this->i = i;
}

SuperVar::SuperVar(char c) {
    vartype = character;
    this->c = c;
}

SuperVar::SuperVar(float f) {
    vartype = floating_point;
    this->f = f;
}

void SuperVar::print() {
    switch (vartype) {
        case character:
            cout << "character: " << c << endl;
            break;
        case integer:
            cout << "integer: " << i << endl;
            break;
        case floating_point:
            cout << "floating_point: " << f << endl;
            break;
    }
}

int main() {
    SuperVar A('c') , B(12) , C(1.44f);
    A.print();
    B.print();
    C.print();
}

/**
 * 1.enum 的类型名是可选的
 * 2.union 没有类型名 和 标识符 这叫 匿名联合，外部的class 可以直接像访问变量一样访问 union中的变量
 * 3.如果 union 在所有函数和 类外面 ，那么需要被声明为 static
 * 4.如果 匿名的union 被直接定义在了 函数中 ， 那么可以像访问 局部变量一样访问他。
 */

