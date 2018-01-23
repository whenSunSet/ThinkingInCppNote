//
// Created by 何时夕 on 2017/12/26.
//
class Recrangle {
    int width , height;
public:
    Recrangle(int w = 0 , int h = 0);
    int getWidth() const ;
    void setWidth(int w) ;
    int getHeight() const ;
    void setHeight(int h) ;
};

inline Recrangle::Recrangle(int w, int h) : width(w) , height(h) {}

inline int Recrangle::getWidth() const {
    return width;
}

inline void Recrangle::setWidth(int w) {
    width = w;
}

inline int Recrangle::getHeight() const {
    return height;
}

inline void Recrangle::setHeight(int h) {
    height = h;
}

int main() {
    Recrangle r(19 , 47);
    int iHeight = r.getHeight();
    r.setHeight(r.getWidth());
    r.setWidth(r.getHeight());
}

// 如果真的要使用类内联函数的话， 那么还是建议在类外部使用 inline来定义内联函数，
// 因为这样不会使得接口混乱，而且如果不想使用内联函数了 可以直接将inline删掉