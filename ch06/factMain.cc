#include <iostream>
#include "Chapter6.h"

using namespace std;


// 分离式编译
// CC -c factMain.cc
// CC -c fact.cc
// g++ -std=c++11 factMain.o fact.o
int main() {
    int n = 10;
    cout << "v2: fact of " << n << ": " << fact(n) << endl;
}