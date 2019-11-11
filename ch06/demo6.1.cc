#include <iostream>

using namespace std;


// 乘阶函数
int fact(int val) {
    int res = 1;
    while (val > 1)
        res *= val--;
    return res;
}

void f1(void);

// void f2(int a, b) {} // 所有形参的类型都是要指定的，不像 Go 能省略

int x = 100;


// 局部静态对象生命周期贯穿函数调用到程序结束
// 但只在函数内部可见
size_t countCalls() {
    static size_t c; // static 静态默认初始化为零值
    return ++c;
}

// 函数声明
void pr(vector<int>::const_iterator begin, vector<int>::const_iterator end);

// 函数基础
int main() {
    cout << fact(5) << endl;
    cout << fact(3.2) << endl; // 形参与实参类型一致，或至少能转换

    // 局部对象
    for (int i = 0; i < 10; i++) {
        cout << countCalls() << endl;
    }
}
