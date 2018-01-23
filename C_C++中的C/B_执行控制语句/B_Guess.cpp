//
// Created by 何时夕 on 2017/12/9.
//
#include <iostream>
using namespace std;

int main(){
    int secret = 15;
    int guess = 0;
    while (guess != secret) {
        cout << "guess the number: ";
        cin >> guess;
    }
    cout << "You guessed it!" << endl;
}

