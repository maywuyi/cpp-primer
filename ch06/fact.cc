#include "Chapter6.h"

// 乘阶函数
int fact(int val) {
    int res = 1;
    while (val > 1)
        res *= val--;
    return res;
}