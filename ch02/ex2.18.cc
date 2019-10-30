#include <iostream>

using namespace std;

int main() {
    int m = 1, n = 2;
    int *p = &m;
    cout << p << endl;

    p = &n;
    cout << p << endl;

    *p = 3;
    cout << n << endl;
}