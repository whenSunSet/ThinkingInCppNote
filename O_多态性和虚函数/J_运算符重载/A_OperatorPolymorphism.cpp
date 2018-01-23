//
// Created by 何时夕 on 2018/1/9.
//
#include <iostream>
using namespace std;

class Matrix;
class Scalar;
class Vector;

class Math {
public:
    virtual Math& operator*(Math &rv) = 0;
    virtual Math& multiply(Matrix*) = 0;
    virtual Math& multiply(Scalar*) = 0;
    virtual Math& multiply(Vector*) = 0;
    virtual ~Math() {}
};

class Matrix : public Math {
    Math& operator*(Math &rv) {
        return rv.multiply(this);
    }
    Math& multiply(Matrix*) {
        cout << "Matrix * Matrix" << endl;
        return *this;
    }
    Math& multiply(Scalar*) {
        cout << "Matrix * Scalar" << endl;
        return *this;
    }
    Math& multiply(Vector*) {
        cout << "Matrix * Vector" << endl;
        return *this;
    }
};

class Scalar : public Math {
    Math& operator*(Math &rv) {
        return rv.multiply(this);
    }
    Math& multiply(Matrix*) {
        cout << "Scalar * Matrix" << endl;
        return *this;
    }
    Math& multiply(Scalar*) {
        cout << "Scalar * Scalar" << endl;
        return *this;
    }
    Math& multiply(Vector*) {
        cout << "Scalar * Vector" << endl;
        return *this;
    }
};

class Vector : public Math {
    Math& operator*(Math &rv) {
        return rv.multiply(this);
    }
    Math& multiply(Matrix*) {
        cout << "Vector * Matrix" << endl;
        return *this;
    }
    Math& multiply(Scalar*) {
        cout << "Vector * Scalar" << endl;
        return *this;
    }
    Math& multiply(Vector*) {
        cout << "Vector * Vector" << endl;
        return *this;
    }
};

int main() {
    Matrix m;
    Vector v;
    Scalar s;
    Math *math[] = {&m , &v , &s};

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            Math &m1 = *math[i];
            Math &m2 = *math[j];
            m1 * m2;
        }
    }
}


