#include <bits/stdc++.h>

using namespace std;

vector<int> allrows(vector<vector<int>>arr, int n, int m) {
    unordered_map<int, int> mp;
    vector<int>ans;
    for (int j = 0; j < m;j++) {
        mp[arr[0][j]] = 1;
    }
    for (int i = 1;i < n;i++) {
        for (int j = 0;j < m;j++) {
            if (mp[arr[i][j]] == i) {
                mp[arr[i][j]]++;
            }
        }
    }

    for (auto i : mp) {
        if (i.second == n + 1)
            ans.push_back(i.first);
    }
    return ans;
}

int main() {
    int n, m;
    cin >> n, m;
    vector<vector<int>> arr(n, vector<int>(m));
    
    for (int i = 0;i < n;i++) {
        for (int j = 0; j < m;j++) {
            cin >> arr[i][j];
        }
    }
    vector<int> elements = allrows(arr, n, m);

    for (auto i : elements) {
        cout << i << " ";
    }

    return 0;
}