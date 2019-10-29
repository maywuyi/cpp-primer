#include <iostream>
#include "Sales_item.h"

// 读取多个连续相同 ISBN 的对象并输出和
int main() {
    Sales_item sum;
    if (std::cin >> sum) {
        Sales_item cur;
        while (std::cin >> cur) {
            if (sum.isbn()== cur.isbn())
                sum += cur;
            else {
                std::cout << "SUM: " << sum << std::endl;
                sum = cur; // reset
            }
        }
    } else {
        std::cout << "no input" << std::endl;
    }
}
