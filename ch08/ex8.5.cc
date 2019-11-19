#include<iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream in("demo.txt");
    if (!in) { // check open ok
        cout << "can't open file" << endl;
        return -1;
    }

    string word;
    vector<string> words;
    while (in >> word) { // read word
        words.push_back(word);
    }
    in.close(); // close

    for (const string &s:words) {
        cout << s << endl;
    }
}