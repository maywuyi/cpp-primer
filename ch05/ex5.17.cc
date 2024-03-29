#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1 = {0, 1, 1, 2};
    vector<int> v2 = {0, 1, 1, 2, 3, 5, 8};
    if (v1.size() < v2.size()) {
        vector<int> tmp = v1;
        v1 = v2;
        v2 = tmp;
    }
    auto it1 = v1.begin(), it2 = v2.begin();
    while (it1 != v1.end() && *it1 == *it2)
        ++it1, ++it2;

    if (it1 == v1.end())
        cout << "prefix valid" << endl;
    else
        cout << "no prefix" << endl;
}