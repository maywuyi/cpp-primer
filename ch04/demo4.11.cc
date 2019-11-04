#include <iostream>

using namespace std;

// 类型转换
int main() {

    // 算术转换
    unsigned int ui = 0;
    signed int i = 0;

    // signed < unsigned
    i = -1;
    ui = 0;
    auto s1 = i + ui;
    cout << typeid(ui).name() << " " << typeid(s1).name() << " : " << s1 << endl; // 都是 unsigned 但结果是溢出错误的


    // signed >= unsigned
    i = INT_MAX - 2;
    ui = 1;
    auto s2 = i + ui;
    cout << typeid(ui).name() << " " << typeid(s2).name() << " : " << s2 << endl;



    // 隐式转换
    int arr[10];
    int *p = arr;
    decltype(arr) x;
    cout << typeid(arr).name() << endl;
    cout << typeid(x).name() << endl;

    void *pv = p;
    const int xx = 1;



    // 显式转换
    int n1 = 257;
    char c1 = static_cast<char>(n1);
    cout << (int) c1 << endl;

    void *p1 = &n1;
    int *p2 = static_cast<int *>(p1); // 找回 void* 指针，相当于 Go 的 interface
    cout << p1 << " " << p2 << endl;
}