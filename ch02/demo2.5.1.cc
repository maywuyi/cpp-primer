#include <iostream>

using namespace std;

int main() {
    // 类型别名 type alias
    typedef double d, *dp;
    d d1 = 1.12;
    dp dp1 = &d1;

    // 注意复合类型的类型别名
    typedef char *pstring; // pstring 类型为 char *
    const pstring cstr = 0; // const pstring 为指向 char 的常量指针
    const pstring *ps; // 同理，ps 指向指向 char 的常量指针

    // 别名声明
    using dd = double;
    dd d2 = 1.22;
}