//
// Created by 何时夕 on 2017/12/10.
//

unsigned char rol(unsigned char val) {
    int highbit;
    //0x80 为八进制 二进制表达是 10000000 ， 这样一来就能保存val 的最高bit位
    if (val & 0x80) {
        highbit = 1;
    } else {
        highbit = 0;
    }
    val <<= 1;
    // 将保存起来的 val最高二进制位 放到最低位
    val |= highbit;
    return val;
}

unsigned char ror(unsigned char val) {
    int lowbit;
    //1 为八进制 二进制表达是 00000001 ， 这样一来就能保存val 的最低bit位
    if (val & 1) {
        lowbit = 1;
    } else {
        lowbit = 0;
    }
    val >>= 1;
    // 将保存起来的 val最低二进制位 移动到最高位
    val |= (lowbit << 7);
    return val;
}


