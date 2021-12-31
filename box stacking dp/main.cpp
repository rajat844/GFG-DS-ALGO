#include<bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
public:
    /*The function takes an array of heights, width and
    length as its 3 arguments where each index i value
    determines the height, width, length of the ith box.
    Here n is the total no of boxes.*/
    struct Box {
        int height, width, length;

        Box(int l, int b, int h) {
            length = l;
            width = b;
            height = h;
        }
    };

    static bool comp(Box &a, Box &b) {
        return (a.length < b.length);
    }

    bool canStacked(Box a, Box b) {
        if (a.width > b.width and a.length > b.length)
            return true;
        else return false;
    }

    int maxHeight(int height[], int width[], int length[], int n)     {
        //Your code here
        vector<Box> arr;
        for (int i = 0; i < n; i++) {
            Box box(length[i], width[i], height[i]);
            arr.push_back(box);
        }

        sort(arr.begin(), arr.end(), comp);

        vector<int> dp;

        for (int i = 0; i < n;i++) {
            for (int j = 0; j < i;j++) {
                if (canStacked(arr[j], arr[i]))
                    dp[i] = max(dp[i],dp[j] + arr[i].height);
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};



// { Driver Code Starts.

int main() {
    int n;
    cin >> n;

    int A[105], B[105], C[105];
    for (int i = 0; i < n; i++)cin >> A[i];
    for (int j = 0; j < n; j++)cin >> B[j];
    for (int k = 0; k < n; k++)cin >> C[k];
    Solution ob;
    cout << ob.maxHeight(A, B, C, n) << endl;

    return 0;
}
// } Driver Code Ends