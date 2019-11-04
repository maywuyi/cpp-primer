#include <iostream>

using namespace std;

struct User {
    string name;
    int age;
};

// sizeof 运算符
int main() {
    User u, *p;
    cout << sizeof(User) << endl;

    // darwin 居然不支持 sizeof User 无括号运算
}