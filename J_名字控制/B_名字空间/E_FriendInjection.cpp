//
// Created by 何时夕 on 2017/12/31.
//
namespace Me {
    class Us {
        int i;
        // you 变成了 Me空间的一个成员
        friend void you(Us *us);
    };

    void you(Us *us) {
        us->i;
    }
}
int main() {}

