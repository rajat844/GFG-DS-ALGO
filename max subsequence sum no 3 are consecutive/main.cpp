#include <bits/stdc++.h>

using namespace std;

int fnc(vector<int> arr) {
    int n = arr.size();

    vector<int> dp(n);

    if (n >= 1) dp[0] = arr[0];
    if (n >= 2) dp[1] = arr[0] + arr[1];
    if (n > 2) dp[2] = max(dp[1], max(arr[0] + arr[2], arr[1] + arr[2]));

    for (int u = 3; u < n; u++) {
        dp[u] = max(dp[u - 1], max(dp[u - 2] + arr[u], dp[u - 3] + arr[u - 1] + arr[u]));
    }

    return dp[n - 1];
}


int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = fnc(arr);
    cout << sum;
    return 0;

}
