#include <iostream>

using namespace std;

int f1() {
    return 1;
}

constexpr int f2() {
    return 1;
}

// constexpr 和常量表达式
int main() {
    const int maxFiles = 20;
    const int limit = maxFiles + 1;

    int staffSize = 10; // not ok
    const int sz = f1(); // sz 是常量但不是常量表达式，不在编译时计算
    // sz = 100; // error


    // constexpr 函数允许编译时计算值
    constexpr int mf = 20;
    constexpr int limits = mf + 1;
    constexpr int szz = f2();


    // constexpr string s = "xxx"; // std::string 并非字面值常量
    int v = 1;
    const int *p = nullptr; // 指向整型常量的指针
    // *p = 1; // not ok
    p = &v; // ok

    constexpr int *q = nullptr; // 指向整数的常量指针  // constexpr 会将对象置为顶层 const，原理如此
    // q = &v; // not ok
    *q = 1; // ok
}