#include <iostream>
#include "Sales_item.h"

// 对象的和与内建类型和不一样
int main() {
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
    return 0;
}