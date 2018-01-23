//
// Created by 何时夕 on 2017/12/9.
//
#include <iostream>
using namespace std;

int main(){
    bool quit = false;
    while (quit == false) {
        cout << "Select a,b,c or q to quit: ";
        char response;
        cin >> response;

        switch (response) {
            case 'a':cout << "you choose 'a'" << endl;
                break;
            case 'b':cout << "you choose 'b'" << endl;
                break;
            case 'c':cout << "you choose 'c'" << endl;
                break;
            case 'q':cout << "quitting menu" << endl;
                quit = true;
                break;
            default:cout << "Please use a,b,c or q!" << endl;
        }
    }
}


