#include <iostream>

using namespace std;

void swap(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

int main() {
    int x = 1, y = 2;
    swap(x, y);
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}