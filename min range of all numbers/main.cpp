#include<bits/stdc++.h>
#include <queue>
using namespace std;
#define N 1000
class elements {
public:
    int data;
    int row;
    int column;
};

struct mycomp {
    bool operator()(elements& a, elements& b) {
        return (a.data > b.data);
    }
};

class Solution {
public:
    pair<int, int> findSmallestRange(int a[][N], int n, int k) {
        priority_queue<elements, vector<elements>, mycomp>p;
        int minimum = INT_MAX;
        int maximum = INT_MIN;
        for (int i = 0; i < k; i++) {
            elements temp;
            temp.data = a[i][0];
            temp.row = i;
            temp.column = 0;
            p.push(temp);
            minimum = min(minimum, temp.data);
            maximum = max(maximum, temp.data);
        }
        int range = INT_MAX;
        int start = 0;
        int end = maximum;
        while (p.size() == k) {
            elements temp = p.top();
            p.pop();
            minimum = temp.data;
            if (abs(maximum - minimum) < range) {
                start = minimum;
                end = maximum;
                range = minimum - maximum;
            }
            if (temp.column < n - 1) {
                temp.data = a[temp.row][temp.column + 1];
                temp.column += 1;
                if (temp.data > maximum) {
                    maximum = temp.data;
                }
                p.push(temp);
            }
        }
        pair<int, int> ans;
        ans = { start,end };
        return ans;
    }
};

int main() {
    int n, k;
    cin >> n >> k;
    int arr[N][N];
    pair<int, int> rangee;
    for (int i = 0; i < k; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    Solution obj;
    rangee = obj.findSmallestRange(arr, n, k);
    cout << rangee.first << " " << rangee.second << "\n";

    return 0;
}

// } Driver Code Ends