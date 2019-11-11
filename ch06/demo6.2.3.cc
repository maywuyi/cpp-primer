#include <iostream>

using namespace std;

// 形参的顶层 const 会被忽略掉
void f1(const int x) {}

// error: redefinition of 'f1'
// void f1(const int x) {}

int findChar(string &s, char c, string::size_type &count) {
}

// const 形参和实参
int main() {

    // 指针或引用形参与 const
    int count;
    // findChar("demo", 'c', count);
}