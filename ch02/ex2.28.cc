#include <iostream>

using namespace std;


int main() {
    const int *p; // 合法，指向常量的指针不必初始化，仅比普通指针更自觉不改变存储的值
    cout << typeid(p).name() << endl;
    cout << p << endl;
}