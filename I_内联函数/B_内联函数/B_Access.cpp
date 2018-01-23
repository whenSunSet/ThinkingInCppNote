//
// Created by 何时夕 on 2017/12/24.
//
class Access {
    int i;
public:
    int read() const {
        return i;
    }
    void set(int i) { i = ii;}
};

int main() {
    Access A;
    A.set(100);
    int x = A.read();
}
// 类的内联函数的一个用处是，类似java一样 设置 get/set ，这样比起一般的函数，减少了开销。也拥有了 访问隔离的功能

