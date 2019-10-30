#include <iostream>

using namespace std;

// 引用
// 有点像限制在第一层的指针
int main() {
    int v = 1;
    int &refV = v;
    // int &refx; // error: declaration of reference variable 'refx' requires an initializer


    refV = 2;
    cout << "V: " << v << endl;

    int &refRefV = refV; // refV 是 v 的别名
    refRefV = 3;
    cout << "V: " << v << endl;


    // 引用必须严格匹配
    double d = 1.2;
    // 左引用 int 类型无法绑定到 double 类型的对象上
    // int &refD = d; //  non-const lvalue reference to type 'int' cannot bind to a value of unrelated type 'double'
}