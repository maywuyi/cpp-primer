#include <iostream>

using namespace std;

double f() {
    return 1;
}

// decltype 类型指示符
int main() {
    decltype(f()) n = 0;
    cout << typeid(n).name() << endl; // d

    // decltype 原汁原味保留 const 顶层底层
    const int ci = 0, &cj = ci;
    decltype(ci) x = 0;
    decltype(cj) y = x;
    // decltype(cj) z; // 引用必须初始化


    // decltype 和引用
    int i = 0, *p = &i, &r = i;
    decltype(r + 0) b;
    cout << typeid(b).name() << endl; // i
    // decltype(*p) c; // 表达式是解引用操作，结果类型为引用
}