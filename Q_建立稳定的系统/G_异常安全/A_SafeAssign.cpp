//
// Created by 何时夕 on 2018/2/12.
//
#include <iostream>
#include <new>
#include <cstring>
#include <cstddef>
using namespace std;
class HasPointers {
    struct MyData {
        const char *theString;
        const int *theInts;
        size_t  numInts;

        MyData(const char *theString, const int *theInt, size_t numInts) : theString(theString),
                                                                           theInts(theInt),
                                                                           numInts(numInts) {
        }
    } *theData;

    static MyData* clone(const char *oStrings , const int *oInts , size_t nInts) {
        char *newChars = new char[strlen((oStrings)) + 1];
        int *newInts;
        try {

        } catch (bad_alloc&) {
            delete []newChars;
            throw;
        }
        try {
            strcpy(newChars , oStrings);
            for (size_t i = 0; i < nInts; ++i) {
                newInts[i] = oInts[i];
            }
        } catch (...) {
            delete []newInts;
            delete []newChars;
            throw;
        }
        return new MyData(newChars , newInts , nInts);
    }

    static MyData* clone(const MyData *theData) {
        return clone(theData->theString , theData->theInts , theData->numInts);
    }

    static void cleanup(const MyData *theData) {
        delete [] theData->theString;
        delete [] theData->theInts;
        delete theData;
    }
public:
    HasPointers(const char *someString , const int *someInts , size_t numInts) {
        theData = clone(someString , someInts , numInts);
    }

    HasPointers(const HasPointers &source) {
        theData = clone(source.theData);
    }

    HasPointers& operator=(const HasPointers &rhs) {
        if(this != &rhs) {
            MyData *newData = clone(rhs.theData->theString , rhs.theData->theInts , rhs.theData->numInts);
            cleanup(theData);
            theData = newData;
        }
        return *this;
    }

    virtual ~HasPointers() {
        cleanup(theData);
    }

    friend ostream& operator<<(ostream &os, const HasPointers &pointers) {
        os << pointers.theData->theString <<": ";
        for (size_t i = 0; i < pointers.theData->numInts; ++i) {
            os << pointers.theData->theInts[i] << ' ';
        }
        return os;
    }
};

int main() {
    int someNums[] = {1 , 2 , 3 , 4};
    size_t someCount = sizeof(someNums) / sizeof(someNums[0]);
    int someMoreNums[] = {5 , 6 , 7};
    size_t someMoreCount = sizeof(someMoreNums) / sizeof(someMoreNums[0]);
    HasPointers h1("hello" , someNums , someCount);
    HasPointers h2("Goodbye" , someMoreNums , someMoreCount);
    cout << h1 << endl;
    h1 = h2;
    cout << h1 << endl;
}

/**
 * 对于 = 的重载有以下几点
 * 1.如果是给自己赋值，那么返回*this
 * 2.给成员指针数据分配内存
 * 3.从原有内存向新分配的内存区拷贝内存
 * 4.给成员数据赋值，这里的具体逻辑该成员数据的拷贝函数控制
 * 5.释放原有内存
 * 6.返回*this
 *
 * 最重要的是：
 * 1.直到本对象的所有成员都被安全的分配了内存之前都不要改变当前对象的状态，也就是上面使用的clone()方法
 * 2.从上面我们可以看见 默认了delete是不会抛出异常的，所以必须注意析构函数中不可抛出异常
 */
