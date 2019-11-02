#include <iostream>
#include <string>

using namespace std;

void contactAll();

void spaceContact();

const char YES = 'y';

int main() {
    contactAll();
    spaceContact();
}


// 注意处理第一个字符串之前的空格即可
void spaceContact() {
    char ack = YES;
    string s, res;
    cout << "input string: ";
    while (cin >> s) {
        if (res.empty())
            res += s;
        else
            res += (" " + s);
        cout << "continue input? [y/n]: ";
        cin >> ack;
        if (tolower(ack) == YES)
            cout << "input next string: ";
        else
            break;
    }
    cout << endl << "[contacted]: " << res << endl;
}

// ack and continue input mode
void contactAll() {
    char ack = YES;
    string s, res;
    cout << "input string: ";
    while (cin >> s) {
        res += s;
        cout << "continue input? [y/n]: ";
        cin >> ack;
        if (tolower(ack) == YES)
            cout << "input next string: ";
        else
            break;
    }
    cout << endl << "[contacted]: " << res << endl;
}