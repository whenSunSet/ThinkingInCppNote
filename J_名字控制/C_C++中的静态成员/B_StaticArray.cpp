//
// Created by 何时夕 on 2017/12/31.
//
class Value {
    static const int scSize = 100;
    static int size;

    static const long scLong = 100;
    static const float scFloat;

    static const int scInts[];
    static const long scLongs[];

    static const float scTables[];
    static float table[];

    static const char scLetters[];
    static char letters[];
};

int Value::size = 100;
const float Value::scFloat = 100;

const int Value::scInts[] = { 1 , 2 , 3};
const long Value::scLongs[] = { 1L , 2L , 3L};

const float Value::scTables[] = {1.1F , 2.2F , 3.3F};
float Value::table[] = {1.1F , 2.2F , 3.3F};

const char Value::scLetters[] = {'1' , '2' , '3'};
char Value::letters[] = {'1' , '2' , '3'};

/**
 * 1.内置类型 静态常量可以内联 也可以 不内联
 * 2.对象和数组 静态常量不能内联
 * 3.类外部定义 静态常量的时候  不需要 static
 */

int main() {}
