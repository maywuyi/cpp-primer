#include <iostream>

using namespace std;

typedef int Number;

bool isNum(int num);

bool isNum(Number number); // 非重载

bool isAlpha(char c);

bool isAlpha(const char c);


const string &shorterString(const string &s1, const string &s2) {
    return s1.size() < s2.size() ? s1 : s2;
}

string &shorterString(string &s1, string &s2) {
    auto &res = shorterString(const_cast<string &>(s1), const_cast<string &>(s2));
    return const_cast<string &>(res);
}


// 重载与作用域

string read();

void print(const string &);

void print(double);

int print();

void f1(int v) {
    bool read = false;
    // string s = read();

    // void print(int);
    print("string"); // 局部函数声明会覆盖全局声明
    print(v);
    print(1.12);
}


// 函数重载
int main() {

}