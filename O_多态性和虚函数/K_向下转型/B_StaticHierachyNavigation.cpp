//
// Created by 何时夕 on 2018/1/9.
//
#include <iostream>
using namespace std;
class Shape {
public:
    virtual ~Shape() {};
};

class Circle : public Shape {};
class Square : public Shape {};
class Other {};

int main() {
    Circle c;
    Shape *s = &c;
    s = static_cast<Shape*>(&c);
    Circle *cp = 0;
    Square *sp = 0;
    if(typeid(s) == typeid(cp)) {
        cp = static_cast<Circle*>(s);
    }
    if(typeid(s) == typeid(sp)) {
        sp = static_cast<Square*>(s);
    }
    if(sp != 0) {
        cout << "It is a circle";
    }
    if(sp != 0) {
        cout << "It is a square";
    }
    Other *op2 = (Other*)s;

}
