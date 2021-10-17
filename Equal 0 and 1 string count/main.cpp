#include <bits/stdc++.h>

using namespace std;

int stringCount(string s) {
    int c1{ 0 }, c0{ 0 }, count{ 0 };
    for (int i = 0; i < s.size();i++) {
        if (s[i] == '0')
            c0++;
        else
            c1++;
        if (c0 == c1)
            count++;
    }
    if (count == 0)
        return -1;
    else
        return count;
}

int main() {
    string s;
    cin >> s;
    int count = stringCount(s);
    cout << count;

    return 0;
}