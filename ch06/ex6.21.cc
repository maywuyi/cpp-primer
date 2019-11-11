#include <iostream>

using namespace std;

int bigger(const int x, const int *y) {
    return x > *y ? x : *y;
}

int main() {
    int x = 1, y = 2;
    cout << bigger(x, &y) << endl;
}