#include <iostream>

using namespace std;

// 字面值常量
int main() {
    double d = .001;
    cout << d << endl;


    // 空白符可等效于字符串连接符
    cout << "string 1 "
            "string 2 " << endl;

    // 转义字符
    cout << "\a" << endl;
    // 泛化的十六进制转义字符
    cout << "x\12x" << endl;


    // 字面值类型指定
    d = 1E-3F;
    long double ld = 3.14L;

    // 不再像 C 一样 include bool.h
    bool b = true;
    b = false;
}