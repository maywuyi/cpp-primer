#include <iostream>
#include <string>

using namespace std;

// string 对象上的操作
int main() {
    // 读写 string 对象
    string s1, s2;
    // cin >> s1 >> s2; // 读取第一、二次空白符间的字符串
    // cout << s1 << s2 << endl;


    // 读取未知数量的 string
    string word;
    // while (cin >> word) // EOF 为 false
    //     cout << word << endl;


    // 读取一整行
    // empty 与 size 操作
    string line;
    // while (getline(cin, line))
    // if (!line.empty())
    // if (line.size() > 80)
    //     cout << line << endl;


    // string::size_type 类型
    auto size = line.size();
    if (size < -1) // size() 不要与 int 混用，避免无符号与有符号混用带来的问题
        cout << "unsigned negative is bigger actually, maybe a trap..." << endl;


    // string 操作
    string s3 = "abc", s4 = "DEF";
    cout << s3 + s4 << endl;
    // 加号两侧至少有一个 string
    cout << s3 + "DDD" << endl;
    // cout << "CCC" + "DDD" << endl; // error: invalid operands to binary expression ('const char [4]' and 'const char [4]')
    string s5 = s4 + "g" + "HI"; // ok 结合方向等效于 (s4 + "g") + "HI"
    // string s6 = "g" + "HI" + s4; // not ok

    return 0;
}