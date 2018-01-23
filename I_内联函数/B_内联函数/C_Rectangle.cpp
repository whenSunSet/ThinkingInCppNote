//
// Created by 何时夕 on 2017/12/24.
//
class Rectangle {
    int wide , high;
public:
    Rectangle(int w = 0 , int h = 0) : wide(w) , high(h) {}
    int width() const { return wide;}//因为 使用了构造函数初始化列表 所以不能将 get/set方法名写成成员变量名
    void width(int w) {wide = w;}
    int height() const { return high;}
    void height(int h) { high = h;}
};

int main() {
    Rectangle r(19 , 47);
    r.height(2 * r.width());
    r.width(2 * r.height());
}

