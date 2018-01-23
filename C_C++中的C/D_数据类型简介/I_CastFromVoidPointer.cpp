//
// Created by 何时夕 on 2017/12/9.
//
#include <iostream>
using namespace std;

int main() {
    char i = 'A';
    int  j = 99;
    void* vp = &i;
    cout << " i= " << i << endl;
    cout << " &i= " << (long)&i << endl;
    cout << " j= " << j << endl;
    cout << " &j= " << (long)&j << endl;
    *((char*)vp) = 'B';
    cout << " i= " << i << endl;
    cout << " &i= " << (long)&i << endl;
    cout << " j= " << j << endl;
    cout << " &j= " << (long)&j << endl;
    // *vp = 3; 编译时报错，不能直接使用 void指针
    *((int*)vp) = 3;
    cout << " i= " << i << endl;
    cout << " &i= " << (long)&i << endl;
    cout << " j= " << j << endl;
    cout << " &j= " << (long)&j << endl;
    *((long *) vp) = 300000000000000000l;
    cout << " i= " << i << endl;
    cout << " &i= " << (long)&i << endl;
    cout << " j= " << j << endl;
    cout << " &j= " << (long)&j << endl;
    /**
     * 1.直接使用void指针会在编译时报错
     * 2.需要将void指针转换成 原本类型的指针 然后再使用
     * 3.这里有个漏洞就是  有时候并不知道 void指针的原本类型，这样一来就会转错类型。
     * 4.不能使用void引用，这个之后再说
     */
}

