#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vs1(10, 42);

    vector<int> vs2;
    for (int i = 0; i < 10; i++)
        vs2.push_back(42);

    vector<int> vs3(10);
    for(int &v : vs3)
        v = 42;
}