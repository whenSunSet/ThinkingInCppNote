//
// Created by 何时夕 on 2017/12/15.
//
/**
 * 入参为const，引用传递后面讲，一般的值传递使用 const是为了 做一个约定
 */
// 这里的i 是传入的参数的副本，所以不会影响到传入参数
void f1(const int i) {
//    i++;
}

/**
 * 返回值是const 的内部类型
 */
// 对于内部类型来说的话  返回值是不是 const的都无所谓，
// 因为如果需要用到返回值 会将其赋值给一个 变量,所以 不需要对返回的内部类型 进行const修饰
int f3() {
    return 1;
}

const int f4() {
    return 1;
}

int main() {
//    const j = f3();
    int k = f4();
}

