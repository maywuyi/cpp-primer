#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> lines;
    string line;
    while (getline(cin, line))
        lines.push_back(line);

    for (auto it = lines.begin(); it != lines.end() && !it->empty(); it++) {
        for (auto itx = it->begin(); itx != it->end(); itx++)
            *itx = toupper(*itx);

        cout << *it << endl;
    }
}