#include<iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

bool valid(string phone) {
    return true;
}

struct PersonInfo {
    string name;
    vector<string> phones;
};

int main(int argc, char **argv) {
    if (argc != 2) {
        cout << "no phone file" << endl;
        return -1;
    }

    ifstream inFile(argv[1]);
    if (!inFile) {
        cout << "open file failed" << endl;
        return -2;
    }

    // read
    string line, word;
    vector<PersonInfo> people;
    istringstream inStr;
    while (getline(inFile, line)) {
        PersonInfo person;
        inStr.clear(); // 重复使用字符串流时，在绑定到字符串前需手动 clear
        inStr.str(line);
        inStr >> person.name;
        while (inStr >> word)
            person.phones.push_back(word);
        people.push_back(person);
    }


    // write
    ostringstream outStr;
    for (const PersonInfo &person:people) {
        ostringstream okNums, badNums;
        for (const auto &phone:person.phones) {
            if (valid(phone))
                okNums << " " << phone;
            else
                badNums << " " << phone;
        }

        if (!badNums.str().empty())
            outStr << "[not ok] " << person.name << " : " << badNums.str() << endl;
        else
            outStr << "[ok] " << person.name << " : " << okNums.str() << endl;
    }

    cout << outStr.str() << endl;
}