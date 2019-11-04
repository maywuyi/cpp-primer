#include <iostream>
#include <vector>

using namespace std;

// 逗号运算符
int main() {
    vector<int> v = {1, 2, 4, 5};
    vector<int>::size_type n = v.size();
    // for (vector<int>::size_type i = 0; i != v.size(); ++i, --n)

    // 无差别
    // 只是后缀相比前缀操作会有些浪费
    for (vector<int>::size_type i = 0; i != v.size(); i++, n--)
        v[i] = n;

    for (int &x:v)
        cout << x << endl;
}