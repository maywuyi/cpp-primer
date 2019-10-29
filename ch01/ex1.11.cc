#include <iostream>

// 输入两数输出中间数值
int main() {
    std::cout << "input 2 numbers: ";
    int l, r;
    std::cin >> l >> r;
    if (l > r)
        std::swap(l, r);

    while (l <= r) {
        std::cout << l++ << " ";
    }

    std::cout << std::endl;
}