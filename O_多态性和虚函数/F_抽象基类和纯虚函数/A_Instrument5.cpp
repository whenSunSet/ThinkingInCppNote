//
// Created by 何时夕 on 2018/1/7.
//
#include <iostream>
using namespace std;

enum note {
    middleC , CSharp , Cflat
};

class Instrument {
public:
    virtual void play(note) const = 0;
    virtual char* what() const = 0;
    virtual void adjust(int) = 0;
};

class Wind : public Instrument {
public:
    void play(note) const {
        cout << "Wind::play(note)" << endl;
    }
    char* what() const  {
        return "Wind";
    }
    void adjust(int) {
        cout << "Wind::adjust(int)" << endl;
    }
};

class Percussion : public Instrument {
public:
    void play(note) const {
        cout << "Percussion::play" << endl;
    }
    char* what() const {
        return "Percussion";
    }
    void adjust(int) {}
};

class Stringed : public Instrument {
public:
    void play(note) const {
        cout << "Stringed::play" << endl;
    }
    char* what() const {
        return "Stringed";
    }
    void adjust(int) {}
};

class Brass : public Wind {
public:
    void play(note) const {
        cout << "Brass::play" << endl;
    }
    char* what() const {
        return "Brass";
    }
};

class Woodwind : public Wind {
public:
    void play(note) const {
        cout << "Woodwind::play" << endl;
    }
    char* what() const {
        return "Woodwind";
    }
};

void tune(Instrument &i) {
    i.play(middleC);
}

void f(Instrument &i) {
    i.adjust(1);
}

int main() {
    Wind wind;
    Percussion percussion;
    Stringed stringed;
    Brass brass;
    Woodwind woodwind;

    tune(wind);
    tune(percussion);
    tune(stringed);
    tune(brass);
    tune(woodwind);
}
/**
 * 1.纯虚函数 类似 java 的接口函数
 * 2.只少有一个纯虚函数 叫做抽象类
 * 3.全是纯虚函数 叫做 纯抽象类 类似java的接口
 * 4.纯虚函数的入参不能是 值传递
 * 5.只要含有纯虚函数就不允许 创建对象
 */
