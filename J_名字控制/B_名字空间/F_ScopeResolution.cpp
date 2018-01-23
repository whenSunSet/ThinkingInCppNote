//
// Created by 何时夕 on 2017/12/31.
//
namespace X {
    class Y {
        static int i;
    public:
        void f();
    };

    class Z;
    void func();
}

int X::Y::i = 9;
class X::Z{
    int u , v , w;
public:
    Z(int i);
    int g();
};

X::Z::Z(int i) {
    u = v = w = i;
}
int X::Z::g() {
    return u = v = w = 0 ;
}

void X::func() {
    X::Z a(1);
    a.g();
}

int main() {}