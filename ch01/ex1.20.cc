#include <iostream>
#include "Sales_item.h"

// 输入 Sales_item 并输出
int main() {
    Sales_item item;
    while (std::cin >> item) {
        std::cout << item << std::endl;
    }
}