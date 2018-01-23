//
// Created by 何时夕 on 2018/1/1.
//
#include <fstream>
#include <string>
using namespace std;

ofstream out("HowMany.out");

class HowMany {
    static int objectCount;
public:
    HowMany() {
        objectCount++;
        print("HowMany()");
    }
    static void print(const string &msg = "") {
        if(msg.size() != 0) {
            out << msg << ": ";
        }

        out << "objectCount = " << objectCount << endl;
    }
    ~HowMany() {
        objectCount--;
        print("~HowMany()");
    }
};

int HowMany::objectCount = 0;

HowMany f(HowMany x) {
    x.print("x argument inside f()");
    return x;
}

int main() {
    HowMany h;
    HowMany::print("after construction of h");
    HowMany h2 = f(h);
    HowMany::print("after call to f()");
}

/**
 * 结果:
 * HowMany(): objectCount = 1
 * after construction of h: objectCount = 1
 * x argument inside f(): objectCount = 1
 * ~HowMany(): objectCount = 0
 * after call to f(): objectCount = 0
 * ~HowMany(): objectCount = -1
 * ~HowMany(): objectCount = -2
 *
 * 首先需要明确几点前提：
 * 1.函数入参值传递的时候  入参是一个新产生的 对象
 * 2.函数 返回的时候 返回值也是一个新产生的 对象
 * 3.入参 和 返回值 对于 基本类数据来说 编译器是可以确定的，使用的是位拷贝 将数据拷贝一份
 * 4.入参 和 返回值 对于 自定义对象来说 编译器是不可确定的 虽然使用的是 位拷贝  但是并不能符合 对象初始化的要求
 * 5.再来解释上面结果的原因:因为入参 和 返回值是 对象 所以 值传递产生新对象的方式是位拷贝 没有使用构造函数
 * 而 两个对象在 生命周期结束的时候  调用了 析构函数 至此 就出现了上面的结果
 * 6. 为了使得  值传递的自定义类型入参 和 自定义参数返回值  不使用 位拷贝 而是用正确的 构造函数初始化方式
 * 就引入了 拷贝构造函数 这个东西
 */

