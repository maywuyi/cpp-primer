#include <iostream>

using namespace std;

extern int v = 10; // 定义低效 extern

// 变量声明和定义的关系
int main() {
    // 函数体内部
    // extern int v = 10; //  'extern' variable cannot have an initializer

    int v = 100; // 声明并定义
}