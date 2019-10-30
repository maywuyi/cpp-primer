#include <iostream>

using namespace std;

// 名字的作用域
// 始于声明，在声明语句作用域末端

int reused = 42;

// global scope
int main() {
    // block scope
    int sum = 0;
    for (int i = 0; i <= 10; i++) {
        sum += i;
    }

    cout << "SUM: " << sum << endl;

    cout << "reused: " << reused << endl;
    int reused = 10;
    cout << "reused: " << reused << endl;
    cout << "reused: " << ::reused << endl;

    return 0;
}