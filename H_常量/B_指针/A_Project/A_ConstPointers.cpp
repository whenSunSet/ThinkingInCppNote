//
// Created by 何时夕 on 2017/12/15.
//
/**
 * const 在指针情况下 有下面这三种情况
 * 1.指向 const数据 的 指针
 * 2.const指针 指向一个 数据
 * 3.const指针 指向一个 const数据
 */

// 1.指向 const数据 的 指针
const int i = 1;
const int *p = &i;// 指针符号* 其实是 右结合的，所以此时需要从右向左读：一个指针p 指向了 const int类型的数据

//int *m = &i; 编译报错 const int  和 int 不是一种类型

// 2.const指针 指向一个 数据
int j = 2;
int *const n = &j;// 读作：一个 const的指针n 指向了 int类型的数据

// 3.const指针 指向一个 const数据
const int k = 3;
const int *const m = &k;// 读作：一个 const的指针n 指向了 const int类型的数据

// const 和 int可以互换所以，以上又可以换成
int const *o = &i;// 1
int const *const u = &k;// 2

int main() {
//    *p =2; 编译报错 不能通过 指向 const int 的指针 来修改 const int

}
