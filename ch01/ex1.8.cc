#include <iostream>

int main() {
    std::cout << "/*"; // ok
    std::cout << "*/"; // ok
    std::cout <</* "*/ * / ; // shit
    std::cout << /* "*/" /* "/*" */; // ok
}