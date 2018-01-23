//
// Created by 何时夕 on 2018/1/3.
//

#ifndef THINKING_IN_C_BYTE_H
#define THINKING_IN_C_BYTE_H

#include "iostream"
class Byte {
    unsigned char b;
public:
    Byte(unsigned char bb = 0) : b(bb) {}
    const Byte operator+(const Byte &right) const {
        return Byte(this->b + right.b);
    }
    const Byte operator-(const Byte &right) const {
        return Byte(this->b - right.b);
    }
    const Byte operator*(const Byte &right) const {
        return Byte(this->b * right.b);
    }
    const Byte operator/(const Byte &right) const {
        return Byte(this->b / right.b);
    }
    const Byte operator%(const Byte &right) const {
        return Byte(this->b % right.b);
    }
    const Byte operator^(const Byte &right) const {
        return Byte(this->b ^ right.b);
    }
    const Byte operator&(const Byte &right) const {
        return Byte(this->b & right.b);
    }
    const Byte operator|(const Byte &right) const {
        return Byte(this->b | right.b);
    }
    const Byte operator<<(const Byte &right) const {
        return Byte(this->b << right.b);
    }
    const Byte operator>>(const Byte &right) const {
        return Byte(this->b >> right.b);
    }

    const Byte operator=(const Byte &right) {
        if(this == &right){
            return *this;
        } else {
            b = right.b;
        }
        return *this;
    }

    const Byte operator+=(const Byte &right) {
        b += right.b;
        return *this;
    }
    const Byte operator-=(const Byte &right) {
        b -= right.b;
        return *this;
    }
    const Byte operator*=(const Byte &right) {
        b *= right.b;
        return *this;
    }
    const Byte operator/=(const Byte &right) {
        b /= right.b;
        return *this;
    }
    const Byte operator%=(const Byte &right) {
        b %= right.b;
        return *this;
    }
    const Byte operator^=(const Byte &right) {
        b ^= right.b;
        return *this;
    }
    const Byte operator&=(const Byte &right) {
        b &= right.b;
        return *this;
    }
    const Byte operator|=(const Byte &right) {
        b |= right.b;
        return *this;
    }
    const Byte operator>>=(const Byte &right) {
        b >>= right.b;
        return *this;
    }
    const Byte operator<<=(const Byte &right) {
        b <<= right.b;
        return *this;
    }


    int operator==(const Byte &right) const {
        return this->b == right.b;
    }
    int operator!=(const Byte &right) const {
        return this->b == right.b;
    }
    int operator<(const Byte &right) const {
        return this->b < right.b;
    }
    int operator>(const Byte &right) const {
        return this->b > right.b;
    }
    int operator<=(const Byte &right) const {
        return this->b <= right.b;
    }
    int operator>=(const Byte &right) const {
        return this->b >= right.b;
    }
    int operator&&(const Byte &right) const {
        return this->b == right.b;
    }
    int operator||(const Byte &right) const {
        return this->b == right.b;
    }

    void print(std::ostream &os) const {
        os << "0x" << std::hex << int(b) << std::dec;
    }
};

#endif //THINKING_IN_C_BYTE_H
