#include <iostream>

using namespace std;

void f() { cout << __PRETTY_FUNCTION__ << endl; }

void f(int) { cout << __PRETTY_FUNCTION__ << endl; }

void f(int, int) { cout << __PRETTY_FUNCTION__ << endl; }

void f(double, double d = 3.14) { cout << __PRETTY_FUNCTION__ << endl; }

// 函数匹配
int main() {
    f(5.6);

    // f(1, 1.2); // error: ambiguous

    f(1);
    f(1, 0);
    f(1.1, 2.2);
}