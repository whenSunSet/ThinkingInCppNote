//
// Created by 何时夕 on 2017/12/18.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Quoter {
    int lastquote;
    const int i;
public:
    Quoter();
    int lastQuote() const ;
    const char *quote();
};

Quoter::Quoter() : i(0) {
    lastquote = -1;
    srand(time(0));
}

/**
 * 声明为const的变量，内部不能修改成员变量
 */
int Quoter::lastQuote() const {
//    lastquote = 0;编译报错
//    i = 0;编译报错
    return lastquote;
}

const char *Quoter::quote() {
    static const char *quotes[] = {
            "A ",
            "B ",
            "C ",
            "D ",
            "E ",
            "F ",
            "G ",
            "H ",
    };
    const int qsize = sizeof quotes / sizeof *quotes;
    int qnum = rand() % qsize;
    while (lastquote >= 0 && qnum == lastquote) {
        qnum = rand() % qsize;
    }
    return quotes[lastquote = qnum];
}

int main() {
    Quoter q;
    const Quoter cq;
    cq.lastQuote();
    // 因为对象被声明成立const的，所以只能调用const的成员函数
//    cq.quote();
    for (int i = 0; i < 20; ++i) {
        cout << q.quote() << endl;
    }
}


