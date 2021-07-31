#include <bits/stdc++.h>

using namespace std;
string fx(int n) {
    string str;
    str = to_string(n);
    string ans;
    int size = str.length();
    string temp1, temp2;
    int start = 0;
    for (int i = 0; i <= size;i++) {
        temp1 = str[start];
        temp2 = str[i];
        if (temp1 != temp2) {
            int count = i - start;
            start = i;
            ans = ans + to_string(count) + temp1;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    string ans = fx(n);
    cout << ans;

    return 0;
}