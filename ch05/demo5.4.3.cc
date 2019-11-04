#include <iostream>
#include <vector>

using namespace std;

// 范围 for 语句
int main() {
    // 不要在 for 循环内部增删元素
    // 可能会导致尾迭代器失效
    vector<int> v = {1, 2, 3, 4};
    for (auto b = v.begin(), e = v.end(); b != e; ++b) {
        v.push_back(100);
        cout << *b << endl;
    }
}