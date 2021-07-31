#include <bits/stdc++.h>

using namespace std;

void allSubstring(string str, size_t n, int index = -1, string current = "") {
    if (index == n) {
        return;
    }
    if (!current.empty()) {
        cout << current << endl;
    }
    for (int i = index + 1;i < n;i++) {
        current += str[i];
        allSubstring(str, n, i, current);

        current = current.erase(current.size() - 1);
    }
    return;
}

int main() {
    string str;
    cin >> str;
    allSubstring(str, str.size());
    return 0;
}