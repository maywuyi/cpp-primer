#include <iostream>
#include <vector>

using namespace std;

// 指针和数组
int main() {
    int vs1[3] = {1, 2, 3};
    int *p1 = &vs1[0];
    int *p2 = vs1;
    cout << p1 << endl;
    cout << p2 << endl;


    auto v1(vs1);
    auto v2(&vs1[0]);
    cout << (v1 == v2) << endl; // 数组首元素地址

    decltype(vs1) vs2 = {1, 2, 3}; // decltype 不转换数组名为首元素地址，所以 vs2 的类型是 int[3]



    // 指针也是迭代器
    int vs3[3] = {1, 2, 3};
    int *pe = &vs3[3]; // 迭代器就是任性，能通过索引取到尾元素的下一个元素地址
    cout << pe << endl;
    for (int *p = vs3; p != pe; p++)
        cout << *p << endl;



    // 标准库函数 begin 和 end
    // 数组不是类，所以不以成员函数的形式调用
    int vs4[4] = {1, 2, -3, 4};
    int *pbegin = begin(vs4);
    int *pend = end(vs4); // end 其实不存在
    cout << &vs1[3] << " < " << pend << endl;
    while (pbegin != pend && *pbegin > 0)
        pbegin++;
    cout << "Negative: " << *pbegin << endl;



    // 指针运算
    // 指针加减整数操作，整数的含义从来都是跨元素的个数，而非具体内存地址前后移动相关
    constexpr size_t sz = 5;
    int vs5[sz] = {1, 2, 3, 4, 5};
    int *p3 = vs5;
    p3 += 4;
    cout << "p3: " << *p3 << endl;

    int *p4 = vs5 + sz;
    cout << *p4 << endl; // 超出了尾部就是无意义的地址值

    ptrdiff_t diff = end(vs5) - begin(vs5);
    cout << diff << endl;

    int i1 = 1, *pi1 = &i1;
    int i2 = 2, *pi2 = &i2;
    while (pi1 < pi2) // 结果是未定义的
        cout << "oikc" << endl;



    // 解引用和指针运算的交互
    int vs6[5] = {10, 20, 30, 40, 50};
    int *p6 = vs6;
    cout << *(p6 + 4) << endl; // 先指针运算再解引用
    cout << *p6 + 4 << endl; // 先解引用，在取值计算



    // 下标和指针
    // 只要指针指向数组，就能指向下标运算...所以才会有负数索引...牛批啊
    int vs7[4] = {1, 2, 3, 4};
    int *p7 = &vs7[1]; // -> 2
    cout << p7[2] << endl; // +2 -> 4
    cout << p7[-1] << endl; // -1 -> 1

    vector<int> vc{1, 2, 3, 4, 5};
    auto start = vc.begin();
    start += 2;
    cout << *start << endl;
}