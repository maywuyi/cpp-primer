#include <iostream>

using namespace std;


int sum(initializer_list<int> nums) {
    int res = 0;
    for (auto i = nums.begin(); i != nums.end(); ++i) {
        res += *i;
    }
    return res;
}

int main() {
    cout << sum({1, 2, 5}) << endl;
}