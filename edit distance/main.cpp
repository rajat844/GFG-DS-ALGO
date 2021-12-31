#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int editDistance(string s, string t) {
        // Code here
        int n = s.size();
        int m = t.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for (int i = 0, j = 0; i <= n;i++) {
            dp[i][j] = i;
        }

        for (int i = 0, j = 0; j <= m;j++) {
            dp[i][j] = j;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s[i - 1] == t[j- 1]) {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else {
                    dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]))+1;
                }
            }
        }
        return dp[n][m];
    }
};

// { Driver Code Starts.
int main() {

    string s, t;
    cin >> s >> t;
    Solution ob;
    int ans = ob.editDistance(s, t);
    cout << ans << "\n";

    return 0;
}