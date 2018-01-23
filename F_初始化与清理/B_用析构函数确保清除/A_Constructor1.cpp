//
// Created by 何时夕 on 2017/12/13.
//
#include <iostream>
using namespace std;

class Tree {
private:
    int height;
public:
    Tree(int initialHeight);
    ~Tree();
    void grow(int years);
    void printsize();
};

Tree::Tree(int initialHeight) {
    height = initialHeight;
}

Tree::~Tree() {
    cout << "inside Tree destructor" << endl;
    printsize();
}

void Tree::grow(int years) {
    height += years;
}

void Tree::printsize() {
    cout << "Tree height is " << height << endl;
}

int main() {
    cout << "before opening brace" << endl;
    {
        Tree t(12);
        cout << "after Tree creation" << endl;
        t.printsize();
        t.grow(4);
        cout << "before closing brace" << endl;
    }
    cout << "after closing brace" << endl;
}
/**
 * 1.构造函数 和 析构函数 都是编译器 编译的时候 插入调用的。
 * 2.析构函数没有入参
 * 3.析构函数 在 变量作用域结束的时候被自动调用，调用了之后本对象的空间就被释放了，
 * 但是 成员指针指向的 内存不会被释放，所以这得看程序员 释放需要在析构函数中对其进行释放
 */

