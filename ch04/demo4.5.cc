#include <iostream>
#include <vector>

using namespace std;

// 递增和递减运算符
int main() {
    vector<int> v;
    v = {1, 2, -3, 4};
    vector<int>::iterator it = v.begin();
    while (it != v.end() && *it >= 0)
        cout << *it++ << endl; // 简洁，等效于 it++, *it


    // 赋值运算符两侧都用到了同一变量，要注意运算顺序
    string s = "abcde";
    string::iterator itx = s.begin();
    while (itx != s.end() && !isspace(*itx))
        *itx = toupper(*itx++);
    cout << "itx: " << s << endl; // itx: aAAAA // 简直血崩啊这么用
}