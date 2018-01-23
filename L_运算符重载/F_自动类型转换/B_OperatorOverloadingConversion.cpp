//
// Created by 何时夕 on 2018/1/4.
//
class Three {
    int i;
public:
    Three(int ii = 0 , int = 0) : i(ii) {}
};

class Four {
    int x;
public:
    Four(int xx) : x(xx) {}
    operator Three() const {
        return Three(x);
    }
};

void g(Three) {}

int main() {
    Four four(1);
    //默认调用了 运算符的自动类型转换
    g(four);
    g(1);
}
