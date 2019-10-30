#include <iostream>

using namespace std;

string globalStr;
int globalInt;

int main() {
    string localStr;
    int localInt;
    cout << "`" << globalStr << "` " << globalInt << endl;
    cout << "`" << localStr << "` " << localInt << endl; // 未被初始化的局部变量，值随机无意义
}