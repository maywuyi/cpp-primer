#include <iostream>

using namespace std;

// 指针
int main() {
    // 同样类型也要严格匹配
    double d = 1.2;
    double *pd = &d;
    // int *pi = pd; // cannot initialize a variable of type 'int *' with an lvalue of type 'double *'


    int n = 10;
    int *pi = &n;
    int &refN = *pi; // refN refer to pointer pi which point to n
    refN = 11;
    cout << "N: " << n << endl;

    // 空指针
    int *p1 = 0;
    int *p2 = nullptr; // 值为 0
    int *p3 = NULL;
    // cout << "P1: " << *p1 << endl; // 访问空指针后果无法预计：[1]    22197 segmentation fault ./demo


    // 赋值和指针
    int n1 = 10;
    int *p4 = &n1;
    *p4 = 0; // 即 n1=0
    p4 = 0;  // 即 p4=nullptr
    // cout << *p4 << endl; // 同样 gg


    // 其他指针操作
    int *pa = 0;
    int *pb = &n1;
    if (pa)
        cout << "pa ok" << endl;
    if (pb)
        cout << "pb ok" << endl;


    // void* 指针
    int n2 = 10;
    int *pc = &n2;
    void *px = pc;
    void *py = px; // void * 相互赋值
    d = 100.1;
    px = &d; // void* 通用指针存储任意类型指针
}