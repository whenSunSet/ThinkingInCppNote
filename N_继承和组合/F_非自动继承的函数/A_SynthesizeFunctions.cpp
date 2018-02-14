//
// Created by 何时夕 on 2018/1/6.
//
#include <iostream>
using namespace std;

class GameBoard {
public:
    GameBoard() {
        cout << "GameBoard()\n";
    }
    GameBoard(const GameBoard&) {
        cout << "GameBoard(const GameBoard&)\n";
    }
    GameBoard& operator=(const GameBoard&) {
        cout << "GameBoard::operator=()\n";
        return *this;
    }
    ~GameBoard() {
        cout << "~GameBoard()\n";
    }
};

class Game {
    GameBoard gb;
public:
    Game() {
        cout << "Game\n";
    }
    Game(const Game &g) : gb(g.gb) {
        cout << "Game(const Game&)\n";
    }
    Game(int) {
        cout << "Game(int)\n";
    }
    Game& operator=(const Game &g) {
        gb = g.gb;
        cout << "Game::operator=()\n";
        return *this;
    }
    class Other {};
    operator Other() const {
        cout << "Game::operator Other()\n";
        return Other();
    }
    ~Game() {
        cout << "~Game()\n";
    }
};

class Chess : public Game {};

void f(Game::Other) {}

class Checkers : public Game {
public:
    Checkers() {
        cout << "Checkers()\n";
    }
    Checkers(const Checkers &c) : Game(c) {
        cout << "Checkers(const Checkers &c)\n";
    }
    Checkers& operator=(const Checkers &c) {
        Game::operator=(c);
        cout << "Checkers::operator=()\n";
        return *this;
    }
};


int main() {
    Chess d1;
    Chess d2(d1);
//    Chess d3(1);
    d1 = d2;

    f(d1);
    Game::Other go;
//    d1 = go;

    Checkers c1 , c2(c1);
    c1 = c2;
}

/**
 * 1.有这些函数如果没有 定义编译器会调用基本的版本：
 *      1.默认构造函数，如果类没有定义构造函数 那么编译器会生成 无参默认构造函数
 *      2.拷贝构造函数，如果类没有定义拷贝构造函数 那么编译器会生成 传入引用的拷贝构造函数
 *      3.operator=函数，编译器会默认生成 =的重载，该函数在初始化之后的赋值中被调用
 * 2.构造函数、拷贝构造函数、析构函数、=重载 是不会被继承的，只会像上面说的被编译器默认创建
 * 3.编译器生成的各个函数 会递归的从子类到父类全部调用一遍，但是如果是自己定义的那些函数就需要手动调用
 * 比如 拷贝构造函数 和 =重载函数
 * 4.在自动调用 =重载函数的时候 父子类 的调用顺序和 构造函数类似 都是从父类到子类
 * 5.静态函数成员也可以被继承到派生类中
 * 6.静态函数成员 也不能在 继承间重载
 * 7.静态函数成员 也可以重写
 * 8.静态函数成员 不可用是虚函数
 */
