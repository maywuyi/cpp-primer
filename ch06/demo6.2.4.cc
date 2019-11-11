#include <iostream>

using namespace std;

void pr(int arr[10]);

void print(const char *s);

void print(const int *beg, const int *end);

void print(const int arr[], size_t size);

void print(int (&arr)[10]);

void print(int (*matrix)[3], int rows);

// 数组形参
int main() {
    int vs1[] = {1, 2, 3, 4};
    int n = 10;
    // pr(&n); // 误用

    // print(vs1, end(vs1) - begin(vs1));

    int vs2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // print(vs1); //  error: no matching function for call to 'print'
    // print(vs2);


    int vs3[][3] = {
            {1, 2, 3},
            {4, 5}
    };
    print(vs3, 2);
}


// 其实传入的参数是 int* 指针
void pr(int arr[10]) {
    for (auto i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) { // 错误使用数组参数
        cout << arr[i] << endl;
    }
}


// 函数传递数组参数时，需传递额外的指针信息
// 标记长度
void print(const char *s) {
    if (s)
        while (*s)
            cout << *s++;
}

// 标准库规范
void print(const int *beg, const int *end) {
    while (beg != end)
        cout << *beg++ << endl;
}

// 显式传递数组长度形参
void print(const int arr[], size_t size) {
    for (size_t i = 0; i < size; ++i)
        cout << arr[i] << endl;
}


// 数组引用形参
void print(int (&arr)[10]) {
    for (auto v:arr)
        cout << v << endl;
}


// 多维数组参数
// 二维以上部分，数组长度也是数组类型的一部分，所以必须指定
void print(int (*matrix)[3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (auto v:*matrix)
            cout << v << " ";
        matrix++;
        cout << endl;
    }
}