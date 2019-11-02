#include <iostream>

using namespace std;

// 访问数组元素
int main() {
    int vs1[3] = {1, 2, 3};
    size_t i1 = 2;
    cout << vs1[i1] << endl;

    for (auto v : vs1)
        cout << v << endl;


    // 下标检查
    cout << "array length: " << sizeof(vs1) / sizeof(*vs1) << endl;
}