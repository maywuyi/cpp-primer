#include <iostream>

using namespace std;

int main() {

    cout << "input 2 numbers: ";
    int n1, n2;
    cin >> n1 >> n2;
    if (n2 == 0) {
        cout << " division by zero is undefined" << endl;
        return -1;
    }

    cout << n1 / static_cast<double>(n2) << endl;
}