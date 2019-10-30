#include <iostream>

using namespace std;

int main() {
    int *p1, i1, &r1 = i1;
    cout << typeid(p1).name() << endl; // int *
    cout << typeid(i1).name() << endl; // int
    cout << typeid(r1).name() << endl; // int

    int i2, *p2 = 0;
    cout << p2 << endl; // p2 NULL

    int *p3, p4;
    cout << p3 << endl; // 也是空指针
    cout << p4 << endl;
}