#include <iostream>

using namespace std;

// 返回数组的指针
typedef int arrT[10];
using numsT = int[10];

numsT *f1(int i) {}

int (*f2(int i))[10];

// tailing returning type
auto f3(int i) -> int (*)[10];

int main() {

}