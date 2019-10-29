#include <iostream>

// 输入两数并求和
int main() {
    std::cout << "ENTER 2 numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "SUM of " << v1 << " + " << v2
              << " = " << v1 + v2 << std::endl;
    return 0;
}