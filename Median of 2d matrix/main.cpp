// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int median(vector<vector<int>>& arr, int n, int m) {
        // code here     
        int min_no = INT_MAX;
        int max_no = INT_MIN;
        int dc = 1 + (n * m) / 2;

        for (int i = 0; i < n; i++) {
            if (arr[i][0] < min_no)
                min_no = arr[i][0];
            if (arr[i][m - 1] > max_no)
                max_no = arr[i][m - 1];
        }

        while (min_no < max_no) {
            int counter = 0;
            int mid = (min_no + max_no) / 2;
            for (int i = 0; i < n; i++)
                counter += upper_bound(arr[i].begin(), arr[i].end(), mid) - arr[i].begin();
            if (counter < dc)
                min_no = mid + 1;
            else
                max_no = mid;
        }
        return min_no;
    }
};

// { Driver Code Starts.

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> matrix(r, vector<int>(c));
    for (int i = 0; i < r; ++i)
        for (int j = 0;j < c; ++j)
            cin >> matrix[i][j];
    Solution obj;
    cout << obj.median(matrix, r, c) << endl;

    return 0;
}  // } Driver Code Ends