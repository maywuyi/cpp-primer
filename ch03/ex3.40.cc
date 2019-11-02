#include <iostream>

using namespace std;

int main() {
    char s1[] = "ncjsbdcu";
    char s2[] = "cvfdugfywqb";
    char s3[strlen(s1) + strlen(s2) - 1];
    strcpy(s3, s1);
    strcat(s3, s2);
    cout << s3 << endl;
}