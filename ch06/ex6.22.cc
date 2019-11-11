#include <iostream>

using namespace std;


void swap1(int *p, int *q) {
    int *tmp = p;
    p = q;
    q = tmp;
}


void swap2(int *p, int *q) {
    int tmp = *p;
    *p = *q;
    *q = tmp;
}

// 想传值且影响实参，就是引用
// 注意交换的仅仅只是指针
// 指向对象的值并未被交换覆盖
void swap3(int *&p, int *&q) {
    int *tmp = p;
    p = q;
    q = tmp;
}

int main() {
    int x = 1, y = 2;
    // swap2(&x, &y);

    int *p = &x, *q = &y;
    swap3(p, q);
    cout << x << " " << y << endl;
    cout << *p << " " << *q << endl;
}