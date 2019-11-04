#include <iostream>

using namespace std;

// 成员访问运算符
int main() {
    string s = "abcd";
    string *p = &s;
    string::size_type n = s.size(); // 等效
    n = (*p).size();
    n = p->size();
}
