//
// Created by 何时夕 on 2018/1/7.
//
class Engine {
public:
    void start() const {}
    void rev() const {}
    void stop() const {}
};

class Wheel {
public:
    void inflate(int psi) const {}
};

class Window {
public:
    void rollup() const {}
};

class Door {
public:
    Window window;
    void open() const {}
    void close() const {}
};

class Car {
public:
    Engine engine;
    Wheel wheel[4];
    Door left , right;
};

int main() {
    Car car;
    car.left.window.rollup();
    car.wheel[0].inflate(72);
}

