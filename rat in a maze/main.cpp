#include <bits/stdc++.h>

using namespace std;

void helper(vector<vector<int>>& maze, int i, int j, vector<string>& ans, string a, int n) {
    if (i < 0 || j < 0 || i >= n || j >= n || maze[i][j] != 1)
        return;
    if (i == n - 1 and j == n - 1) {
        ans.push_back(a);
        return;
    }
    maze[i][j] = -1;
    helper(maze, i + 1, j, ans, a + "D", n);
    helper(maze, i - 1, j, ans, a + "U", n);
    helper(maze, i, j + 1, ans, a + "R", n);
    helper(maze, i, j - 1, ans, a + "L", n);
    maze[i][j] = 1;
}

vector<string> path(vector<vector<int>>& maze, int n) {
    vector<string> ans;
    string a = "";
    helper(maze, 0, 0, ans, a, n);
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>>maze;
    for (int i = 0;i < n;i++) {
        for (int j = 0; j < n;j++) {
            cin >> maze[i][j];
        }
    }
    vector<string> ans = path(maze, n);
    for (auto i : ans) {
        cout << i << " ";
    }

    return 0;
}