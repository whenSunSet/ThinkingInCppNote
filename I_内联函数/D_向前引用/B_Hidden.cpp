//
// Created by 何时夕 on 2017/12/26.
//
#include <iostream>
using namespace std;

class Member {
    int i , j , k;
public:
    Member(int x = 0) : i(x) , j(x) , k(x) {}
    ~Member() {
        cout << "~Member" << endl;
    }
};

class WithMembers {
    Member q , r , s;
    int i;
public:
    WithMembers(int ii) : i(ii) {}
    ~WithMembers() {
        cout << "~WithMembers" << endl;
    }
};

int main() {
    WithMembers wm(1);
}
//我们可以看见 Member 的构造函数对于内联来书是足够简单的，
//但是 WithMember 中的构造函数和析构函数 隐式调用了 q , r , s 的构造和析构函数，
// 这样就导致了 构造和析构函数非常复杂，所以说这里得好好把握
