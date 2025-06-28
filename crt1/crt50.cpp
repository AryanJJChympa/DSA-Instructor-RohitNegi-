#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1 = "aryan";
    string s2 = "marian";
    string s3 = "";

    int maxLen = max(s1.length(), s2.length());
    for (int i = 0; i < maxLen; i++) {
        if (i < s1.length()) {
            s3 += s1[i];
        }
        if (i < s2.length()) {
            s3 += s2[i];
        }
    }

    cout << s3;
    return 0;
}
