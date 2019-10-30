#include <iostream>

using namespace std;

// 指针和 const
int main() {
    const double pi = 3.14;
    // double *ptr = &pi;
    const double *cptr = &pi;
    // *cptr = 1; // cptr 只读变量无法赋值

    double v = 1.23;
    cptr = &v; // 指针自觉地不去改对象的值，但常量指针即可指向常量，也可以指向变量


    // 常量指针
    int n = 0, m = 1;
    int *const pn = &n;
    // pn = &m; // const 指针对象本身是已初始化的常量，不能被修改
}