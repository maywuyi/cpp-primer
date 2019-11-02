#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> v = {10, "hi"};
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << endl;
}