#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;


// 无返回值函数
void swap(int &v1, int &v2) {
    if (v1 == v2)
        return;

    int v3 = v1;
    v1 = v2;
    v2 = v3;
}


// 有返回值函数
bool strSubRange(const string &s1, const string &s2) {
    if (s1.size() == s2.size())
        return s1 == s2;

    string::size_type minSize = (s1.size() < s2.size()) ? s1.size() : s2.size();
    for (decltype(minSize) i = 0; i != minSize; ++i) {
        if (s1[i] != s2[i])
            return false;
    }

    return true;
}


// 返回值是局部临时变量
string makePlural(size_t ctr, const string &word, const string &ending) {
    return (ctr > 1) ? word + ending : word;
}

const string &shoterString(const string &s1, const string &s2) {
    return s1.size() <= s2.size() ? s1 : s2;
}


// 不要返回局部变量的引用或指针
const string &origin(string res) {
    if (!res.empty())
        return res;

    return "empty";
}


// 引用返回左值
char &getChar(string &s, string::size_type i) {
    return s[i];
}


// 列表初始化返回值
vector<string> process(bool ok) {
    if (ok)
        return {};

    return {"now", "continue"};
}


// 返回类型和 return 语句
int main() {
    string s1 = origin("");
    cout << s1 << endl; // 空的

    string s = "demo", &ref = s;
    getChar(ref, 2) = 'E';
    cout << s << endl; // deEo

    if (unsigned(time(nullptr)) % 2 == 0)
        return EXIT_SUCCESS;
    else
        return EXIT_FAILURE;
}
