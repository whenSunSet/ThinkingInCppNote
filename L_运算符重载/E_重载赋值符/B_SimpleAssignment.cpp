//
// Created by 何时夕 on 2018/1/3.
//
#include <iostream>
using namespace std;

class Value {
    int a , b;
    float c;
public:
    Value(int aa = 0 , int bb = 0 , float cc = 0.0) : a(aa) , b(bb) , c(cc) {
        cout << "1" << endl;
    }
//    Value& operator=(int aa) {
//        a = a + aa;
//        cout << "2" << endl;
//        return *this;
//    }
//    Value& operator=(const Value &rv) {
//        a = rv.a;
//        b = rv.b;
//        c = rv.c;
//        cout << "3" << endl;
//        return *this;
//    }
    friend ostream& operator<<(ostream &os , const Value rv) {
        return os << "a = " << rv.a << ", b = " << rv.b << ", c = " << rv.c;
    }
};

int main() {
    Value a , b(1 , 2 , 3.3);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    a = b;
    cout << "a after assignment: " << a << endl;
    a = 2;
    cout << "a after assignment: " << a << endl;
}
/**
 * 如果已经初始化的对象  找不到相应的 =重载函数  那么会调用 相应的拷贝构造函数来充数。
 */

