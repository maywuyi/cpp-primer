#include <iostream>

using namespace std;

// 赋值运算符
int main() {
    int i, j;
    i = j = 1;

    int v, *p;
    // p = v = 0; // 类型一致或能转换


    // 复合运算符
    int a, b;
    a = 1, b = 2;
    a += b + 3;
    cout << "a: " << a << endl;
}