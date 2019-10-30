#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;

int main() {
    Sales_data data1, data2;

    // 读入输入
    double price = 0;
    cin >> data1.bookNo >> data1.unitsSold >> price;
    data1.revenue = price * data1.unitsSold;

    cin >> data2.bookNo >> data2.unitsSold >> price;
    data2.revenue = price * data2.unitsSold;

    if (data1.bookNo == data2.bookNo) {
        unsigned totalSold = data1.unitsSold + data2.unitsSold; // 总出售量
        double totalRev = data1.revenue + data2.revenue; // 总收入

        cout << data1.bookNo << " " << totalSold << " " << totalRev << " ";

        if (totalSold != 0)
            cout << totalRev / totalSold << endl;
        else
            cout << "no sales" << endl;
        return 0;
    } else {
        cout << "Data must have same ISBN" << endl;
        return -1;
    }
}