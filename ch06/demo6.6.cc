#include <iostream>

using namespace std;

void f1(short) { cout << __PRETTY_FUNCTION__ << endl; }

void f1(int) { cout << __PRETTY_FUNCTION__ << endl; }

void f2(long) { cout << __PRETTY_FUNCTION__ << endl; }

void f2(float) { cout << __PRETTY_FUNCTION__ << endl; }

int calc(char *, char *);

int calc(const char *, const char *);

// int calc(char *const, char *const); // gg


// 实参类型转换
int main() {
    f1('c');

    // f2(4.2); // error: call to 'f2' is ambiguous
}