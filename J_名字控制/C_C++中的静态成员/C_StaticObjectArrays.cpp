//
// Created by 何时夕 on 2017/12/31.
//
class X {
    int i;
public:
    X(int ii) : i(ii) {}
};

class Stat {
    static X x2;
    static X xTable2[];
    static const X x3;
    static const X xTable3[];
};

X Stat::x2(100);
X Stat::xTable2[] = {
        X(1) , X(2) , X(3)
};
const X Stat::x3(100);
const X Stat::xTable3[] = {
        X(1) , X(2) , X(3)
};

int main() {}

