//
// Created by 何时夕 on 2017/12/18.
//
class Comm {
    const volatile unsigned char byte;
    volatile unsigned char flag;
    enum {bufsize = 100};
    unsigned char buf[bufsize];
    int index;
public:
    Comm();
    void isr() volatile ;
    char read(int index) const ;
};

Comm::Comm() : index(0) , byte(0) , flag(0){}

void Comm::isr() volatile {
    flag = 0;
    buf[index++] = byte;
    if(index >= bufsize) index = 0;
}

char Comm::read(int index) const {
    if(index < 0 || index >= bufsize){
        return 0;
    }
    return buf[index];
}

int main() {
    volatile Comm port;
    port.isr();
//    port.read();
}

/**
 * 1.volatile 和 const的使用方式相近，对于一个对象 如果声明为了volatile 那么只有volatile的成员函数能调用他
 * 2.和java类似，用于多线程的情况，编译器不再对声明的类型变量进行优化，使用了这个标识符之后，系统总是在需要的时候 去内存中读取这个数据，即使刚刚已经读取过了，
 * 因为这个变量可能被别的线程改变了
 */

