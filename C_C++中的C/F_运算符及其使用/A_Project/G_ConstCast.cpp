//
// Created by 何时夕 on 2017/12/10.
//
#include <iostream>
using namespace std;
int main() {
    const int i = 0;
    int* j = (int*)&i;
    cout << i <<endl;
    cout << &i <<endl;
    cout << j <<endl;
    cout << *j <<endl;
    *j = 1;
    cout << i <<endl;
    cout << &i <<endl;
    cout << j <<endl;
    cout << *j <<endl;

    j = const_cast<int*>(&i);
//    long* l = const_cast<long*>(&i);
    volatile  int k = 0;
    int* u = const_cast<int*>(&k);

    /**
     * 1.const 变量 可以赋值给 非 const 同类型变量
     * 2.const 的地址 需要 显式强制转换 成 非 const 同类型指针。此时建议使用 const_cast
     * 3.局部 const 变量内容，可以通过其指针来进行修改。但是由于编译器对局部const变量在预处理的时候就进行了替换。
     * 编译器只对const变量的值读取一次。虽然其内存的数据被修改了，但是在代码中反应的数据还是没变的。
     * 4.非局部 const 变量内容，就算使用指针来进行修改 也会报错。
     * 5.const_cast 只允许 转换 const 和 非const ，volatile 和 非volatile。不同类型使用会报错。
     * 6.const_cast可以很明显的表示出转换，建议使用。
     */
}

