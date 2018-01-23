//
// Created by 何时夕 on 2018/1/9.
//

#ifndef PROJECT_P_C_B_E_AUTOCOUNTER_H
#define PROJECT_P_C_B_E_AUTOCOUNTER_H
#include <iostream>
#include <set>
#include <string>
using namespace std;
class AutoCounter {
    static int count;
    int id;
    class CleanupCheck {
        set<AutoCounter*> trace;
    public:
        void add(AutoCounter *ap){
            trace.insert(ap);
        }
        void remove(AutoCounter *ap) {
            if(trace.erase(ap) != 1) {
                cout << "试图删除同一个变量两次" << endl;
            }
        }
        ~CleanupCheck() {
            out << "~CleanupCheck()" << endl;
            if(trace.size() != 0) {
                cout << "有内存泄漏，有些变量没有被删除" << endl;
            }
        }
    };
    static CleanupCheck verifier;
    AutoCounter() : id(count++) {
        verifier.add(this);
        cout << "created[" << id << "]" << endl;
    }
    AutoCounter(const AutoCounter&);
    void operator=(const AutoCounter&);

public:
    static AutoCounter* create() {
        return new AutoCounter();
    }
    ~AutoCounter() {
        cout << "destroying[" << id << "]" << endl;
        verifier.remove(this);
    }
    friend ostream& operator<<(ostream& os , const AutoCounter *ac) {
        return os << "AutoCounter " << ac.id;
    }
    friend ostream& operator<<(ostream& os , const AutoCounter &ac) {
        return os << "AutoCounter " << ac.id;
    }
};

#endif //PROJECT_P_C_B_E_AUTOCOUNTER_H
