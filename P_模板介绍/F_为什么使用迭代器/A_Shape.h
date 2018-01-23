//
// Created by 何时夕 on 2018/1/23.
//

#ifndef PROJECT_P_E_E_A_SHAPE_H
#define PROJECT_P_E_E_A_SHAPE_H

#include <iostream>
#include <string>
class Shape {
public:
    virtual void draw() = 0;
    virtual void erase() = 0;
    virtual ~Shape() {};
};

class Circle : public Shape {
public:
    Circle() {}
    ~Circle() {
        std::cout << "Circle::~Circle\n";
    }
    void draw() {
        std::cout << "Circle::draw\n";
    }
    void erase() {
        std::cout << "Circle::erase\n";
    }
};

class Square : public Shape {
public:
    Square() {}
    ~Square() {
        std::cout << "Square::~Circle\n";
    }
    void draw() {
        std::cout << "Square::draw\n";
    }
    void erase() {
        std::cout << "Square::erase\n";
    }
};

class Line : public Shape {
public:
    Line() {}
    ~Line() {
        std::cout << "Line::~Circle\n";
    }
    void draw() {
        std::cout << "Line::draw\n";
    }
    void erase() {
        std::cout << "Line::erase\n";
    }
};

#endif //PROJECT_P_E_E_A_SHAPE_H
