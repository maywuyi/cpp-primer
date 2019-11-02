#include <iostream>
#include <vector>

using namespace std;

// 标准库类型 vector
// vector 又称 container 容器
int main() {
    vector<int> vt;
    vector<vector<int>> vvt;
    // vector<&int> vct; // vector 只能包含对象，而非引用
    using vtType = vector<int>;


    // 定义和初始化 vector 对象
    vector<int> v1;
    vector<int> v2(v1);
    vector<int> v3 = v1; // 等效
    // vector<string> v4 = v1; // 赋值时容器类型必须一致


    // 列表初始化
    vector<string> s1 = {"a", "vb"};
    // vector<string> s2("a", "c"); // 列表初始化不能用于拷贝初始化

    // 元素数量初始化
    vector<int> vs1(10, 1);
    vector<string> vs2(10, "a");
    vector<string> vs3(10); // 值初始化

    // 两种初始化方式会混用，灵活
    vector<string> vs4{10, "ABC"}; // 编译器比较灵活，无法执行列表初始化后，会尝试使用默认值初始化 vector 对象

}