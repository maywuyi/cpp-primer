#include <iostream>

using namespace std;

int main() {
    cout << "[input]: ";
    string s;
    getline(cin, s);
    for (char &c:s)
        c = 'X';
    cout << "[replaced]: " << s << endl;
}