#include <iostream>

using namespace std;

int main() {
    int i, &ri = i;
    i = 1, ri = 2; // 从左到右赋值求值
    cout << i << " " << ri << endl; // 2 2
}