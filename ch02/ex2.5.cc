#include <iostream>

using namespace std;

int main() {
    auto v1 = 1.2L;
    cout << typeid(v1).name() << endl; // long double
    auto v2 = 1.2F;
    cout << typeid(v2).name() << endl; // f
}