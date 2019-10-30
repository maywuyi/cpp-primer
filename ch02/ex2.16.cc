#include <iostream>

using namespace std;

int main() {
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 1.1;
    cout << d << endl;

    r2 = r1; // 等价于 d = i 是合法的
    cout << d << endl;

    i = r2;
    cout << i << endl;

    r1 = d;
    cout << r1 << endl;
}