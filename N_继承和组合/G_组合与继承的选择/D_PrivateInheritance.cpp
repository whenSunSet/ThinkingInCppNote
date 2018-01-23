//
// Created by 何时夕 on 2018/1/7.
//
class Pet {
public:
    char eat() const {
        return 'a';
    }
    int speak() const {
        return 2;
    }
    float sleep() const {
        return 3.0;
    }
    float sleep(int) const {
        return 4.0;
    }
};

class Goldfish : Pet {
public:
    using Pet::eat;
    using Pet::sleep;
};

int main() {
    Goldfish bob;
    bob.eat();
    bob.sleep();
    bob.sleep(1);
}

/**
 * 如果我们不在继承的时候使用 public的话 那么默认就是 private的私有继承，有以下特地那
 * 1.该对象不能被看成基类
 * 2.基类所有的 protect 和 public的成员 到了子类中都变成了 private的了，外部不可见了
 * 3.可以在 子类中的 public中恢复 基类成员的可见性，注意对于恢复成员函数的可见性 名字是唯一签名
 */

