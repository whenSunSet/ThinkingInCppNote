//
// Created by 何时夕 on 2018/1/9.
//

class AbstractBase {
public:
    virtual ~AbstractBase() = 0;
};

AbstractBase::~AbstractBase() {}

class Derived : public AbstractBase {};

int main() {
    Derived d;
}
/**
 * 纯虚析构函数有下面的特点：
 * 1.必须给纯虚析构函数提供一个 函数体
 * 2.拥有纯虚析构函数的基类 的 子类 不需要定义析构函数 也可以初始化，因为编译器会自动为子类创建一个 析构函数
 * 3.纯虚析构函数的目的只有一个 就是在没有其他纯虚函数的情况下 能够使得基类成为 抽象类从而阻止基类实例化。
 */



