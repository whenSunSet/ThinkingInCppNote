//
// Created by 何时夕 on 2018/1/7.
//
#include <iostream>
using namespace std;

enum note {
    middleC , Csharp , Cflat
};

class Instrument {
public:
    virtual void play(note) const {
        cout << "Instrument::play" << endl;
    }
};

class Wind : public Instrument {
public:
    void play(note) const {
        cout << "Wind::play" << endl;
    }
};

void tune(Instrument &i) {
    i.play(middleC);
}

int main() {
    Wind flute;
    tune(flute);
}

/**
 * 在c++中向上转型会出现一个问题 就是转型了之后 编译器连接函数的时候 将对象连接的函数变成了基类的函数
 * 这和 java中不一样 java中无论对象 怎么转型 最终调用的都是真正类的函数。解决办法如下
 * 1.这里涉及到了函数绑定的问题：将函数体和 函数名 对应起来叫做 函数绑定，
 *      1.早期绑定：c++中一般的函数绑定出现在 编译期间，此时编译器不知道调用函数的真正对象类型
 *      所以只能以当前对象类型的函数体进行绑定。
 *      2.晚期绑定：被定义成了 virtual 的函数 进行函数绑定出现在 程序运行期间 此时可以获取到真正的对象类型
 *      所以可以将函数名 绑定 到真正对象类型的函数体
 *      3.java中所有的成员函数都是 晚期绑定 所以默认是 虚函数，但是静态函数不是虚函数
 * 2.只要在基类中定义成了 虚函数 那么所有派生类的该函数都变成了虚函数
 * 3.虚函数只作用在 相同函数签名的 派生类 函数 上。也就是说虚函数重载对 虚函数没有影响。
 * 4.在继承体系中 某个节点的类的函数被定义成了虚函数 这里会影响该类的派生类 对其基类没有影响，
 * 建议在最基类该函数就定义成虚函数 当然被转型到的类型也需要是 该类及其派生类，否则虚函数还是不会生效
 */
