#include <iostream>

using namespace std;

// 所谓的去掉，就是它不输出，其他的字符输出就行
int main() {
    cout << "[input string with punctuation]: ";
    string s;
    getline(cin, s);
    for (auto &c :s)
        if (!ispunct(c))
            cout << c;

    cout << endl;
}