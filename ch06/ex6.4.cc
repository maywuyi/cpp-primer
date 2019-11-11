#include <iostream>

using namespace std;

long long fact(int n) {
    long long res = 1;
    while (n > 1)
        res *= static_cast<long long>(n--);

    cout << res << endl;
    return res;
}

int main() {
    cout << "input a number: ";
    int n;
    cin >> n;
    cout << "fact of " << n << " : " << fact(n) << endl;
}