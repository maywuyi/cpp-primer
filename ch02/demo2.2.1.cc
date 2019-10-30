#include <iostream>

using namespace std;

// 变量
int main() {
    // string
    // 可变长字符序列库类型
    string s1 = "xxx";
    cout << s1 << endl;

    string s2("XXX");
    cout << s2 << endl;

    // 赋值比初始化多了擦除旧值的操作
    double d1 = 2, d2 = d1 * 2;
    cout << d1 << " " << d2 << endl;


    // 列表初始化
    int v1 = 0;
    int v2 = {0};
    int v3(0);
    cout << v1 << v2 << v3 << endl;

    // 有丢失数据风险
    long double ld = 1.23456789;
    // int b = {ld};


    // 默认初始化
    // 函数体内部内置变量是不默认初始化的，值无效
    // 好习惯：初始化每一个内置类型变量
}