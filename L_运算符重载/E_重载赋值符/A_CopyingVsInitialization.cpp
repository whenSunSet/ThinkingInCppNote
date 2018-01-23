//
// Created by 何时夕 on 2018/1/3.
//
class Fi {
public:
    Fi() {}
};

class Fee {
public:
    Fee(int) {}
    Fee(const Fi&) {}
};

int main() {
    Fee fee = 1;// 调用Fee(int) {}
    Fi fi;
    Fee fum = fi;//调用Fee(const Fi&) {}
}
/**
 * 对一个对象赋值的时候 有两种情况
 * 1.这个对象是在初始化 ，那么会调用 相应的拷贝构造函数
 * 2.这个对象已经初始化了，那么会调用 相应的 =重载函数
 */
