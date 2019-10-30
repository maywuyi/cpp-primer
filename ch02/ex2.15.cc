#include <iostream>

using namespace std;

int main() {
    int v1 = 1.01;
    int &refv1 = 1.01; // 引用必须是对象
    int &refv2 = v1;
    int &refv3; // 引用必须初始化
}