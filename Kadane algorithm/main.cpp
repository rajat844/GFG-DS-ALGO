#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n) {
        int currentbest = arr[0];
        int overallbest = arr[0];
        for (int i = 1; i < n;i++) {
            if (currentbest >= 0)
                currentbest = currentbest + arr[i];
            else
                currentbest = arr[i];
            if (currentbest > overallbest) {
                overallbest = currentbest;
            }
        }
        return overallbest;
    }
};

// { Driver Code Starts.

int main()
{
    int n;
    cin >> n; //input size of array

    int a[n];

    for (int i = 0;i < n;i++)
        cin >> a[i]; //inputting elements of array

    Solution ob;

    cout << ob.maxSubarraySum(a, n) << endl;

}