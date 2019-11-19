#include<iostream>
#include <sstream>
#include <vector>

using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;
};

bool valid(string num) {
    return num.rfind("130", 0) == 0;
}

// string 流
int main() {
    //
    // 使用 istringstream
    //
    string line, word;
    vector<PersonInfo> people;
    while (getline(cin, line)) {
        PersonInfo info;
        istringstream record(line);
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }


    //
    // 使用 ostringstream
    //
    for (const auto &p:people) {
        ostringstream okNums, badNums;
        for (const auto &phone:p.phones) {
            if (!valid(phone))
                badNums << " " << phone;
            else
                okNums << " " << phone;
        }

        if (badNums.str().empty())
            cout << p.name << " " << okNums.str() << endl;
        else
            cerr << "input error: " << p.name << " invalid phones: " << badNums.str() << endl;
    }
}