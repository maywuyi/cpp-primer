#include <iostream>
#include <vector>

using namespace std;

bool binSearch(vector<int> nums, int target);

// 迭代器运算
int main() {
    vector<string> v1{"a", "b", "c", "D"};
    auto midx = v1.begin() + v1.size() / 2;
    cout << "mid: " << *midx << endl;

    // difference_type
    cout << midx - v1.begin() << endl;
    cout << v1.begin() - midx << endl;



    // 二分搜索
    vector<int> nums{-1, 1, 3, 5, 7, 8, 9};
    cout << binSearch(nums, 8) << endl; // 1
}

bool binSearch(vector<int> nums, int target) {
    auto l = nums.cbegin();
    auto r = nums.cend();
    auto mid = l + (r - l) / 2;
    while (mid != r && *mid != target) {
        if (target < *mid)
            r = mid - 1;
        else
            l = mid + 1;
        mid = l + (r - l) / 2;
    }

    return *mid == target;
}