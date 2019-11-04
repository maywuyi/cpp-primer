#include <iostream>

using namespace std;

int main() {
    int i;
    double d;
    const string *p;
    char *pc;
    void *pv;

    pv = static_cast<void *>(const_cast<string *>(p)); // 去掉 const 后转为 void*
    i = static_cast<int>(*pc);
    pv = static_cast<void *>(&d);
    pc = static_cast<char *>(pv);
}