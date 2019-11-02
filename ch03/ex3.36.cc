#include <iostream>

using namespace std;


int main() {
    srandom((unsigned) time(nullptr));
    int vs1[5], vs2[5];
    for (auto v:vs1)
        v = random() % 10;
    for (auto v:vs2)
        v = random() % 10;

    int *p1 = begin(vs1);
    int *p2 = begin(vs2);
    while (p1 != end(vs1) && p2 != end(vs2) && *p1 != *p2) {
        cout << *p1 << " != " << *p2 << endl;
        p1++;
        p2++;
        break;
    }
}