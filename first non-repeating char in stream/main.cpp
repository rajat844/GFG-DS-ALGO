#include <bits/stdc++.h>

using namespace std;

string fxn(string s) {
    vector<int> store(26, 0);
    queue<char> que;
    string ans;

    for (auto i : s) {
        store[i - 'a']++;
        que.push(i);

        while (not que.empty()) {
            if (store[que.front() - 'a'] > 1)
                que.pop();
            else
                break;
        }

        if (que.empty()) {
            ans += "#";
        }
        else
            ans += que.front();

    }
    return ans;
}

int main() {
    string s;
    cin >> s;

    string firstnonrep = fxn(s);
    cout << firstnonrep;

    return 0;
}