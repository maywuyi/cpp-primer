#include <iostream>
#include <vector>

using namespace std;

// 逻辑和关系运算符
int main() {
    // 短路求值保证右侧求值的正确性和安全性
    vector<string> words = {"a", "b", "c.", "", "d ef"};
    for (const string &word:words) {
        cout << word;
        if (word.empty() || word[word.size() - 1] == '.')
            cout << endl;
        cout << " ";
    }

    cout << endl;
    cout << (10 < 11 < 2) << endl;
    cout << (10 < 11 && 11 < 2) << endl;
}