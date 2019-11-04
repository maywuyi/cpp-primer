#include <iostream>

using namespace std;

// 条件运算符
int main() {
    // 条件运算符可以套娃
    int grade = 91;
    string res = grade > 80 ? "great" :
                 grade > 60 ? "ok" : "not ok";
    cout << "res: " << res << endl;

    // 但优先级很低
    cout << (grade > 60) ? "ok" : "shit"; // expression unused
    // cout << grade < 60 ? "ok" : "gg"; // 编译不过
}