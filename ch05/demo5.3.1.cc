#include <iostream>
#include <vector>

using namespace std;

const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};

// 条件语句
int main() {
    srandom((unsigned) time(nullptr));
    string gradeLetter;
    int grade = random() % 100;

    if (grade < 60)
        gradeLetter = scores[0];
    else {
        gradeLetter = scores[(grade - 50) / 10]; // 关联下标
        if (grade != 100) {
            if (grade % 10 > 7)
                gradeLetter += "+";
            else if (grade % 10 < 3)
                gradeLetter += "-";
        }
    }

    cout << grade << " : " << gradeLetter << endl;
}
