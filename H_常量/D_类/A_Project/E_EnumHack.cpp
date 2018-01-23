//
// Created by 何时夕 on 2017/12/18.
//
#include <iostream>
using namespace std;

class Bunch {
    enum { size = 100};
    int i[size];
};

int main() {
    cout << "sizeof(Bunch) = "
         << sizeof(Bunch)
         << ", sizeof(i[1000]) = "
         << sizeof(int[1000]) << endl;
}
/**
 * 老版的c++ 不支持 static const 这时候 可以用上面的方法来达到目的
 */
