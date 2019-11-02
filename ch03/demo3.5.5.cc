#include <iostream>
#include <vector>

using namespace std;

void prVector(vector<int> v) {
    for (auto i:v)
        cout << i << " ";
    cout << endl;
}

// 与旧代码的接口
int main() {
    // 兼容旧时代的类 C 的 C++ 程序
    // 混用 string 对象和 C 风格字符串
    char cs1[] = {'a', 'b', '\0'};
    char cs2[] = {'c', 'd', '\0'};
    string s1 = cs1; // ok
    string s2 = s1 + cs1; // also ok
    // string s3 = cs1 + cs2; // 两个都是字符数组就过分了啊

    // 反过来 string -> char[] 就需手动调用函数
    string s3 = "ABC";
    const char *cs = s3.c_str(); // 返回 const 字符数组只读
    cout << "cs: " << cs << endl;
    s3 = "";
    cout << "cs: " << cs << endl; // c_str() 返回值跟随原 string 对象




    // vector 对象不能降级初始化数组
    // 使用数组初始化 vector 对象
    int arr[] = {0, 1, 2, 3, 4, 5};
    vector<int> v1(begin(arr), end(arr)); // 初始化 vector 时左开右闭传入数组元素指针
    vector<int> v2(arr + 1, arr + 3); // 1 2
    prVector(v1);
    prVector(v2);
}