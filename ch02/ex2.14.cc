#include <iostream>

using namespace std;

int main() {
    int i = 100, sum = 0;
    for (int i = 0; i != 10; i++) { // for 语句内部声明的变量作用域在 {} 内部
        sum += i;
    }
    cout << "i: " << i << endl; // 100
    cout << "sum: " << sum << endl; // 45
}