#include <bits/stdc++.h>

using namespace std;

vector<int> position(vector<vector<int>> matrix, int k) {
    int n = matrix.size();
    int m = matrix[0].size();

    int i = 0;
    int j = m - 1;
    vector<int> ans;

    while (i < n && j >= 0) {
        if (k == matrix[i][j]) {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if (k > matrix[i][j]) i++;
        else j--;
    }
    ans.push_back(-1);
    ans.push_back(-1);
    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n;i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int k;
    cin >> k;
    vector<int> ans = position(matrix, k);
    for (auto x : ans)cout << x << " ";
    return 0;
}
