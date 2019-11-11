#include <iostream>

using namespace std;

void reset(int &i) {
    i = 0;
}

int main() {
    int x = 10;
    reset(x);
    cout << "x: " << x << endl;
}