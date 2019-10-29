#include <iostream>

// 连续求和
int main() {
    int sum = 0, val = 1;
    while (val <= 10) {
        sum += val;
        ++val;
    }

    std::cout << "SUM 1+2+..+10 = " << sum << std::endl;
}