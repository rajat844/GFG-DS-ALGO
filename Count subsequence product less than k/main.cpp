#include <bits/stdc++.h>

using namespace std;

int fnc(vector<int> arr, int k){
    int n = arr.size();
    vector<vector<int>> dp(k+1,vector<int>(n+1,0));

    for(int i = 1; i<= k; i++){
        for(int j = 1; j<=n; j++){
            dp[i][j] = dp[i][j-1];

            if(arr[j-1] <= i){
                dp[i][j] += dp[i/arr[j-1]][j-1] + 1;
            }
        }
    }
    return dp[k][n];
}


int main(){
    int n;
    cin>> n;

    vector<int> arr(n,0);

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    int count = fnc(arr,k);
    cout<<count;
    return 0;
}
