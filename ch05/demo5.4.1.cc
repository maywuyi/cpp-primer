#include <iostream>
#include <vector>

using namespace std;

// 迭代语句
int main() {
    // while 语句
    vector<int> v1;
    int i;
    while (cin >> i)
        v1.push_back(i);

    vector<int>::iterator it = v1.begin();
    while (it != v1.end() && *it > 0)
        it++;

    if (it == v1.end())
        cout << "all positive." << endl;
    else
        cout << "some negative." << endl;
}


