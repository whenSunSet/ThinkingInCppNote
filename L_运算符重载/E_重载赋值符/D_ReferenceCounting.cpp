//
// Created by 何时夕 on 2018/1/4.
//
#include <string>
#include <iostream>
using namespace std;
class Dog {
    string nm;
    int refcount;
    Dog(const string &name) : nm(name) , refcount(1) {
        cout << "Creating Dog: " << *this << endl;
    }
public:
    static Dog* make(const string &name) {
        return new Dog(name);
    }
    Dog(const Dog& d) : nm(d.nm + "copy") , refcount(1) {
        cout << "Dog copy-constructor: " << *this << endl;
    }
    ~Dog() {
        cout << "Deleting Dog: " << *this << endl;
    }
    void attach() {
        ++refcount;
        cout << "Attached Dog: " << *this << endl;
    }
    void detach() {
        cout << "Detaching Dog: " << *this << endl;
        if(--refcount == 0) {
            delete this;
        }
    }
    Dog* unalias() {
        cout << "Unaliasing Dog: " << *this << endl;
        if(refcount == 1) {
            return this;
        }
        --refcount;
        return new Dog(*this);
    }
    void rename(const string &newName) {
        nm = newName;
        cout << "Dog renamed to: " << *this << endl;
    }
    friend ostream& operator<<(ostream &os , const Dog &d) {
        return os << "[" << d.nm << "] , rc = " << d.refcount;
    }
};
class DogHouse {
    Dog *p;
    string houseName;
public:
    DogHouse(Dog *dog , const string &house) : p(dog) , houseName(house) {
        cout << "Creating DogHouse: " << *this << endl;
    }
    DogHouse(const DogHouse &dh) : p(dh.p) , houseName("Copy-constructor " + dh.houseName) {
        p->attach();
        cout << "DogHouse copy-constructor: " << *this << endl;
    }
    DogHouse& operator=(const DogHouse &dh) {
        if(&dh != this) {
            houseName = dh.houseName + " assigned";
            p->detach();
            p = dh.p;
            p->attach();
        }
        cout << "DogHouse oprator = : " << *this << endl;
        return *this;
    }
    ~DogHouse() {
        cout << "DogHouse destructor: " << *this << endl;
        p->detach();
    }
    void renameHouse(const string &newName) {
        houseName = newName;
    }
    void unalias() {
        p = p->unalias();
    }
    void renameDog(const string &newName) {
        unalias();
        p->rename(newName);
    }
    Dog* getDog() {
        unalias();
        return p;
    }
    friend ostream& operator<<(ostream &os , const DogHouse &dh) {
        return os << "[" << dh.houseName << "] contains" << *dh.p;
    }
};
int main() {
    DogHouse fidos(Dog::make("Fido") , "FidoHouse") , spots(Dog::make("Spot") , "SpotHouse");
    cout << "Entering copy-constructor" << endl;
    DogHouse bobs(fidos);
    cout << "After copy-constructing bobs" << endl;
    cout <<"fodos:" << fidos << endl;
    cout <<"spots:" << spots << endl;
    cout <<"bobs:" << bobs << endl;
    cout <<"Entering spots = fidos" << endl;
    spots = fidos;
    cout << "After spots = fidos" << endl;
    cout << "spots:" << spots << endl;
    cout << "Entering self-assignment" << endl;
    bobs = bobs;
    cout << "After self-assignment" << spots << endl;
    cout << "bobs:" << spots << endl;
    cout << "Entering rename{\" Bob \"}" << endl;
    bobs.getDog()->rename("Bob");
    cout << "After rename{\" Bob \"}" << endl;
}
/**
 * 智能指针
 * 1.如果对象中一个指针指向的对象  复制成本太高 那么就使用智能指针 是得多个指针指向同一个对象
 * 2.一旦有一个对象需要修改指针指向的对象内容的话  那么就将这个指针指向的对象 复制一份 而不修改原来的内容
 */
