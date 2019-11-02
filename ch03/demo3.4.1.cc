#include <iostream>
#include <vector>

using namespace std;

// 迭代器 iterator
int main() {
    // vector<int> v1{1, 2, 3};
    vector<int> v1;
    auto b = v1.begin(), e = v1.end();
    cout << (b == e) << endl; // 同样指向尾迭代器，相等


    // 迭代器运算符
    string s1("some thing");
    if (s1.begin() != s1.end()) { // 不为空
        auto it = s1.begin();
        *it = toupper(*it); // * 返回迭代器指向的元素的引用
    }
    cout << s1 << endl;


    // 迭代器移动
    string s2("some thing");
    // 循环条件判断中迭代器使用 != 而非 <，是因为前者对于所有容器均有效
    // 是因为并非所有容器都定义了 < > 比较运算符
    for (auto it = s2.begin(); it != s2.end() && !isspace(*it); ++it)
        *it = toupper(*it);
    cout << s2 << endl;


    // 迭代器类型
    vector<int> v2;
    string::iterator si1;
    string::const_iterator si2;
    string s3("abcd");
    si1 = s3.begin() + s3.size() / 2;
    *si1 = toupper(*si1);
    cout << "s3: " << s3 << endl;

    si2 = si1;
    // *si2 = toupper(*si2); // 静态迭代器类型只能读不能写

    auto si3 = s3.cbegin(); // const
    cout << typeid(si1).name() << endl;
    cout << typeid(si2).name() << endl;
    cout << typeid(si3).name() << endl;



    // 结合解引用和成员访问操作
    vector<string> v3{"a", "b", "c"};
    auto ci = v3.begin();
    cout << (*ci).empty() << endl; // 0
    // cout << *ci.empty() << endl;
    cout << ci->empty() << endl;


    vector<string> text{"demo", " is", "", "END"};
    for (auto it = text.cbegin(); it != text.cend() && !it->empty(); it++) {
        cout << *it << endl;
    }
}