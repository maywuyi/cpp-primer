#include <iostream>

using namespace std;

int main() {
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *pa = ca;
    while (*pa) { // pa 可能已经超出有效范围，类似于 strlen(const char *) 返回无效值
        cout << *pa << endl;
        pa++;
    }
}