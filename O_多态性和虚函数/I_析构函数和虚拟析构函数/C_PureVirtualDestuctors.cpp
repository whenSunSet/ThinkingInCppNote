//
// Created by 何时夕 on 2018/1/9.
//
#include <iostream>
using namespace std;

class Pet {
public:
    virtual ~Pet() = 0;
};

Pet::~Pet() {
    cout << "Pet::~Pet()" << endl;
}

class Dog : public Pet {
public:
    ~Dog() {
        cout << "~Dog()" << endl;
    }
};

int main() {
    Pet *p = new Dog;
    delete(p);
}


