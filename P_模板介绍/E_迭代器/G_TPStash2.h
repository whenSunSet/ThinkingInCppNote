//
// Created by 何时夕 on 2018/1/22.
//

#ifndef PROJECT_P_E_D_G_TPSTASH2_H
#define PROJECT_P_E_D_G_TPSTASH2_H

#include <cstdlib>
template <class T , int incr =20>
class PStash {
    int quantity;
    int next;
    T **storage;

    void inflate(int increase = incr);

public:
    PStash() : quantity(0), storage(0), next(0) {}

    ~PStash();

    int add(T *element);

    T *operator[](int index) const;

    T *remove(int index);

    int count() const {
        return next;
    }

    class iterator;

    friend class iterator;

    class iterator {
        PStash &ps;
        int index;
    public:
        iterator(PStash &pStash) : ps(pStash) , index(0) {}
        iterator(PStash &pStash , bool) : ps(pStash) , index(pStash.next) {}
        iterator(const iterator &rv) : ps(rv.ps) , index(rv.index) {}
        iterator& operator=(const iterator &rv) {
            ps = rv.ps;
            index = rv.index;
            return *this;
        }
        iterator& operator++() {
            return *this;
        }
        iterator& operator++(int) {
            return operator++();
        }
        iterator& operator--() {
            return *this;
        }
        iterator& operator--(int) {
            return operator--();
        }
        iterator& operator+=(int amount) {
            index += amount;
            return *this;
        }
        iterator& operator-=(int amount) {
            index -= amount;
            return *this;
        }
        iterator& operator+(int amount) const {
            iterator ret(*this);
            ret += amount;
            return ret;
        }
        T* current() const {
            return ps.storage[index];
        }
        T* operator*() const {
            return current();
        }
        T* operator->() const {
            return current();
        }
        T* remove() {
            return ps.remove(index);
        }
        bool operator==(const iterator &rv) const {
            return index == rv.index;
        }
        bool operator!=(const iterator &rv) const {
            return index != rv.index;
        }
    };
    iterator begin() {
        return iterator(*this);
    }
    iterator end() {
        return iterator(*this , true);
    }
};

template <class T , int incr>
PStash<T , incr>::~PStash() {
    for (int i = 0; i < next; ++i) {
        delete storage[i];
        storage[i] = 0;
    }
    delete []storage;
}

template <class T , int incr>
int PStash<T , incr>::add(T *element) {
    if(next >= quantity) {
        inflate();
    }
    storage[next++] = element;
    return (next - 1);
}

template <class T , int incr>
inline T* PStash<T , incr>::operator[](int index) const {
    if(index >= next) {
        return 0;
    }
    return storage[index];
}

template <class T , int incr>
T* PStash<T , incr>::remove(int index) {
    T *v = operator[](index);
    storage[index] = 0;
    return v;
}

template <class T , int incr>
void PStash<T , incr>::inflate(int increase) {
    const int tsz = sizeof(T*);
    T** st = new T*[quantity + increase];
    memset(st , 0 , (quantity + increase) * tsz);
    memcpy(st , storage , quantity * tsz);
    quantity += increase;
    delete []storage;
    storage = st;
}

