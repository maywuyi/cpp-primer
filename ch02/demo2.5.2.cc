#include <iostream>
#include <typeinfo>
#include "Sales_item.h"

using namespace std;


void f(void *) {

}

// auto 类型说明符
int main() {
    Sales_item item1, item2;
    auto item3 = item1 + item2;
    // auto n = 0, f = 1.2; // 类型必须一致


    // 复合类型、常量和 auto
    int i = 0, &r = i;
    auto a = r;
    cout << typeid(a).name() << endl;

    const int ci = i, &cr = ci;
    auto b = ci;
    cout << typeid(b).name() << endl; // i
    auto c = cr;
    cout << typeid(c).name() << endl; // i

    auto d = &i;
    cout << typeid(d).name() << endl; // Pi
    auto e = &ci;
    cout << typeid(e).name() << endl; // PKi
}