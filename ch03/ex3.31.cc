#include <iostream>

using namespace std;

int main() {
    int vs[10];
    for (size_t i = 0; i < sizeof(vs) / sizeof(vs[0]); i++) {
        vs[i] = i;
    }
    for (int i:vs)
        cout << i << " ";
    cout << endl;
}