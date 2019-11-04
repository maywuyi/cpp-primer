#include <iostream>

using namespace std;


void prBits(unsigned long v) {
    cout << bitset<32>(v).to_string() << endl;
}

// 位运算符
int main() {
    // 常用来进行多位 flag 位权限标识
    unsigned long states = 0;
    prBits(states);

    states |= 1UL << 27; // 27 ok
    prBits(states);

    states &= ~(1UL << 27); // 27 gg
    prBits(states);

    bool passed = states & (1UL << 27); // test 27
    cout << passed << endl;
}