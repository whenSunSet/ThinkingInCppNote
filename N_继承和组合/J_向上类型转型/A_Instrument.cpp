//
// Created by 何时夕 on 2018/1/7.
//
enum note {
    middleC , Csharp , CFlat
};

class Instrument {
public:
    void play(note) const {

    }
};

class Wind : public Instrument {};

void tune(Instrument &i) {
    i.play(middleC);
}

int main() {
    Wind flute;
    tune(flute);
}

// 类似java的向上转型