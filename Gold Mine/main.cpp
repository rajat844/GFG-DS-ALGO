#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int maxGold(int n, int m, vector<vector<int>> M) {
        // code here

        if (n == 1) {
            int sum = 0;
            for (int col = 0;col < m;col++) {
                sum += M[0][col];
            }
            return sum;
        }

        for (int col = m - 2; col >= 0; col--) {
            for (int row = 0; row < n; row++) {
                int up_right = (row == 0) ? 0 : M[row - 1][col + 1];
                int down_right = (row == m - 1) ? 0 : M[row + 1][col + 1];
                int right = M[row][col + 1];

                M[row][col] = M[row][col] + max(up_right, max(down_right, right));
            }
        }
        int ans = 0;
        for (int row = 0; row < n; row++) {
            if (M[row][0] > ans) ans = M[row][0];
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {

    int n, m;
    cin >> n >> m;
    vector<vector<int>> M(n, vector<int>(m, 0));
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++)
            cin >> M[i][j];
    }

    Solution ob;
    cout << ob.maxGold(n, m, M) << "\n";
    return 0;
}  // } Driver Code Ends