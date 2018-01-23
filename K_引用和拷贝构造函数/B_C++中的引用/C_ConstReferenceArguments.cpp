//
// Created by 何时夕 on 2018/1/1.
//
void f(int &a) {}
void g(const int &b) {}

int main() {
//    f(1); 如果传入的参数是常量(或者是固定的数字) 那么引用参数也必须是 const int 的引用，因为常量不允许被改变。
    g(1);
}
