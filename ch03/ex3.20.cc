#include <iostream>
#include <vector>

using namespace std;

void sumNear() {
    vector<int> vs;
    int v;
    while (cin >> v)
        vs.push_back(v);

    for (vector<int>::size_type i = 0; i < vs.size() && i + 1 < vs.size(); i += 2) {
        cout << vs[i] + vs[i + 1] << endl;
    }
}

void sumGaps() {
    vector<int> vs;
    int v;
    while (cin >> v)
        vs.push_back(v);
    auto j = vs.size() - 1;
    for (int i = 0; i < j; i++, j--) {
        cout << vs[i] + vs[j] << endl;
    }
}

int main() {
    sumNear();
    sumGaps();
}