#include <iostream>

using namespace std;

// 顶层 const
int main() {
    // top level const
    int v1 = 1;
    int *const p1 = &v1;
    const int c1 = 1;

    // low level const
    int v2 = 2;
    const int *p2 = &v1;
    // *p2 = 20; // not ok
    p2 = &v2; // ok // 指针的指向不受 low level const 限制


    const int *const p3 = p2;
    const int &r = c1; // 引用 底层 const


    // 赋值对象拷贝，双方必须有相同的底层 const
    // int *p = p3;
    p2 = p3;
    p2 = &v1;
    // int &ref = c1;
    const int &ref = c1; // ok
}