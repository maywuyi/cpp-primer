#include <iostream>

using namespace std;

#include "file_1.h"


int f() {
    return 1;
}

// const 限定符
int main() {
    // const 常量可以运行时初始化
    const int c1 = f();

    // 编译时初始化
    const int c2 = 2;
    // cout << "bufSize: " << bufSize << endl;

    // const 的引用
    const int &ref = c1;
    // ref = 2; // error: cannot assign to variable 'ref' with const-qualified type 'const int &'

    // 变量引用无法指引用常量引用
    // int &ref2 = ref; // error: binding value of type 'const int' to reference to type 'int' drops 'const' qualifier

    double d = 1.23;
    const int &ref2 = d;
    cout << ref2 << endl;
}
