#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 一些不太好的前后置用法
    int v1 = -1, v2 = -1;
    cout << (v1++ && v1) << endl;
    cout << (v1 && v1 + 1) << endl; // better

    vector<int> v3{10, 20, 30, 40};
    vector<int> v4 = v3;
    int i1 = 0, i2 = 0;
    cout << (v3[i1++] <= v3[i1]) << endl; // 10 <= 20
    cout << (v4[i2] <= v4[i2 + 1]) << endl; // better
}