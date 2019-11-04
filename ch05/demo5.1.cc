#include <iostream>

using namespace std;

// 简单语句
int main() {
    string s1;
    int lines;
    while (cin >> s1 && s1.empty()); // ; 空语句，语法上需要但逻辑上不需要
    lines++; // 误用分号


    // 语法上需要一条
    // 逻辑上需要多条
    // 用语句块 {} 包含即可
    int x = 0;
    while (x++ < 10) {
    }
    cout << x << endl;
}