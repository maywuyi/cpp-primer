#include <iostream>

using namespace std;

// switch 语句
int main() {
    unsigned a, e, i, o, u;
    a = e = i = o = u = 0;

    unsigned charCount = 0, other = 0;

    char ch;
    while (cin >> ch) {
        switch (ch) {
            case 'a':
                ++a;
                break;
            case 'e':
                ++e;
                break;
            case 'i':
                ++i;
                break;
            case 'o':
                ++o;
                break;
            case 'u':
                ++u;
                break;
        }

        // 合并多 case
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++charCount;
            default:
                ++other;
        }
    }

    cout << "a\te\ti\to\tu" << endl;
    cout << a << "\t" << e << "\t" << i << "\t" << o << "\t" << u << endl;




    // switch 内部变量定义
    string name;
    bool b = false;
    switch (b) {
        case true: {
            string name = "x";
            break;
        }
        case false: // error: cannot jump from switch statement to this case label
            name = "z";
    }
}