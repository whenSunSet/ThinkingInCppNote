//
// Created by 何时夕 on 2018/1/9.
//

#ifndef PROJECT_P_C_B_C_TPTASH_H
#define PROJECT_P_C_B_C_TPTASH_H
template <class T , int incr = 10>
class PStash {
    int quantity;
    int next;
    T **storage;
    void inflate(int increase = incr);

public:
    PStash() : quantity(0) , next(0) , storage(0) {}
    ~PStash();
    int add(T* element);
    T* operator[](int index) const;
    T* remove(int index);
    int count() const {
        return next;
    }
};

template <class T , int incr>
int PStash<T , incr>::add(T *element) {
    if(next >= quantity) {
        inflate(incr);
    }
    storage[next++] = element;
    return (next - 1);
}

template <class T , int incr>
PStash<T , incr>::~PStash() {
    for (int i = 0; i < next; ++i) {
        delete storage[i];
        storage[i] = 0;
    }
    delete []storage;
}

template <class T , int incr>
T* PStash<T , incr>::operator[](int index) const {
    if(index < 0) {
        cout << "index 小于0 ，错误" << endl;
        return 0;
    }
    if(index >= next) {
        return 0;
    }
    if(storage[index] == 0) {
        cout << "该值为空" << endl;
        return 0;
    }
    return storage[index];
}

template <class T , int incr>
T* PStash<T , incr>::remove(int index) {
    T *v = operator[](index);
    if (v != 0) {
        storage[index] = 0;
    }
    return v;
}

template <class T , int incr>
void PStash<T , incr>::inflate(int increase) {
    const int psz = sizeof(T*);
    T** st = new T*[quantity + increase];
    memset(st , 0 , (quantity + increase) * psz);
    memcpy(st , storage , quantity * psz);
    quantity += increase;
    storage = st;
}
#endif //PROJECT_P_C_B_C_TPTASH_H
