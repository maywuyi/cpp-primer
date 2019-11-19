#include<iostream>
#include <fstream>

using namespace std;

int main() {
    //
    // 文件流对象
    //
    string fName = "demo.txt";
    ifstream in(fName);
    ofstream out;
    out.open(fName + ".copy");

    in.close(); // 需先手动关闭
    in.open(fName + ".copy"); // 打开已打开的文件流会失败
    if (!in)
        cout << "open new file " + fName + " failed" << endl;


    //
    //  文件模式
    //
    ofstream out2(fName);
    ofstream out3(fName, ofstream::out);
    ofstream out4(fName, ofstream::out | ofstream::trunc);
    ofstream app(fName, ofstream::app);
    ofstream app1(fName, ofstream::out | ofstream::app);
    app1 << "demo content";
    app1.flush();
}