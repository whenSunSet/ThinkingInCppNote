//
// Created by 何时夕 on 2017/12/10.
//
#include <iostream>
using namespace std;

int main(int argc , char* argv[]){
    cout << "argc = " << argc << endl;
    for (int i = 0; i < argc; ++i) {
        cout << "argv[" << i << "] = " << argv[i] << endl;
    }

}

