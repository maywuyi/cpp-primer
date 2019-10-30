#include <iostream>

using namespace std;

int main() {
    int i = 2;
    int *p = &i;
    *p = *p * *p;
    cout << i << endl; // 2*2 = 4
}