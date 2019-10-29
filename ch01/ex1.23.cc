#include <iostream>
#include "Sales_item.h"

// 读取多个连续 ISBN 对象并统计个数
int main() {
    Sales_item last;
    if (std::cin >> last) {
        int count = 1;
        Sales_item cur;
        while (std::cin >> cur) {
            if (last.isbn()== cur.isbn())
                count++;
            else {
                std::cout << count << " : " << last << std::endl;
                last = cur; // reset
                count = 1;
            }
        }

        // 输出最后一个
        std::cout << count << " : " << last << std::endl;
    } else {
        std::cout << "no input" << std::endl;
    }
}
