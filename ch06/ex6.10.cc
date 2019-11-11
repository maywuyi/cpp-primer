#include <iostream>

using namespace std;

void swap(int *x, int *y) {
    int p = *x;
    *x = *y;
    *y = p;
}

int main() {
    int x = 1, y = 2;
    swap(&x, &y);
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}