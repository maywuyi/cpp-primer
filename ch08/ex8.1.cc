#include<iostream>

using namespace std;

istream &print(istream &in) {
    int num;
    while (in >> num, !in.eof()) { // 遇到 eof 才返回
        if (in.bad()) { // bad
            cout << "stream broken" << endl;
            exit(-1);
        }

        if (in.fail()) { // just fail
            cout << "retry" << endl;
            in.clear();
            in.ignore(100, '\n');
            continue;
        }
        cout << num << endl;
    }

    in.clear(); // clear
    return in;
}


int main() {
    print(cin);
}

