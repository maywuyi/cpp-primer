#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    if (argc <= 2) {
        cout << "usage: ./exec s1 s2" << endl;
        return -1;
    }

    string res;
    for (int i = 1; i < argc; i++) {
        res += argv[i];
    }

    cout << res << endl;
}