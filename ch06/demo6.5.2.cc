#include <iostream>

using namespace std;

// 内联函数和 constexpr 函数
inline const string &shorter(const string &s1, const string &s2) {
    return s1.size() < s2.size() ? s1 : s2;
}


constexpr int new_sz() {
    return 10;
}

constexpr int foo = new_sz();

constexpr size_t scale(size_t count) {
    return new_sz() * count;
}

int main() {
    cout << shorter("demo", "demox") << endl;

    int vs1[scale(2)];
    int i = 2;
    int vs2[scale(i)];
}