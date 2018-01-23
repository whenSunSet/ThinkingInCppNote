//
// Created by 何时夕 on 2017/12/24.
//
class Rectangle {
    int width , height;
public:
    Rectangle(int w = 0 , int h = 0) : width(w) , height(h) {}
    int getWidth() const { return width;}// 最后就演变成 类似java的 get/set
    void setWidth(int w) {width = w;}
    int getHeight() const { return height;}
    void setHeight(int h) { height = h;}
};

int main() {
    Rectangle r(19 , 47);
    r.setHeight(2 * r.width());
    r.setWidth(2 * r.height());
}


