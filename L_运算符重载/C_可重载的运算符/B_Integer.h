//
// Created by 何时夕 on 2018/1/2.
//

#ifndef THINKING_IN_C_B_INTEGER_H
#define THINKING_IN_C_B_INTEGER_H
#include <iostream>

class Integer {
    long i;
public:
    Integer(long ll = 0) : i(ii) {}
    friend const Integer operator+(const Integer &left , const Integer &right);
    friend const Integer operator-(const Integer &left , const Integer &right);
    friend const Integer operator*(const Integer &left , const Integer &right);
    friend const Integer operator/(const Integer &left , const Integer &right);
    friend const Integer operator%(const Integer &left , const Integer &right);
    friend const Integer operator^(const Integer &left , const Integer &right);
    friend const Integer operator&(const Integer &left , const Integer &right);
    friend const Integer operator|(const Integer &left , const Integer &right);
    friend const Integer operator<<(const Integer &left , const Integer &right);
    friend const Integer operator>>(const Integer &left , const Integer &right);

    friend Integer& operator+=(Integer &left , const Integer &right);
    friend Integer& operator-=(Integer &left , const Integer &right);
    friend Integer& operator*=(Integer &left , const Integer &right);
    friend Integer& operator/=(Integer &left , const Integer &right);
    friend Integer& operator%=(Integer &left , const Integer &right);
    friend Integer& operator^=(Integer &left , const Integer &right);
    friend Integer& operator&=(Integer &left , const Integer &right);
    friend Integer& operator|=(Integer &left , const Integer &right);
    friend Integer& operator>>=(Integer &left , const Integer &right);
    friend Integer& operator<<=(Integer &left , const Integer &right);

    friend int operator==(const Integer &left , const Integer &right);
    friend int operator!=(const Integer &left , const Integer &right);
    friend int operator<(const Integer &left , const Integer &right);
    friend int operator>(const Integer &left , const Integer &right);
    friend int operator<=(const Integer &left , const Integer &right);
    friend int operator>=(const Integer &left , const Integer &right);
    friend int operator&&(const Integer &left , const Integer &right);
    friend int operator||(const Integer &left , const Integer &right);
    void print(std::ostream &os) const {
        os << i;
    }
};

#endif //THINKING_IN_C_B_INTEGER_H
