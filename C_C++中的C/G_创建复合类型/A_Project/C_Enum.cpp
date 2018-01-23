//
// Created by 何时夕 on 2017/12/10.
//
#include <iostream>
using namespace std;

// enum 中的数据 其实是 int 值，编译器默认会赋值  1、2、3...
enum ShapeType {
    circle,
    square,
    rectangle
};

// 如果不想编译器赋值 还可以直接赋值
enum ShapeType1 {
    circle = 10,
    square = 20,
    rectangle = 30
};

// 如果没有被手动赋值的  会被使用相邻的下一个整数
enum ShapeType2 {
    apple = 40,
    banana
};

// 当前文件的 所有的 enum 其实是在一个内存空间里的 所以其实 ShapeType的rectangle 和 ShapeType1 的是一样的
// 并且 enum 只能被手动赋值一次 但是 可以被编译器赋值很多次，取最后一次的数值。

int main() {

    ShapeType shape = circle;
    switch(shape){
        case circle:
            cout << "circle";
            break;
        case square:
            cout << "square";
            break;
        case rectangle:
            cout << "rectangle";
            break;
    }

}

