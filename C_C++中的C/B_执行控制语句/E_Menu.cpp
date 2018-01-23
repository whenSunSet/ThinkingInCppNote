//
// Created by 何时夕 on 2017/12/9.
//
#include <iostream>
using namespace std;

int main(){
    char c;
    while (true) {
        cout << "MAIN MENU:" << endl;
        cout << "l: left, r: right, q: quit -> ";
        cin >> c;
        if (c == 'q'){
            break;
        }
        if (c == 'l'){
            cout << "LEFT MENU:" << endl;
            cout << "select a or b: ";
            cin >> c;
            if (c == 'a'){
                cout << "you choose 'a'" << endl;
                continue;
            }
            if (c == 'b'){
                cout << "you choose 'b'" << endl;
                continue;
            } else {
                cout << "you did not choose a or b!" << endl;
                continue;
            }
        }
        if (c == 'r'){
            cout << "RIGHT MENU:" << endl;
            cout << "select c or d: ";
            cin >> c;
            if (c == 'c'){
                cout << "you choose 'c'" << endl;
                continue;
            }
            if (c == 'd'){
                cout << "you choose 'd'" << endl;
                continue;
            } else {
                cout << "you did not choose c or d!" << endl;
                continue;
            }
        }
        cout << "you must choose r or l!" << endl;
    }
    cout << "quitting menu...." << endl;

}


