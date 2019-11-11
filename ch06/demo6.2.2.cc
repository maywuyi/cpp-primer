#include <iostream>

using namespace std;

// 传值参数
void reset1(int *p) {
    *p = 0;
    p = nullptr;
}

// 传引用参数
void reset2(int &i) {
    i = 0;
}

// 避免参数拷贝
bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

// 没有多返回值的折中解决办法
string::size_type findChar(const string &s, char c, string::size_type &count) {
    string::size_type idx = -1;
    count = 0;
    for (decltype(idx) i = 0; i != s.size(); ++i) {
        if (s[i] == c) {
            ++count;
            if (idx == -1)
                idx = i;
        }
    }
    return idx; // 注意 counts 是引用，隐式返回
}

int main() {
    int i = 10;
    reset1(&i);
    cout << i << " : " << &i << endl;

    int j = 10;
    reset2(j);
    cout << j << endl;

    cout << isShorter("x", "xz") << endl;

    string::size_type count;
    string s = "beijing";
    cout << "i idx: " << findChar(s, 'i', count) << endl;
    cout << "i count: " << count << endl;
}

