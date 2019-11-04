#include <iostream>
#include <vector>

using namespace std;

const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};

// 条件语句
int main() {
    srandom((unsigned) time(nullptr));
    string l;
    int g = random() % 100;

    l = g / 10 == 10 ? "A++" :
        g / 10 >= 9 ? "A" :
        g / 10 >= 8 ? "B" :
        g / 10 >= 7 ? "C" :
        g / 10 >= 6 ? "D" : "F";

    l += (l != "A++" && l != "F") ?
         (g % 10 > 7 ? "+" : g % 10 < 3 ? "-" : "") : "";

    cout << g << " : " << l << endl;
}
