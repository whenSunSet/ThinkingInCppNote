//
// Created by 何时夕 on 2018/1/22.
//

#ifndef PROJECT_P_D_A_B_SELFCOUNTER_H
#define PROJECT_P_D_A_B_SELFCOUNTER_H

#include <iostream>
class SelfCounter {
    static int counter;
    int id;
public:
    SelfCounter() : id(counter++) {
        std::cout << "Cretated: " << id << std::endl;
    }
    SelfCounter(const SelfCounter &rv) : id(rv.id) {
        std::cout << "Copied: " << id << std::endl;
    }
    SelfCounter operator=(const SelfCounter &rv) {
        std::cout << "Assigned : " << rv.id << " to " << id << std::endl;
        return *this;
    }
    ~SelfCounter() {
        std::cout << "Destroyed: " << id << std::endl;
    }
    friend std::ostream& operator<<(std::ostream &os , const SelfCounter &sc) {
        return os << "SelfCounter: " << sc.id;
    }
};

#endif //PROJECT_P_D_A_B_SELFCOUNTER_H
