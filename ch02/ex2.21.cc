#include <iostream>

using namespace std;

int main() {
    int i = 0;
    double *pd = &i; // 左值类型与右值类型不匹配
    int *p1 = i;

    int *p2 = &i;
}