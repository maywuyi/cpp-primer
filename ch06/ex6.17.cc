#include <iostream>

using namespace std;

bool hasUpper(const string &s) {
    for (auto c : s)
        if (isupper(c))
            return true;

    return false;
}

void toUpper(string &s) {
    for (auto &c : s)
        if (isupper(c))
            c = tolower(c);
}

int main() {
    string s = "Demo";
    cout << hasUpper(s) << endl;
    toUpper(s);
    cout << s << endl;
}