//
// Created by 何时夕 on 2018/1/9.
//
#include <iostream>
#include <string>
using namespace std;

class PetFood {
public:
    virtual string foodType() const  = 0;
};

class Pet {
public:
    virtual string type() const = 0;
    virtual PetFood* eats() = 0;
};

class Bird : public Pet {
public:
    string type() const {
        return "Bird";
    }
    class BirdFood : public PetFood {
    public:
        string foodType() const {
            return "Bird Food";
        }
    };
    PetFood* eats() {
        return &bf;
    }
private:
    BirdFood bf;
};

class Cat : public Pet {
public:
    string type() const {
        return "Cat";
    }
    class CatFood : public PetFood {
    public:
        string foodType() const {
            return "Birds";
        }
    };
    CatFood* eats() {
        return &cf;
    }
private:
    CatFood cf;
};

int main() {
    Bird b;
    Cat c;
    Pet *p[] = {&b , &c};

    for (int i = 0; i < (sizeof(p) / sizeof(*p)); ++i) {
        cout << p[i]->type() << " eats " << p[i]->eats()->foodType() << endl;
    }
    Cat::CatFood *cf = c.eats();
    Bird::BirdFood *bf;
//    bf = b.eats();
    bf = dynamic_cast<Bird::BirdFood*>(b.eats());
}
/**
 * 1.虚函数在子类中重写 返回值只要是 基类或者其子类就行 类似java
 * 2.虚函数在构造函数中调用的时候  虚函数机制将不起作用 调用的只是本地版本，因为此时子类的虚函数表还没初始化
 * 这就解释了 java中的问题
 *
 */
