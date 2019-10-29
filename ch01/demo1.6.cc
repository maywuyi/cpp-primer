#include <iostream>
#include "Sales_item.h"

// 书店程序
int main() {
    Sales_item lastItem;
    if (std::cin >> lastItem) {
        Sales_item curItem;
        while (std::cin >> curItem) {
            if (curItem.same_isbn(lastItem)) {
                lastItem += curItem;
            } // 类实现的对象相加特特性
            else {
                std::cout << lastItem << std::endl;
                lastItem = curItem; // reset
            }
        }
        std::cout << lastItem << std::endl;
        return 0;
    }

    std::cout << "[EROR]: no data" << std::endl;
    return -1;
}