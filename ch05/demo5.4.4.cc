#include <iostream>

using namespace std;

// do-while
int main() {
    int v1 = 0, v2 = 0;
    string no = "n";
    do {
        cout << "input 2 int: ";
        cin >> v1 >> v2;
        cout << v1 << " + " << v2 << " = " << v1 + v2 << endl;
        cout << "continue?[y/n]: ";
        cin >> no;
    } while (!no.empty() && tolower(no[1]) != 'n');
}