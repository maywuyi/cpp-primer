#include <iostream>

// 读取一组数求和
int main() {
    std::cout << "input series numbers: ";
    int sum = 0;
    int v;
    while (std::cin >> v) {
        sum += v;
    }
    std::cout << "SUM: " << sum << std::endl;
}