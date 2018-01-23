//
// Created by 何时夕 on 2017/12/9.
//
#include <iostream>
using namespace std;
int dog , cat , bird , fish;

void f(int pet){
    cout << "pet id number: " << endl;
}

int main() {
    int i , j , k;
    cout << "f(): " << (long)&f << endl;
    cout << "dog: " << (long)&dog << endl;
    cout << "cat: " << (long)&cat << endl;
    cout << "bird: " << (long)&bird << endl;
    cout << "fish: " << (long)&fish << endl;
    cout << "i: " << (long)&i << endl;
    cout << "j: " << (long)&j << endl;
    cout << "k: " << (long)&k << endl;
    /**
     * f(): 4454690176
     * dog: 4454695136
     * cat: 4454695140
     * bird: 4454695144
     * fish: 4454695148
     * i: 140732761036412
     * j: 140732761036408
     * k: 140732761036404
     *
     * 1.函数的内存空间和 变量的不是一起的
     * 2.连续定义的变量 空间是连在一起的 间隔是其字节大小
     */
    int* ip;//这样表示ip为一个指向 int变量的 指针。
    int* ipa , ipb , ipc ;// 指针不能一行多个定义，这种情况下，只有ipa是指针，其他的都是int类型。
    int a = 47;
    int* ipd = &a;//一般讲指针单行定义，并且直接为其赋值。
    *ipd = 100;//指针可以修改 被指向的对象 的内容
    /**
     * 为什么要使用指针？
     * 1.为了能修改函数内部的对象
     * 2.获取许多灵活的编程技巧
     */
}

