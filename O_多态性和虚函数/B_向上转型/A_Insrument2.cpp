//
// Created by 何时夕 on 2018/1/7.
//
#include <iostream>
using namespace std;
enum note {
    middleC , Csharp , Eflat
};

class Instument {
public:
    void play(note) const {
        cout << "Instrument::play" << endl;
    }
};

class Wind : public Instument {
public:
    void play(note) const {
        cout << "Wind::play" << endl;
    }
};

void tune(Instument &i) {
    i.play(middleC);
}

int main() {
    Wind flute;
    tune(flute);
};