#include <bits/stdc++.h>

using namespace std;

bool anagram(string a, string b) {
    int n1 = a.length();
    int n2 = b.length();
    if (n1 != n2)
        return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0;i < n1;i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    string a;
    cin >> a;
    string b;
    cin >> b;
    string result = anagram(a, b) ? "true" : "false";
    cout << result;

    return 0;
}