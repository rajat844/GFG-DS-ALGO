#include <iostream>
 
using namespace std;

class Solution
{
  public:
    long long int count( int S[], int m, int n )
    {
        long long int dp[n+1]={0};
        dp[0]=1;
        for(int i=0;i<m;i++){
            for(int j = S[i]; j<=n;j++){
                dp[j] += dp[j -S[i]];
            }
        }
        return dp[n];
       
    }
};

// { Driver Code Starts.
int main()
{
    
		int n,m;
		cin>>n>>m;
		int arr[m];
		for(int i=0;i<m;i++)
		    cin>>arr[i];
	    Solution ob;
		cout<<ob.count(arr,m,n)<<endl;
    
    return 0;
}    