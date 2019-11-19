#include<iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
    ifstream in("demo.txt");
    if (!in) { // check open ok
        cout << "can't open file" << endl;
        return -1;
    }

    string line;
    vector<string> lines;
    while (getline(in, line)) { // read line
        lines.push_back(line);
    }
    in.close(); // close

    for (const string &s:lines) {
        istringstream is(s);
        string word;
        while (is >> word)
            cout << word << " ";
        cout << endl;
    }
}