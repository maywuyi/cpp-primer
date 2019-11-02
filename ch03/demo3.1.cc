#include <iostream>
#include "demo3.1.h"

// using 本来是类型别名
// 命名空间 using 声明
// 无需专门的前缀
using std::cin;
using std::cout; using std::endl;

int main() {
    int string;
    // string s(""); // 发生命名冲突
    int i;
    // i x = 0;

    int v;
    cin >> v;
    cout << v + 1 << endl;
}