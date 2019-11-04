#include <iostream>

using namespace std;


// 基本概念
int main() {

    // 左值和右值
    int v = 1;
    int *p = &v;
    decltype(*p) x = v;
    decltype(&p) pp = &p;
    cout << typeid(x).name() << endl; // 整型引用
    cout << typeid(pp).name() << endl; // 指向指针的指针



    // 优先级和结合律
    int i = 0;
    cout << i << " " << ++i << endl; // 求值顺序未定
}