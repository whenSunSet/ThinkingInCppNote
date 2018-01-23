//
// Created by 何时夕 on 2018/1/7.
//
#include <iostream>
using namespace std;

class Pet {
public:
    virtual void speak() const = 0;
    virtual void eat() const = 0;
};

void Pet::eat() const {
    cout << "Pet::eat()" << endl;
}

void Pet::speak() const {
    cout << "Pet::speak()" << endl;
}

class Dog : public Pet {
public:
    void speak() const {
        Pet::speak();
    }
    void eat() const {
        cout << "Dog::eat()" << endl;
    }
};

void a(Pet &p) {
    p.eat();
}
int main() {
    Dog simba;
    simba.speak();

    a(simba);
}

/**
 * 可以用非内联函数的形式 定义纯虚函数，唯一的用处就是可以在子类中被调用以减少重复的代码，
 * 其他特性没有改变
 */
