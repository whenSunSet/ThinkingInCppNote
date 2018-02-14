//
// Created by 何时夕 on 2018/2/12.
//
#include <iostream>
using namespace std;


class A {
public:
    int a;
    A(int a = 0) : a(a) {
        cout << "cr a:" << a << endl;
    }

    A() {}

    virtual ~A() {
        cout << "de a:" << a << endl;
    }
};


class B {
    int b;
    A a;
    A aa;
    A *aaa;
public:
    B(int b = 1) : b(b) ,  aa(b) , a(b){
        cout << "cr b:" << b << " a:" << a.a << " aa:" << aa.a << endl;
        aaa = new A(4);
    }

    virtual ~B() {
        cout << "de b:" << b << " a:" << a.a << " aa:" << aa.a << endl;
        delete(aaa);
    }
};

void test() {
//    A *a = new A(1);
//    A aa(2);
    cout << "----------------" << endl;
    B b(3);

    int a;
    float f;
    bool bo;
    char c;
    A *aa;

    cout << "a:" << a << endl;
    cout << "f:" << f << endl;
    cout << "ba:" << bo << endl;
    cout << "c:" << c << endl;
    cout << "aa:" << aa << endl;

    static int s1;
    static A *s2;

    cout << "s1:" << s1 << endl;
    cout << "s2:" << s2 << endl;

    s1 = 1;
    s2 = NULL;
    cout << "s1:" << s1 << endl;
    cout << "s2:" << s2 << endl;

    s1 = 2;
    s2 = new A(3);
    cout << "s1:" << s1 << endl;
    cout << "s2:" << s2 << endl;
    cout << "s2:" << s2->a << endl;
}

//A a(6);
//A *aaaa = new A(7);
//A *ap = &a;

int i121 = 1;
int i122;
float f121 = 1.0;
float f122;
bool b121 = true;
bool b122;
int *ip121 = &i121;
int *ip122;
int *ip123 = new int(3);
int *ip124;

class C133 {
    int i1331 = 1;
    int i1332;
    int i1333;
    int *ip1331 = &i1331;
    int *ip1333;
    int *ip1334 = new int(4);
    int *ip1335;
public:
    C133(int i1332 = 2) : i1332(i1332) {
        cout << "i1331:" << i1331 << endl;
        cout << "i1332:" << i1332 << endl;
        cout << "i1333:" << i1333 << endl;
        i1333 = 3;
        cout << "i1333:" << i1333 << endl;

        cout << "ip1331:" << ip1331 << endl;
        cout << "ip1333:" << ip1333 << endl;
        cout << "ip1334:" << ip1334 << endl;
        cout << "ip1335:" << ip1335 << endl;
        ip1333 = &i1333;
        ip1335 = new int(5);
        cout << "ip1333:" << ip1333 << endl;
        cout << "ip1335:" << ip1335 << endl;
    }

};

class C134 {
//    static int i1341 = 1; //不能在定义的时候初始化
    static int i1342;
//    static int i1344; //不能在构造函数中初始化
//    static int *ip1341 = &i1341; //不能在定义的时候初始化
    static int *ip1342;
    static int *ip1345;
//    static int *ip1344; //不能在构造函数中初始化
public:
    C134() {
//        cout << "i1341:" << i1341 << endl;
        cout << "i1342:" << i1342 << endl;
//        cout << "i1344:" << i1344 << endl;
        i1342 = 4;
//        i1344 = 8;
        cout << "i1342:" << i1342 << endl;
//        cout << "i1344:" << i1344 << endl;

//        cout << "ip1341:" << ip1341 << endl;
        cout << "ip1342:" << ip1342 << endl;
        cout << "*ip1342:" << *ip1342 << endl;
        cout << "ip1345:" << ip1345 << endl;
        cout << "*ip1345:" << *ip1345 << endl;
//        cout << "ip1344:" << ip1344 << endl;
        ip1342 = &i1342;
//        ip1344 = &i1344;
        cout << "ip1342:" << ip1342 << endl;
        cout << "*ip1342:" << *ip1342 << endl;
//        cout << "ip1344:" << ip1344 << endl;
    }
};

class C143 {
public:
    int i1431 = 1;
    int *ip1431 = &i1431;
    int *ip1432 = new int(2);
};

class C221 {
public:
    C221(int i) {
        cout << "C221:c " << i << endl;
    }
};

