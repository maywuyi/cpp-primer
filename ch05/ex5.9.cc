#include <iostream>

using namespace std;

int main() {
    unsigned a, e, i, o, u;
    a = e = i = o = u = 0;

    char c;
    while (cin >> c) {
        if (c == 'a')
            ++a;
        else if (c == 'e')
            ++e;
        else if (c == 'i')
            ++i;
        else if (c == 'o')
            ++o;
        else if (c == 'u')
            ++u;
    }

    cout << "a\te\ti\to\tu" << endl;
    cout << a << "\t" << e << "\t" << i << "\t" << o << "\t" << u << endl;

}