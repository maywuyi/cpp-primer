#include<iostream>
#include <fstream>
#include "../ch07/SalesData.h"

using namespace std;

// 文件输入与输出
int main(int argc, char **argv) {
    ifstream in(argv[1]);
    ofstream out(argv[2]);
    SalesData total;
    if (read(in, total)) {
        SalesData trans;
        while (read(in, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(out, total) << endl;
                total = trans;
            }
        }
        print(out, total) << endl;
    } else {
        cerr << "no input " << argv[1] << endl;
    }
}