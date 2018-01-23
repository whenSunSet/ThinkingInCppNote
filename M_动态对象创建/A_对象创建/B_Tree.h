//
// Created by 何时夕 on 2018/1/5.
//

#ifndef THINKING_IN_C_B_TREE_H
#define THINKING_IN_C_B_TREE_H
#include <iostream>
using namespace std;
class Tree {
    int height;
public:
    Tree(int treeHeight) : height(treeHeight) {}
    ~Tree() {
        cout << "*";
    }
    friend ostream& operator<<(ostream &os , const Tree *t) {
        return os << "Tree height is: " << t->height << endl;
    }
};
#endif //THINKING_IN_C_B_TREE_H
