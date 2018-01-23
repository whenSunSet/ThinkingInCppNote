//
// Created by 何时夕 on 2018/1/2.
//
#include "B_Integer.h"

const Integer operator+(const Integer &left , const Integer &right) {
    return Integer(left.i + right.i);
}
const Integer operator-(const Integer &left , const Integer &right) {
    return Integer(left.i - right.i);
}
const Integer operator*(const Integer &left , const Integer &right) {
    return Integer(left.i * right.i);
}
const Integer operator/(const Integer &left , const Integer &right) {
    return Integer(left.i / right.i);
}
const Integer operator%(const Integer &left , const Integer &right) {
    return Integer(left.i % right.i);
}
const Integer operator^(const Integer &left , const Integer &right) {
    return Integer(left.i ^ right.i);
}
const Integer operator&(const Integer &left , const Integer &right) {
    return Integer(left.i & right.i);
}
const Integer operator|(const Integer &left , const Integer &right) {
    return Integer(left.i | right.i);
}
const Integer operator<<(const Integer &left , const Integer &right) {
    return Integer(left.i << right.i);
}
const Integer operator>>(const Integer &left , const Integer &right) {
    return Integer(left.i >> right.i);
}
Integer& operator+=(Integer &left , const Integer &right) {
    left.i += right.i;
    return left;
}
Integer& operator-=(Integer &left , const Integer &right) {
    left.i -= right.i;
    return left;
}
Integer& operator*=(Integer &left , const Integer &right) {
    left.i *= right.i;
    return left;
}
Integer& operator/=(Integer &left , const Integer &right) {
    left.i /= right.i;
    return left;
}
Integer& operator%=(Integer &left , const Integer &right) {
    left.i %= right.i;
    return left;
}
Integer& operator^=(Integer &left , const Integer &right) {
    left.i ^= right.i;
    return left;
}
Integer& operator&=(Integer &left , const Integer &right) {
    left.i &= right.i;
    return left;
}
Integer& operator|=(Integer &left , const Integer &right) {
    left.i |= right.i;
    return left;
}
Integer& operator>>=(Integer &left , const Integer &right) {
    left.i >>= right.i;
    return left;
}
Integer& operator<<=(Integer &left , const Integer &right) {
    left.i <<= right.i;
    return left;
}
int operator==(const Integer &left , const Integer &right) {
    return left.i == right.i;
}
int operator!=(const Integer &left , const Integer &right) {
    return left.i != right.i;
}
int operator<(const Integer &left , const Integer &right) {
    return left.i < right.i;
}
int operator>(const Integer &left , const Integer &right) {
    return left.i > right.i;
}
int operator<=(const Integer &left , const Integer &right) {
    return left.i <= right.i;
}
int operator>=(const Integer &left , const Integer &right) {
    return left.i >= right.i;
}
int operator&&(const Integer &left , const Integer &right) {
    return left.i && right.i;
}
int operator||(const Integer &left , const Integer &right) {
    return left.i || right.i;
}

