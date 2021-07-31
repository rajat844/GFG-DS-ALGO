#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    long long int count(int S[], int m, int n) {
        long long arr[100] = { 0 };
        arr[0] = 1;
        for (int i = 0; i < m;i++) {
            for (int j = S[i];j <= n;j++) {
                arr[j] = arr[j] + arr[j - S[i]];
            }
        }
        return arr[n];
    }
};

// { Driver Code Starts.
int main() {
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0;i < m;i++)
        cin >> arr[i];
    Solution ob;
    cout << ob.count(arr, m, n) << endl;
    return 0;
}