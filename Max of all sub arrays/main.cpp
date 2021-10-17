#include <bits/stdc++.h>

using namespace std;

vector<int> printMax(vector<int> arr, int n, int k) {
    deque<int> q(k);
    vector<int> ans;
    for (int i = 0; i < k;i++) {
        while (!q.empty() and arr[i] >= arr[q.back()]) {
            q.pop_back();
        }
        q.push_back(i);
    }

    for (int i = k; i < n; i++) {
        ans.push_back(arr[q.front()]);
        while (!q.empty() and q.front() <= i - k) {
            q.pop_front();
        }
        while (!q.empty() and arr[i] >= arr[q.back()]) {
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(arr[q.front()]);
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    vector<int> ans = printMax(arr, n, k);
    for (auto i : ans) {
        cout << i << " ";
    }

    return 0;
}