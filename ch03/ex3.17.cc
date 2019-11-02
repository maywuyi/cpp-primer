#include <iostream>
#include <vector>


using namespace std;

int main() {
    vector<string> words;
    string word;
    while (cin >> word)
        words.push_back(word);

    for (auto &s:words) {
        for (char &c:s)
            c = toupper(c);
        cout << s << endl;
    }

}