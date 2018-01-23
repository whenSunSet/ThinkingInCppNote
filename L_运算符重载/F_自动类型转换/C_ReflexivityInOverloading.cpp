//
// Created by 何时夕 on 2018/1/4.
//
class Number {
    int i;
public:
    Number(int ii = 0) : i(ii) {}
    const Number operator+(const Number &n) const {
        return Number(i + n.i);
    }
    friend const Number operator-(const Number& , const Number&);
};

const Number operator-(const Number &n1 , const Number &n2) {
    return Number(n1.i - n2.i);
}

int main() {
    Number a(47) , b(11);
    a + b;
    a + 1;
//    1 + a;
    a - b;
    a - 1;
    1 - a;
}
/**
 * 全局的运算重载比较好用，因为入参需要写明 全部的参数
 * 1.例如上面 1 + a会报错是因为这个是 类运算符重载 所以就限定了左边的操作数是 Number，导致 1 不能被自动转型成Number
 * 2.1 - a 不会报错的原因是 这个是 全局运算符重载 所以 需要将两个操作都写全 此时 1 会被自动转型成Number
 * 3.但是编译器并不会 将 1 + 1自动转型 因为其会从最简单的可能性开始  所以会优先使用内置运算符
 */

