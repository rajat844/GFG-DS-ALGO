#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> elecount(int arr[], int n, int k) {
    int count = n / k;
    vector<int> ans;
    unordered_map<int, int> m;
    for (int i = 0; i < n;i++) {
        m[arr[i]]++;
    }
    for (auto i : m) {
        if (i.second >= count)
            ans.push_back(i.first);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> ans = elecount(arr, n, k);
    for (auto i : ans) {
        cout << i << " ";
    }

    return 0;
}