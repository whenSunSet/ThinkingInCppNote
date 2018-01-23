//
// Created by 何时夕 on 2017/12/31.
//

// c++ 中为了重载 编译器会将这个方法转成内部名  _f_int_float
// 而c中只会讲其变成 _f，所以在c++ 中使用c库的时候 会出现连接器 无法解释 对 f()的调用
float f(int a , char b);


//为了解决上面的问题,这样能够告诉编译器 这个方法是 c的连接，就不会转换函数名称了
extern "C" float g(int a , char b);

//如果有一组 需要代替连接的声明
extern "C" {
float c(int a , int b);
double d(int a , int b);
}

int main() {}

