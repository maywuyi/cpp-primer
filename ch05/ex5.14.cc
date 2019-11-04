#include <iostream>

using namespace std;

int main() {
    string last;
    cin >> last;
    if (last.empty())
        return -1;

    int curCount = 1, maxCount = 1;
    string curStr, resStr;
    while (cin >> curStr) {
        if (curStr == last) {
            ++curCount;
            if (curCount > maxCount) {
                maxCount = curCount;
                resStr = curStr;
            }
        } else {
            last = curStr;
            curCount = 1;
        }
    }

    if (maxCount > 0)
        cout << maxCount << " : " << resStr << endl;
}