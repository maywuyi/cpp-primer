#include <iostream>
#include "Sales_item.h"

// 读取 2 个 ISBN 相同的对象并输出和
int main() {
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    if (item1.isbn()== item2.isbn())
        std::cout << item1 + item2 << std::endl;
    else
        std::cout << "diff item ISBN" << std::endl;
}