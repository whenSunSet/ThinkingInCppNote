//
// Created by 何时夕 on 2017/12/15.
//
void t(int*){}
void u(const int *cip){
//    *cip = 2; 指针是指向 const int的，所以数据不能更改
    int i = *cip;
//    int *ip2 = cip; 也不能将 const int 的数据直接赋值给 int
}

const char *v() {
    return "result of function v()";
}

const int* const w() {
    static int i;
    return &i;
}

int main() {
    int x = 0;
    int *ip = &x;
    const int *cip = &x;
    t(ip);

//    t(cip); 因为需要的 int 如果允许传入 const int 那么数据可能被修改
    u(ip); // 可能 在该函数里面不允许修改 传入值，那么传入 int 也不允许修改
    u(cip);

//    char *cp = v(); 不能将一个 const 赋值给一个非 const，
    const char *cpp = v();

//    int *ip2 = w();不能将一个 const 赋值给一个非 const，
    const int *cip2 = w();

    const int *const ccip = w();
}