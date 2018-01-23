//
// Created by 何时夕 on 2018/1/7.
//
#include <iostream>
#include <string>
using namespace std;

class Pet {
public:
    virtual string speak() const  {
        return "";
    }
};

class Dog : public Pet {
public:
    string speak() const {
        return "Bark!";
    }
};

int main() {
    Dog ralph;
    Pet *p1 = &ralph;
    Pet& p2 = ralph;

    Pet p3;
    cout << "p1->speak() = " << p1->speak() << endl;
    cout << "p2->speak() = " << p2.speak() << endl;
    cout << "p3->speak() = " << p3.speak() << endl;
}

/**
 * 晚绑定比早绑定效率低，所以不一定所有的虚函数都用的是 晚绑定，
 * 如果编译器能确定对象 的类型的话 那么 就会使用早绑定 就像上面的p3一样
 */
