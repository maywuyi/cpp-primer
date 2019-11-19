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

    string line;
    vector<string> lines;
    while (getline(in, line)) { // read line
        lines.push_back(line);
    }
    in.close(); // close

    for (const string &s:lines) {
        cout << line << endl;
    }
}