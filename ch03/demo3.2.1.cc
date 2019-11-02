#include <iostream>

using std::string;
using std::cin; using std::cout; using std::endl;

// 标准库类型 string
// 可变长字符序列
int main() {
    // 定义和初始化
    string s3 = "cc"; // 拷贝初始化
    string s1(10, 'c'); // 重复10次指定字符 // 直接初始化
    cout << s1 << endl;
    string s2("cc");
    cout << s2 << endl;


    // 多个值初始化，且非要用 = 拷贝初始化
    string s4 = string(10, 'A');
    cout << s4 << endl;
}