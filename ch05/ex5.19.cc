#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    do {
        cout << "input 2 string: ";
        cin >> s1 >> s2;
        cout << (s1.size() > s2.size() ? s2 : s1) << endl;
    } while (cin);
}