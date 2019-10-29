#include <iostream>

// 计数连续输入值重复次数
int main() {
    int lastVal = 0, curVal = 0;

    if (std::cin >> lastVal) {
        int count = 1;
        while (std::cin >> curVal) {
            if (curVal == lastVal)
                count++;
            else {
                std::cout << lastVal << " REPEATED " << count << " TIMES" << std::endl;

                lastVal = curVal; // reset
                count = 1;
            }
        }

        // 最后一个数
        std::cout << lastVal << " REPEATED " << count << " TIMES" << std::endl;
    }

    return 0;
}