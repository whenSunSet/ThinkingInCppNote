//
// Created by 何时夕 on 2018/1/9.
//
int fibonacci(int n) {
    const int sz = 100;
    static int f[sz];
    f[0] = f[1] = 1;
    int i;
    for (int j = 0; j < sz; ++j) {
        if(f[i] == 0) {
            break;
        }
        while (i <= n) {
            f[i] = f[i - 1] + f[i - 2];
            i++;
        }
    }
    return f[n];
}

