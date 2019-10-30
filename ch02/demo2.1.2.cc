#include <iostream>

using namespace std;

// 类型转换
int main() {
    bool b = 21; // 1
    int i = b;
    i = 3.14; // 3
    double pi = i; // 3
    unsigned char c1 = -1; // (-1+256)%256=255
    signed c2 = c1; // undefined // 赋值给 signed


    cout << b << " " << i << " " << pi << " ";
    cout << c1 << " " << c2 << endl;

    if (i)
        cout << "TRUE" << endl;

    // 含无符号类型的表达式转换
    unsigned u = 10;
    int n = -42;
    cout << n + n << endl; // -84
    cout << u + n << endl; // 4294967264

    unsigned u1 = 12, u2 = 10;
    cout << u1 - u2 << endl; // 2
    cout << u2 - u1 << endl; // 超出 unsigned 后取最大值的摸


    // unsigned 不会为负值
    // 死循环 bug
    // for (unsigned u = 10; u >= 0; u--) {
    //     cout << u << endl;
    // }

    // while 探测边界 0 改进
    unsigned un = 11;
    while (un > 0) {
        --un;
        cout << un << endl;
    }

}