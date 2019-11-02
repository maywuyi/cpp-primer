#include <iostream>
#include <vector>

using namespace std;

// 其他 vector 操作
int main() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    for (auto &i:v)
        i *= i;
    for (auto i:v)
        cout << i << endl;

    decltype(v.size()) t;
    cout << typeid(t).name() << endl; // m
    // 关系运算对齐 string 类型


    // 计算 vector 内对象的索引
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade)
        if (grade <= 100)
            ++scores[grade / 10];

    for (auto i : scores)
        cout << i << " ";
    cout << endl;

    // 自然是不能通过下标向空 vector 中添加元素的
    vector<int> v2;
    for (decltype(v2.size()) i = 0; i < 10; ++i)
        // v2[i] = i; // 直接崩溃
        ;
}