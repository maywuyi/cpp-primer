#include <iostream>
#include "Sales_item.h"

// 成员函数
int main() {
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    if (item1.same_isbn(item2)) {
        std::cout << item1 + item2 << std::endl;
        return 0;
    }

    std::cout << "items ISBN not same" << std::endl;
}