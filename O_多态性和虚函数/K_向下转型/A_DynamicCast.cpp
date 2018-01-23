//
// Created by 何时夕 on 2018/1/9.
//
#include <iostream>
using namespace std;

class Pet {
public:
    virtual ~Pet() {}
};
class Dog : public Pet {};
class Cat : public Pet {};

int main() {
    Pet *b = new Cat;
    Dog *d1 = dynamic_cast<Dog*>(b);
    Cat *d2 = dynamic_cast<Cat*>(b);
    cout << "d1 = " << (long)d1 << endl;
    cout << "d2 = " << (long)d2 << endl;
}

/**
 * dynamic_cast是一种安全的向下转型方式  如果转型不成功会返回 0，会多产生一些开销
 */
