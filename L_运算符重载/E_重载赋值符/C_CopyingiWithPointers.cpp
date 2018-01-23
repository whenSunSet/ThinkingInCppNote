//
// Created by 何时夕 on 2018/1/4.
//
#include <string>
#include <iostream>
using namespace std;
class Dog {
    string nm;
public:
    Dog(const string &name) : nm(name) {
        cout << "Creating Dog!" << *this << endl;
    }
    Dog(const Dog *dp , const string & msg) : nm(dp->nm + msg) {
        cout << "Copied dog " << *this << " from " << *dp << endl;
    }
    ~Dog() {
        cout << "Deleting Dog: " << *this << endl;
    }
    void rename(const string &newName) {
        nm = newName;
        cout << "Dog renamed to: " << *this << endl;
    }
    friend ostream& operator<<(ostream &os , const Dog &d) {
        return os << "[" << d.nm << "]";
    }
};

class DogHouse {
    Dog *p;
    string houseName;
public:
    DogHouse(Dog *dog , const string &house) : p(dog) , houseName(house) {}
    DogHouse(const DogHouse &dh) : p(new Dog(dh.p , " copy-constructed")) ,
                                   houseName(dh.houseName + " copy-constructed") {}
    DogHouse& operator=(const DogHouse &dh) {
        if(&dh != this) {
            p = new Dog(dh.p , " assigned");
            houseName = dh.houseName + " assigned";
        }
        return *this;
    }
    void renameHouse(const string &newName) {
        houseName = newName;
    }
    Dog* getDog() const {
        return p;
    }
    ~DogHouse() {
        delete p;
    }
    friend ostream& operator<<(ostream &os , const DogHouse &dh) {
        return os << "[" << dh.houseName << "] contain " << *dh.p;
    }
};

int main() {
    DogHouse fidos(new Dog("Fido") , "FidoHouse");
    cout << fidos << endl;
    DogHouse fidos2 = fidos;
    cout << fidos2 << endl;
    fidos2.getDog()->rename("Spot");
    fidos2.renameHouse("SpotHouse");
    cout << fidos2 << endl;
    fidos = fidos2;
    cout << fidos << endl;
    fidos.getDog()->rename("Max");
    fidos2.renameHouse("MaxHouse");
}

/**
 * 如果在对象 使用 = 赋值的时候 或者 初始化的时候，对象存在指针的话 最简单的方式就是 拷贝一切指针指向的东西。
 */

