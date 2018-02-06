//
// Created by 何时夕 on 2018/1/23.
//
class MyError {
    const char *const data;
public:
    MyError(const char *const msg = 0) : data(msg) {}
};

void f() {
    throw MyError("Something bad happened!");
}

int main() {
    f();
}
//类似java的抛出异常

