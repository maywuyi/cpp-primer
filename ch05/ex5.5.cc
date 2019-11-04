#include <iostream>
#include <vector>

using namespace std;

const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};

// 条件语句
int main() {
    srandom((unsigned) time(nullptr));
    string l;
    int g = random() % 100;

    string tail;
    if (g % 10 > 7)
        tail = "+";
    else if (g % 10 < 3)
        tail = "-";

    int bit = g / 10;
    if (bit == 10)
        l = "A++";
    else if (bit >= 9)
        l = "A";
    else if (bit >= 8)
        l = "B";
    else if (bit >= 7)
        l = "C";
    else if (bit >= 6)
        l = "D";
    else
        l = "F";

    if (l != "A++" && l != "F")
        l += tail;

    cout << g << " : " << l << endl;
}
