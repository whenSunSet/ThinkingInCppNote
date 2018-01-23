//
// Created by 何时夕 on 2018/1/9.
//

template <class T>
class Array {
    enum {
        size = 100
    };
    T A[size];
public:
    T& operator[](int index);
};

template <class T>
T& Array<T>::operator[](int index) {
    return A[index];
}

int main() {
    Array<float > fa;
    fa[0] = 1.414;
}
