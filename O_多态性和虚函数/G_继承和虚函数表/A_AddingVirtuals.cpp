//
// Created by 何时夕 on 2018/1/7.
//
#include <iostream>
#include <string>
using namespace std;

class Pet {
    string pname;
public:
    Pet(const string &petName) : pname(petName) {}
    virtual string name() const {
        return pname;
    }
    virtual string speak() const {
        return "";
    }
};

class Dog : public Pet {
    string name;
public:
    Dog(const string &petName) : Pet(petName) {}
    virtual string sit() const {
        return Pet::name() + "sits";
    }
    string speak() const {
        return Pet::name() + " says 'Bark!'";
    }
};

int main() {
    Pet *p[] = {
            new Pet("generic") , new Dog("bob")
    };
    cout << "p[0]->speak() = " << p[0]->speak() << endl;
    cout << "p[1]->speak() = " << p[1]->speak() << endl;
//    cout << "p[1]->sit() = " << p[1]->sit() << endl;
}

/**
 * 如果派生类添加了 虚函数 那么会有下面几个影响：
 * 1.派生类的虚函数表中 依次会是：基类的虚函数(如果重定义了就是本类的函数)、本类的虚函数
 * 2.向上转型之后 不能再调用 派生类的虚函数了
 */


