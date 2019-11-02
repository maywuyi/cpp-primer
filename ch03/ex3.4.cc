#include <iostream>

using namespace std;

void readBigger() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 != s2)
        cout << (s1 > s2 ? s1 : s2) << endl;
    else
        cout << "[SAME]" << endl;
}


void readLonger() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() != s2.size())
        cout << (s1.size() > s2.size() ? s1 : s2) << endl;
    else
        cout << "[SAME]" << endl;
}

int main() {
    // readBigger();
    readLonger();
}