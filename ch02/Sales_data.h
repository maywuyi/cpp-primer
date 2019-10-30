// 类定义

#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned unitsSold = 0; // 类内初始值
    double revenue = 0.0;

};
#endif
