#include <iostream>

using namespace std;

// 复合类型声明
int main() {
    // 多种声明形式
    int *p1, p2; // int* p1, p2; // p2 整数而非指针

    // 指向指针的指针
    int v = 10;
    int *p = &v;
    int **pp = &p;
    cout << "v: " << v << endl;
    cout << "*pp: " << *pp << endl; // 地址
    cout << "**pp: " << **pp << endl;

    // 指向指针的引用
    // 从右向左逐个声明符分析
    int *&ref = p;
    int n = 11;
    ref = &n;
    *ref = 12;
    cout << "*p: " << *p << endl; // 12
}