class C232A {
public:
    int i2211;
    C232A(int i) {
        i2211 = i;
        cout << "C232A: cr " << i << endl;
    }
};

class C232B {
public:
    C232A c232A1;
//    C232A c232A2(2); //不能在定义的时候初始化
    C232A *cp232A1;
    C232A *cp232A2;
    C232A *cp232A3 = new C232A(3);

    C232B(const C232A &c232A1s) : c232A1(c232A1s) {
        cout << "C232B: cr c232A1 " << c232A1.i2211 << endl;
        cout << "C232B: cr cp232A1 " << cp232A1 << endl;
        cout << "C232B: cr cp232A2 " << cp232A2 << endl;
        cout << "C232B: cr cp232A3 " << cp232A3 << endl;

        cp232A1 = &c232A1;
        cp232A2 = new C232A(2);
        cout << "C232B: cr cp232A1" << cp232A1 << endl;
        cout << "C232B: cr cp232A2" << cp232A2 << endl;
    }
};

class C233A {
//    static C232A c232A1(1);//不能在定义的时候被初始化
//    static C232A c232A2; //不能在构造函数中和构造函数前被初始化
    static C232A c232A3;
//    static C232A *cp232A1;//不能在构造函数和构造函数前被初始化
    static C232A *cp232A2;
//    static C232A *cp232A3 = new C232A(3);//不能在定义的时候被初始化
    static C232A *cp232A4;
//    static C232A *cp232A5;
public:
    C233A(int i) {
//        cout << "C233A: cr c232A2 " << c232A2.i2211 << endl;
//        cout << "C233A: cr cp232A1 " << cp232A1 << endl;
        cout << "C233A: cr cp232A2 " << cp232A2 << endl;
//        cout << "C233A: cr cp232A3 " << cp232A3 << endl;
        cout << "C233A: cr cp232A4 " << cp232A4 << endl;
//        cout << "C233A: cr cp232A5 " << cp232A5 << endl;

//        cp232A1 = new C232A(1 + i);
//        cp232A5 = &c232A3;

//        cout << "C233A: cr cp232A1 " << cp232A1 << endl;
//        cout << "C233A: cr cp232A5 " << cp232A5 << endl;
    }
};
class C24312{
public:
    int i;
    C24312(int i) : i(i){

        cout << "C24312 cr: " << i << endl;
    }

    C24312(C24312 &c24312) {
        cout << "C24312 cp: " << c24312.i << endl;
    }
};

class C24311{
public:
    int i;
    static C24312 c243125;
    C24312 c243127 = c243125;
    C24311(int i) : i(i){
        cout << "-----------2431测试-----------" << endl;
        cout << "C24311 cr: " << i << endl;
    }

    C24311(C24311 &c2431) {
        cout << "C24311 cp: " << c2431.i << endl;

        C24312 c243121(1);
        C24312 c243122 = c243121;

        C24312 c243123(3);
        static C24312 c243124 = c243123;
    }
};

C232A C233A::c232A3(3);
C232A *C233A::cp232A2 = new C232A(2);
C232A c232A4(4);
C232A *C233A::cp232A4 = &c232A4;
C24312 c243126(6);
C24312 C24311::c243125 = c243126;

int C134::i1342 = 2;
int i1343 = 3;
int *C134::ip1342 = &i1343;
int *C134::ip1345 = new int(5);

C221 c2211(1);
C221 *c2212;

//-----------2431测试-----------
C24311 c24311(1);
C24311 c24312 = c24311;

