#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4};
    cout << *v.begin() << endl; // 1
    cout << *(v.begin()) << endl; // 1

    cout << *v.begin() + 1 << endl; // 2
    cout << *(v.begin()) + 1 << endl; // 2
}