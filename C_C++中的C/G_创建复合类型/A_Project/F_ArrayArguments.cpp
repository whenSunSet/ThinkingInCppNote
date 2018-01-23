//
// Created by 何时夕 on 2017/12/10.
//
#include <iostream>
#include <string>
using namespace std;

void func1(int a[] , int size){
    for (int i = 0; i < size; ++i) {
        a[i] = i * i - 1;
    }
}

void func2(int* a , int size){
    for (int i = 0; i < size; ++i) {
        a[i] = i * i + 1;
    }
}

void print(int a[] , string name , int size){
    for (int i = 0; i < size; ++i) {
        cout << name << "]" << i << "] = " << a[i] << endl;
    }
}

int main(){
    int a[5] , b[5];
    print(a , "a" , 5);
    print(b , "b" , 5);

    func1(a ,5);
    func1(b ,5);
    print(a , "a" , 5);
    print(b , "b" , 5);

    func2(a ,5);
    func2(b ,5);
    print(a , "a" , 5);
    print(b , "b" , 5);

    int c = 1;
    int* d = &c;
    func2(d , 5);
    print(d , "d" , 5);

    /**
     * 1.在数组作为函数的参数的时候 一直使用的是地址传递，和传入 指针是一个效果
     * 2.就算是一个普通的指针也可以 使用 [] 来进行遍历，但是访问的数据是未知的
     */
}

