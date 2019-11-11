#include <iostream>

using namespace std;


// main 处理命令行选项
int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        cout << i << " : " << argv[i] << endl;
    }
}