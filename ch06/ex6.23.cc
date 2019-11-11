#include <iostream>

using namespace std;

void print1(int *p) {
    cout << *p << endl;
}

void print2(const int *p, size_t n) {
    for (size_t i = 0; i < n; i++) {
        cout << *p++ << endl;
    }
}

void print3(const int *begin, const int *end) {
    for (const int *p = begin; p != end; p++)
        cout << *p << endl;
}

int main() {
    int i = 0, j[2] = {0, 1};
    print1(&i);
    print1(j);

    cout << "----" << endl;
    print2(&i, 1);
    print2(j, 2);

    cout << "----" << endl;
    print3(&i, &i + 1);
    print3(begin(j), end(j));
}