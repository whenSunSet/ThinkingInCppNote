//
// Created by 何时夕 on 2018/1/1.
//
int *f(int *x) {
    (*x)++;
    return x;
}

int &g(int &x) {
    x++;
    return x;
}

int &h() {
    int q;
//    return q; q的内存在函数结束的时候 就被回收了 所以引用就不知道指向那一块内存

    static int x;
    return x;// 安全  因为static的 内存在程序结束的时候才回收
}

int main() {
    int a = 0;
    f(&a);
    g(a);
}
/**
 * 1.把一个引用给一个引用的时候 传递的是 引用指向内存的地址
 * 2.把一个 变量 给一个 引用的时候 传递的是 变量的地址
 * 3.对于指针只能将 地址给指针
 * 4.所以引用比指针用起来方便 安全
 */
