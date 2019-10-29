#include <iostream>

// 在循环条件中检测变量
// 在循环体中递增变量模式
int main() {

    int sum = 0;
    for (int val = 1; val <= 10; ++val) {
        sum += val;
    }

    std::cout << "SUM 1+2+..+10 = " << sum << std::endl;
}