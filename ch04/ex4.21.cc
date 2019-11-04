#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 43, 4};
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        *it *= *it % 2 == 1 ? 2 : 1;

    for (int i:v) {
        cout << i << " ";
    }
    cout << endl;
}