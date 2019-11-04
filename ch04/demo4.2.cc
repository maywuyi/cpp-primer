#include <iostream>

using namespace std;

// 算术运算符
int main() {
    short v = 32767;
    v++;
    cout << "short overflow: " << v << endl; // -32768 // 符号位变为 1 负数

    // 除法一律向 0 靠齐
    cout << 8.0 / 3 << endl;
    cout << 8 / 3 << endl;
    cout << -8 / 3 << endl;

    // 注意正负号
    cout << "----" << endl;
    cout << -8 / 3 << endl; // -2
    cout << 8 / -3 << endl; // -2
    cout << -8 % 3 << endl; // -2
    cout << 8 % -3 << endl; // 2
    cout << -8 % -3 << endl; // -2
}