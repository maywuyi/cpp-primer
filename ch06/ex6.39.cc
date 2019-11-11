#include <iostream>

using namespace std;


int calc(int, int);

int calc(const int, const int); // 顶层 const 不影响传参


int get();

double get(); // 形参个数或类型必须不一致



int *result(int *);

double *result(double *); // ok