void fun135();
int* fun1421();
int* fun1422();
int main() {
    cout << "-----------121测试-----------" << endl;
    cout << "i121:" << i121 << endl;
    cout << "i122:" << i122 << endl;
    i122 = 1;
    cout << "i122:" << i122 << endl;

    cout << "f121:" << f121 << endl;
    cout << "f122:" << f122 << endl;
    f122 = 1.0;
    cout << "f122:" << f122 << endl;

    cout << "b121:" << b121 << endl;
    cout << "b122:" << b122 << endl;
    b122 = true;
    cout << "b122:" << b122 << endl;

    cout << "ip121:" << ip121 << endl;
    cout << "ip122:" << ip122 << endl;
    cout << "ip123:" << ip123 << endl;
    cout << "ip124:" << ip124 << endl;
    ip122 = &i122;
    ip124 = new int(4);
    cout << "ip122:" << ip122 << endl;
    cout << "ip124:" << ip124 << endl;

    cout << "-----------123测试-----------" << endl;
    int i1321 = 1;
    int i1322;
    cout << "i1321:" << i1321 << endl;
    cout << "i1322:" << i1322 << endl;
    i1322 = 1;
    cout << "i1322:" << i1322 << endl;

    int *ip1321 = &i1321;
    int *ip1322;
    int *ip1323 = new int(3);
    int *ip1324;
    cout << "ip1321:" << ip1321 << endl;
    cout << "ip1322:" << ip1322 << endl;
    cout << "ip1323:" << ip1323 << endl;
    cout << "ip1324:" << ip1324 << endl;
    ip1322 = &i1322;
    ip1324 = new int(4);
    cout << "ip1322:" << ip1322 << endl;
    cout << "ip1324:" << ip1324 << endl;

    cout << "-----------124测试-----------" << endl;
    C133 c133;

    cout << "-----------125测试-----------" << endl;
    C134 c134;

    cout << "-----------126测试-----------" << endl;
    fun135();
    fun135();

    cout << "-----------133测试-----------" << endl;
    int *ip1421 = fun1421();
    cout << "ip1421:" << ip1421 << endl;
    cout << "*ip1421:" << *ip1421 << endl;

    int *ip1422 = fun1422();
    cout << "ip1422:" << ip1422 << endl;
    cout << "*ip1422:" << *ip1422 << endl;

    cout << "-----------134测试-----------" << endl;
    C143 *c1431 = new C143;
    cout << "c1431->i1431:" << c1431->i1431 << endl;
    cout << "&c1431->i1431:" << &c1431->i1431 << endl;
    cout << "c1431->ip1431:" << c1431->ip1431 << endl;
    cout << "c1431->ip1432:" << c1431->ip1432 << endl;

    int *ip1433 = &c1431->i1431;
    int *ip1434 = c1431->ip1431;
    int *ip1435 = c1431->ip1432;
    cout << "ip1433:" << ip1433 << endl;
    cout << "*ip1433:" << *ip1433 << endl;
    cout << "ip1434:" << ip1434 << endl;
    cout << "*ip1434:" << *ip1434 << endl;
    cout << "ip1435:" << ip1435 << endl;
    cout << "*ip1435:" << *ip1435 << endl;

    delete(c1431);
    C143 *c1432 = new C143;
    cout << "ip1433:" << ip1433 << endl;
    cout << "*ip1433:" << *ip1433 << endl;
    cout << "ip1434:" << ip1434 << endl;
    cout << "*ip1434:" << *ip1434 << endl;
    cout << "ip1435:" << ip1435 << endl;
    cout << "*ip1435:" << *ip1435 << endl;

    cout << "-----------231测试-----------" << endl;
    c2212 = new C221(2);
    C221 c2213(3);
    C221 *c2214;
    c2214 = new C221(4);

    cout << "-----------232测试-----------" << endl;
    C232A c232A1(1);
    C232B c232B1(c232A1);

    cout << "-----------232测试-----------" << endl;
    C233A c233A1(0);
    C233A c233A2(1);
}

bool bfun135 = false;
void fun135() {
    static int i1351 = 1;
    static int i1352;
    static int *ip1351 = &i1351;
    static int *ip1352;
    static int *ip1353 = new int(3);
    static int *ip1354;
    cout << "i1351:" << i1351 << endl;
    cout << "i1352:" << i1352 << endl;
    cout << "ip1351:" << ip1351 << endl;
    cout << "ip1352:" << ip1352 << endl;
    cout << "ip1353:" << ip1353 << endl;
    cout << "ip1354:" << ip1354 << endl;

    if(bfun135) {
        i1352 = 2;
        ip1352 = &i1352;
        ip1354 = new int(4);
        cout << "i1351:" << i1351 << endl;
        cout << "i1352:" << i1352 << endl;
        cout << "ip1351:" << ip1351 << endl;
        cout << "ip1352:" << ip1352 << endl;
        cout << "ip1354:" << ip1354 << endl;
    }
    i1351 = 3;
    bfun135 = true;
}

int* fun1421() {
    int i1421 = 1;
    int *ip1421 = &i1421;

    cout << "ip1421:" << ip1421 << endl;
    cout << "*ip1421:" << *ip1421 << endl;

    return &i1421;
}

int* fun1422() {
    int *ip1422 = new int(2);
    cout << "ip1422:" << ip1422 << endl;
    return ip1422;
}


