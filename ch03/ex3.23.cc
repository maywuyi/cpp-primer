#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <random>

using namespace std;

void prVector(vector<int> nums) {
    for (auto i: nums)
        cout << i << " ";
    cout << endl;
}

int main() {
    // 生成随机数
    vector<int> nums;
    srandom((unsigned) time(nullptr));
    for (int i = 0; i < 10; i++) {
        nums.push_back(random() % 100);
    }

    prVector(nums);

    for (auto v = nums.begin(); v != nums.end(); v++)
        *v *= 10;

    prVector(nums);
}