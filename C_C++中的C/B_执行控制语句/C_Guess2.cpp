//
// Created by 何时夕 on 2017/12/9.
//
#include <iostream>
using namespace std;

int main(){
    int secret = 15;
    int guess;
    // do while 和 while的区别在于 do while 就是执行为假 也会先执行一遍
    do {
        cout << "guess the number: ";
        cin >> guess;
    } while (guess != secret);
    cout << "You got it!" << endl;
}


