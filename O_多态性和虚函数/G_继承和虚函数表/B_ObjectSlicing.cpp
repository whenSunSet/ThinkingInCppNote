//
// Created by 何时夕 on 2018/1/7.
//
#include <iostream>
#include <string>
using namespace std;

class Pet {
    string pname;
public:
    Pet(const string &name) : pname(name) {}
    virtual string name() const {
        return pname;
    }
    virtual string description() const {
        return "This is " + pname;
    }
};

class Dog : public Pet {
    string favoriteActivity;
public:
    Dog(const string &name , const string &activity) : Pet(name) , favoriteActivity(activity){

    }
    string decription() const {
        return Pet::name() + " likes to " + favoriteActivity;
    }
};

void describe(Pet p) {
    cout << p.description() << endl;
}

int main() {
    Pet p("Alfred");
    Dog d("Fluffy" , "sleep");
    describe(p);
    describe(d);
}

/**
 * 虚函数在使用值传递的时候失效 因为切片：
 * 1.在使用引用传递的时候  是直接拷贝地址所以不会有问题
 * 2.而在值传递的时候 传入的对象 会被拷贝成转型的对象 然后进入到函数中，
 * 此时已经不是向上转型了  传入的类型就是 完完整整的一个基类，所以此时虚函数也不起作用了
 */

