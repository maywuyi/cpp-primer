#include <iostream>
// #include <cctype> // 标准库已在 std 命名空间中定义

using namespace std;

// 处理 string 对象中的字符
int main() {
    cout << isdigit('1') << endl;

    // 范围 for 语句
    string s1("abcd");
    for (auto c :s1) {
        char *p = &c;
        cout << c << ": ";
        printf("%p\n", p); // range for 中的变量只会被声明一次
    }

    string s2("Hello World!!!");
    decltype(s2.size()) punctCnt = 0;
    for (auto c :s2)
        if (ispunct(c))
            punctCnt++;
    cout << "Punct: " << punctCnt << endl;


    // 修改字符串中的字符
    string s3("Hello World!!!");
    for (auto &c :s3)
        c = toupper(c);
    cout << "s3: " << s3 << endl;


    // 只处理一部分字符
    string s5("some thing");
    if (s5.size())
        s5[0] = toupper(s5[0]);
    cout << "s5: " << s5 << endl;

    const string s6 = "IO"; // 常量自然是无法修改单个字符的
    // s6[0] = 'Z'; //  error: cannot assign to return value because function 'operator[]' returns a const value


    string s7("some thing");
    for (decltype(s7.size()) i = 0; i < s7.size() && !isspace(s7[i]); i++)
        s7[i] = toupper(s7[i]);
    cout << "s7: " << s7 << endl;


    // 使用下标随机访问
    const string hex = "0123456789ABCDEF";
    cout << "Enter numbers: ";
    string res;
    decltype(res.size()) n;
    while (cin >> n)
        if (n < hex.size())
            res += hex[n];
    cout << "Conved: " << res << endl;
}