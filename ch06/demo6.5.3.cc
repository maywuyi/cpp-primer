#include <iostream>

using namespace std;


void printName(string name) {
#ifdef NDEBUG
    cout << __func__ << ": name is "<< name << endl;
#endif
    cout << "name: " << name << endl;
}

// 预处理器
void preProcessVars() {
    cout << __func__ << endl;
    cout << __LINE__ << endl;
    cout << __FILE__ << endl; // 让我想起了魔术常量...
    cout << __TIME__ << endl;
    cout << __DATE__ << endl;
}

// 调试帮助
// g++ -o demo -D NDEBUG -std=c++11 demo.cc
int main() {
    cout << "input a word more than 2 character: ";
    string word;
    cin >> word;
    assert(word.size() > 2);
    printName("wuYin");

    preProcessVars();
}

