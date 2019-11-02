#include <iostream>
#include <cstring>

using namespace std;

// C 风格字符串
int main() {
    // C 标准库 String 函数
    char ca[] = {'a', 'b', 'c'}; // 求出的长度和之后的内存值相关，虽然有结果，但是是错误的
    cout << strlen(ca) << endl;



    // 比较 C 字符串，比较的是地址 const char* 类型，很迷惑少用
    string s1 = "abc", s2 = "abC";
    cout << (s1 > s2) << endl; // 1
    char s3[] = "abc", s4[] = "abC";
    cout << (s3 > s4) << endl; // 无效结果
    cout << strcmp(s3, s4) << endl; // ASCII 差值 32



    // 目标字符串的大小由调用者指定
    string s12 = s1 + " " + s2; // ok
    // string s34 = s3 + s4; // 两个指针不能相加
    char *s34 = (char *) malloc(strlen(s3) + strlen(s4));
    strcpy(s34, s3);
    strcpy(s34 + 3, s4); // C 的字符串拷贝如果算不好长度，很有可能会将之后的内存中的内容覆盖，即发生缓冲区溢出，那就 gg
    cout << s34 << endl;
}