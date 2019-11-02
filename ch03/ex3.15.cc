#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> words;
    string s;
    while (cin >> s) {
        words.push_back(s);
    }


    for (auto word : words)
        cout << word << endl;
}
