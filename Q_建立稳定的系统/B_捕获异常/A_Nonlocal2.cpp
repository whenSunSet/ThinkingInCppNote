//
// Created by 何时夕 on 2018/1/23.
//
#include <iostream>
using namespace std;

class Rainbow {
public:
    Rainbow() {
        cout << "Rainbow()" << endl;
    }

    ~Rainbow() {
        cout << "~Rainbow()" << endl;
    }
};

void oz() {
    Rainbow rb;
    for (int i = 0; i < 3; ++i) {
        cout << "there is no place like home" << endl;
    }
    throw 47;
}

int main() {
    try {
        cout << "torado witch mm.." << endl;
        oz();
    } catch (int) {
        cout << "Auntie Em! I had the strangest dream..." << endl;
    }
}
//类似java的异常捕捉
