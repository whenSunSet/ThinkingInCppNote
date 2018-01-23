//
// Created by 何时夕 on 2018/1/7.
//
#include <iostream>
using namespace std;

enum note {
    middleC , CSharp , Cflat
};

class Instrument {
public:
    virtual void play(note) const {
        cout << "Instrument::play(note)" << endl;
    }
    virtual void play() const {
        cout << "Instrument::play()" << endl;
    }
    virtual char* what() const {
        return "Instrument";
    }
    virtual void adjust(int) {
        cout << "Instrument::adjust(int)" << endl;
    }

    void a(int) {
        cout << "Instrument::a(int)" << endl;
    }
};

class Wind : public Instrument {
public:
    void play(note) const {
        cout << "Wind::play(note)" << endl;
    }
    char* what() const  {
        return "Wind";
    }
    void adjust(int) {
        cout << "Wind::adjust(int)" << endl;
    }
    void adjust() {
        cout << "Wind::adjust()" << endl;
    }
    virtual void a(int) {
        cout << "Wind::a(int)" << endl;
    }
};

class Percussion : public Instrument {
public:
    void play(note) const {
        cout << "Percussion::play" << endl;
    }
    char* what() const {
        return "Percussion";
    }
    void adjust(int) {}
};

class Stringed : public Instrument {
public:
    void play(note) const {
        cout << "Stringed::play" << endl;
    }
    char* what() const {
        return "Stringed";
    }
    void adjust(int) {}
};

class Brass : public Wind {
public:
    void play(note) const {
        cout << "Brass::play" << endl;
    }
    char* what() const {
        return "Brass";
    }
};

class Woodwind : public Wind {
public:
    void play(note) const {
        cout << "Woodwind::play" << endl;
    }
    char* what() const {
        return "Woodwind";
    }
};

class Winds : public Wind {
public:
    void a(int) {
        cout << "Winds::a(int)" << endl;
    }
};

void tune(Instrument &i) {
    i.play();
    i.play(middleC);
    i.a(1);
    i.adjust(1);
    cout << i.what() << endl;
}

void tunes(Wind &i) {
    i.play(middleC);
    i.a(1);
    i.adjust(1);
    cout << i.what() << endl;
}

Instrument *A[] = {
        new Instrument,
        new Wind,
        new Percussion,
        new Stringed,
        new Brass,
        new Woodwind,
        new Winds,
};

int main() {
    Instrument instrument;
    Wind wind;
    Percussion percussion;
    Stringed stringed;
    Brass brass;
    Woodwind woodwind;
    Winds winds;

    tune(instrument);
    tune(wind);
    tune(percussion);
    tune(stringed);
    tune(brass);
    tune(woodwind);

    tunes(winds);
}
