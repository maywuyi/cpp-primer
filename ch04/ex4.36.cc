#include <iostream>

using namespace std;

int main() {
    int i = 2;
    double d = 1.1;
    i *= static_cast<int>(d);
    cout << i << endl;
}