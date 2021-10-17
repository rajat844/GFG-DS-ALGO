#include <bits/stdc++.h>

using namespace std;

int nthSumOfContigiousArray(vector<int>a, int k) {
    int n = a.size();
    vector<int> sum(n + 1);
    sum[0] = 0;
    sum[1] = a[0];
    for (int i = 0; i < n;i++) {
        sum[i] = sum[i - 1] + a[i - 1];
    }

    priority_queue<int, vector<int>, greater<int>>q;

    for (int i = 1; i < n;i++) {
        for (int j = i; j < n; j++) {
            int x = sum[j] - sum[i - 1];

            if (q.size() < k)
                q.push(x);
            else {
                if (q.top() < x) {
                    q.pop();
                    q.push(x);
                }
            }
        }
    }
    return q.top();


}

int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n;i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    int ans = nthSumOfContigiousArray(a, k);
    cout << ans;


    return 0;
}