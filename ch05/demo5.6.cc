#include <iostream>

using namespace std;

// try 语句块与异常处理
int main() {
    int n1, n2;

    cout << "input 2 same number: ";
    while (cin >> n1 >> n2) {
        try {
            if (n1 != n2)
                throw runtime_error("input numbers must be same...");
        } catch (runtime_error err) {
            cout << err.what() << endl;
            cout << "try again?[y/n]: ";
            char yes = 'y';
            if (!(cin >> yes) || tolower(yes) == 'n')
                break;
        }
        cout << "input 2 same number: ";
    }

}