//
// Created by 何时夕 on 2018/1/1.
//
class NoCC {
    int i;
    NoCC(const NoCC &a) {}
public:
    NoCC(int ii = 0) : i(ii) {}
};

NoCC f(NoCC a) {
    // 这里返回的时候会调用 拷贝构造函数 会报错
    return a;
}

int main() {
    NoCC n;
//    f(n); 此时要使用 拷贝构造函数 但是其是私有的 所以会编译报错
//    NoCC n2 = n; 同上
//    NoCC n3 = f(n); 同上
}