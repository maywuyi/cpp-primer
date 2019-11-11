#include <iostream>

using namespace std;


double abs(double v) {
    if (v < 0)
        return -v;
    return v;
}

int main() {
    cout << "input a number: ";
    double d;
    cin >> d;

    cout << "abs of " << d << " : " << abs(d) << endl;
}

