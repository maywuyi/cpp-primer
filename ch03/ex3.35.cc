#include <iostream>

using namespace std;

int main() {
    int arr[10];
    for (int *p = begin(arr); p != end(arr); p++)
        *p = 0;

    for (int i : arr)
        cout << i << " ";
    cout << endl;
}