#include <iostream>
#include <ctime>

using namespace std;

static const string alphas =
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

string randStr(int len) {
    string s;
    srand((unsigned) time(nullptr));
    for (int i = 0; i < len; i++) {
        s += alphas[rand() % (sizeof(alphas))];
    }
    return s;
}

int main() {
    string s1 = randStr(5), s2 = randStr(5);
    cout << s1 << " < " << s2 << " : " << (s1 < s2) << endl;
}