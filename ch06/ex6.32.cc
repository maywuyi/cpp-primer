#include <iostream>

using namespace std;

int &get(int *arr, int idx) {
    return arr[idx]; // int 转为 int&
}

int main() {
    int arr[10];
    for (int i = 0; i != 10; ++i) {
        get(arr, i) = i;
    }


    for (int i = 0; i != 10; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}