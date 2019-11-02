#include <iostream>

using namespace std;

void readLines() {
    string sentence;
    // getline 和输入流直接读取
    // 输入结束返回文件结束符 EOF 值为 0，即 false 退出读取
    while (getline(cin, sentence))
        cout << "[sentence]: " << sentence << endl;
}

void readWords() {
    string word;
    while (cin >> word)
        cout << "[word]: " << word << endl;
}

int main() {
    readLines();
    readWords();
}



