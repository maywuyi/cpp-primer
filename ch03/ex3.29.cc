#include <iostream>

using namespace std;

int size(int *arr) {
    return sizeof(arr) / sizeof(arr[0]);
}

int main() {
    // 缺点是数组的长度只能自己计算
    // 数组不是类，没有实现 size 函数成员
    int arr[] = {1, 3, 34, 45};
    cout << size(arr) << endl;
}