#include <iostream>

using namespace std;


// 默认实参
typedef string::size_type sz;

string screen(sz h = 20, sz w = 80, char bg = ' ') {
    printf("w: %lu, h:%lu, bg: %c\n", w, h, bg);
    return "";
}

string resize(int h, int w, char bg = 'K');

string resize(int h, int w = 1, char bg); // never use


sz w = 10;
char bg = 'Z';
sz h = 20;

sz hfunc() {
    return 1;
}

int main() {
    string w;
    w = screen();
    w = screen(1);
    w = screen(1, 2);
    w = screen(1, 2, 'X');

    w = screen('X'); // not ok
}
