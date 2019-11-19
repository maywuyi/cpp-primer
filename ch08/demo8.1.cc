#include<iostream>

using namespace std;

int main() {
    //
    // IO 类
    //
    int v;
    cin >> v;
    cout << "bad: " << cin.bad() << endl;
    cout << "fail: " << cin.fail() << endl;

    auto oldState = cin.rdstate();
    cin.clear();
    cin >> v;
    cin.setstate(oldState);



    //
    // 缓冲类
    //
    cout << "---" << endl;
    cout << "---" << ends;
    cout << "---" << flush;

    cout << unitbuf;
    cout << "now writing" << endl;
    cout << "now flushing" << endl;
    cout << nounitbuf;
}
