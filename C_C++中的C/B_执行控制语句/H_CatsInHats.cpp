//
// Created by 何时夕 on 2017/12/9.
//
#include <iostream>
using namespace std;
extern void removeHat(char cat);

int main(){
    removeHat('A');
}

void removeHat(char cat){
    for (char c = 'A'; c < cat ; ++c) {
        cout << "  ";
    }
    if (cat <= 'Z'){
        cout << "cat " << cat << endl;
        removeHat(cat + 1);
    } else {
        cout << "VOOM！！！" << endl;
    }
}
