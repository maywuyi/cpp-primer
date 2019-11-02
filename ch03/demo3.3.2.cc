#include <iostream>
#include <vector>

using namespace std;

// 向 vector 对象中添加元素
int main() {
    // 创建空 vector，运行时动态添加
    // 有点像 go 声明为空 slice
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }

    string word;
    vector<string> sentence;
    while (cin >> word)
        sentence.push_back(word);
}