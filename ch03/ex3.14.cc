#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    int v;
    while (cin >> v) {
        nums.push_back(v);
    }


    for (auto i : nums)
        cout << i << endl;
}
