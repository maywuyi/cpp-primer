#include <iostream>

using namespace std;

void error_msg(initializer_list<string> il) {
    for (auto b = il.begin(); b != il.end(); ++b)
        cout << *b << " ";
    cout << endl;
}


// 含有可变形参的函数
int main() {
    error_msg({"ok"});
    error_msg({"arg1", " gg", "> must in quotes"});
}