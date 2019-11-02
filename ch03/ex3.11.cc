#include <iostream>

using namespace std;

// 引用类型是 const char &
// 别忘了还是 &
int main() {
    const string s = "demo";
    for (auto &c:s) {
        // c = 'X'; // cannot assign to variable 'c' with const-qualified type 'const char &'
        cout << typeid(c).name() << endl;
        break;
    }
    const char c = 'a';
    cout << typeid(c).name() << endl;
}