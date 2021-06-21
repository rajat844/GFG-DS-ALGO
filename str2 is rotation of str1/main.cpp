#include <bits/stdc++.h>

using namespace std;

bool checkrotation(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    str1 = str1 + str1;
    return(str1.find(str2) != string::npos);
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    int a = (checkrotation(str1, str2)) ? 1 : 0;
    cout << a;
    return 0;
}