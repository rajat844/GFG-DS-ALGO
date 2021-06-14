#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool subArrayExists(int arr[], int n) {
        //Your code here
        unordered_set<int> s;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + arr[i];
            if (s.find(sum) != s.end() || arr[i] == 0 || sum == 0) {
                return true;
            }
            s.insert(sum);
        }
        return false;
    }
};

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0;i < n;i++)
        cin >> arr[i];
    Solution obj;
    if (obj.subArrayExists(arr, n))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}