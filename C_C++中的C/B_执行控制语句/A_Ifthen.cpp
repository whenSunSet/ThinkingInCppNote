//
// Created by 何时夕 on 2017/12/9.
//
#include <iostream>
using namespace std;

int main(){
    int i;

    cout << "type an integer and 'Enter'" << endl;
    cin >> i;
    if(i > 5){
        cout << "'It s greater than 5'" << endl;
    } else{
        if (i < 5){
            cout << "'It s less than 5'" << endl;
        } else {
            cout << "'It s equal to 5'" << endl;
        }
    }

    cout << "type an integer and 'Enter'" << endl;
    cin >> i;
    if(i < 10){
        if(i > 5){
            cout << "5 < i < 10" << endl;
        } else{
            cout << "i <= 5" << endl;
        }
    } else{
        cout << "i >= 10" << endl;
    }

}


