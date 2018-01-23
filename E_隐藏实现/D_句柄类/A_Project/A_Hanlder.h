//
// Created by 何时夕 on 2017/12/13.
//

#ifndef THINKING_IN_C_A_HANLDER_H
#define THINKING_IN_C_A_HANLDER_H

struct Cheshire;

class Handler {
public:
    void initialize();
    void cleanup();
    int read();
    void change(int x);

private:
    Cheshire* smile;

};
/**
 * 1.一般来说 .h 文件是一个库暴露给 客户程序员的 api文件。
 * 2.如果我们将 class 的定义放在 .h文件中：
 *      1.那么就会出现客户程序员了解 class内部结构的问题，从而导致客户程序员用某种方式访问 private的成员
 *      2.一个大项目中，只要.h文件更改了，那么引用了该文件的地方就要重新编译
 * 3.为了解决上面两个问题
 *      1.对不能暴露出来的 class 和 频繁变化的 class，只在.h文件中对其进行声明。
 *      2.在模块内部 进行 class 结构的定义
 * 4.用了3之后，会发现
 *      1.客户程序员完全不会了解到 class内部的结构了。
 *      2.如果class变化了，那么只需要重新编译 模块内部的文件就行了。
 */
#endif //THINKING_IN_C_A_HANLDER_H
