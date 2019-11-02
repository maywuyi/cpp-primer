#include <iostream>

using namespace std;

// Go 和 C++ 一样，多维数组传参时，最低位的一维数组长度必须是确定的
void prArr(int arr[][4], int row) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// 多维数组
int main() {
    // 多维数组的初始化
    int a1[3][4] = {
            {0, 1, 2,  3},
            {4, 5, 6,  7},
            {8, 9, 10, 11},
    };
    prArr(a1, 3);

    int a2[3][4] = {{0},
                    {4},
                    {8}};
    prArr(a2, 3);

    int a3[3][4] = {0}; // 全零初始化
    prArr(a3, 3);




    // 使用 for 范围语句处理多维数组
    // 不能提取到函数中做循环
    cout << "-----" << endl;
    for (auto &i : a1) { // 最外层必须是引用
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }



    // 指针和多维数组
    int (*p)[4] = a1;
    // 直接使用 C++ 11 的 auto
    cout << "=====" << endl;
    for (auto p = begin(a1); p != end(a1); ++p) {
        for (auto q = begin(*p); q != end(*p); ++q)
            cout << *q << " ";
        cout << endl;
    }



    // 类型别名简化多维数组指针
    cout << "+++++" << endl;
    using int_array = int[4];
    for (int_array *p = a1; p != a1 + 3; p++) {
        for (int *q = *p; q != *p + 4; q++) {
            cout << *q << " ";
        }
        cout << endl;
    }
}
