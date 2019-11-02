#include <iostream>

using namespace std;


// 数组
int main() {
    // 定义和初始化内置数组
    unsigned n1 = 10;
    constexpr unsigned n2 = 10;

    int nums1[n1]; // 非常量表达式作为数组长度并没有 error
    cout << nums1[0] << endl;



    // 显式初始化数组元素
    char c1[2] = {'a', 'b'}; // ok
    // char c2[2] = "ab"; // too long


    // 复杂的数组声明
    int *p1[10];
    int (*p2)[10];
    // int &r1[10]; // 数组不存引用
    int a1[10];
    int (&r2)[10] = a1; // 但是存在数组的引用，同样需初始化
}
