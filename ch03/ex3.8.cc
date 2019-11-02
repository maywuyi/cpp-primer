#include <iostream>

using namespace std;

// 用 while 重写 range for
int main() {
    cout << "[input]: ";
    string s;
    getline(cin, s);
    int i = 0;
    while (s[i] != '\0')
        s[i++] = 'X';

    cout << "[replaced]: " << s << endl;
}