#include <iostream>

using namespace std;

int main() {
    cout << "input 2 numbers: ";
    int n1, n2;
    cin >> n1 >> n2;

    try {
        if (n2 == 0)
            throw runtime_error(" division by zero is undefined");

        cout << n1 / static_cast<double>(n2) << endl;
    } catch (runtime_error err) {
        cout << "runtime failed: " << err.what() << endl;
    }
}