//
// Created by 何时夕 on 2018/1/9.
//
#include <iostream>
using namespace std;
template <class T>
class Array {
    enum {
        size = 100
    };
    T A[size];
public:
    T& operator[](int index) {
        return A[index];
    }
};

int main() {
    Array<int> ia;
    Array<float> fa;
    for (int i = 0; i < 20; ++i) {
        ia[i] = i * i;
        fa[i] = float(i) * float(i);
    }
    for (int j = 0; j < 20; ++j) {
        cout << j << ": " << ia[j] << ", " << fa[j] << endl;
    }
}
