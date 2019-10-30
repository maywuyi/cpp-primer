#include <iostream>

using namespace std;

int main() {
    const int buf; // 常量和引用一样要显式初始化
    int cnt = 0;
    const int sz = cnt;
    cnt++, sz++; // 一样值不能变
}