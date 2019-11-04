#include <iostream>

using namespace std;

int main() {
    srandom((unsigned) time(nullptr));
    int score = random() % 100;
    cout << "score: " << score << endl;

    cout << (score >= 90 ? "high pass" :
             score >= 75 ? "pass" :
             score >= 60 ? "low pass" : "no pass") << endl;


    // better
    if (score >= 90)
        cout << "high pass" << endl;
    else if (score >= 75)
        cout << "pass" << endl;
    else if (score >= 60)
        cout << "low pass" << endl;
    else
        cout << "no pass" << endl;
}