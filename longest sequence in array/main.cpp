// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



class Solution {
public:

    int findLongestConseqSubseq(int arr[], int N) {
        //Your code here
        set<int> s;
        for (int i = 0; i < N; i++) {
            s.insert(arr[i]);
        }
        int max = 1;
        int cs = 1;
        auto it1 = s.begin();
        for (auto it = ++s.begin(); it != s.end(); ++it) {
            if (*it == *it1++ + 1)
                ++cs;
            else {
                if (cs > max)
                    max = cs;
                cs = 1;
            }
        }
        if (cs > max)
            max = cs;
        return max;


    }
};

// { Driver Code Starts.

// Driver program
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0;i < n;i++)
        cin >> a[i];
    Solution obj;
    cout << obj.findLongestConseqSubseq(a, n) << endl;
    return 0;
}