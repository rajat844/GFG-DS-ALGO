#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int noInteger(vector<int>& row, int mid) {
        int l = 0, h = row.size() - 1, mid1;

        while (l <= h) {
            mid1 = (l + h) >> 1;

            if (row[mid1] <= mid) l = mid1 + 1;
            else h = mid1 - 1;
        }
        return l;
    }

    int median(vector<vector<int>>& arr, int n, int m) {
        int l = 1;
        int h = 1e9;
        int check = (n * m) / 2;

        while (l <= h) {
            int mid = (h + l) >> 1;

            int count = 0;
            for (int i = 0; i < n; i++) {
                count += noInteger(arr[i], mid);
            }

            if (count <= check) l = mid + 1;
            else h = mid - 1;
        }
        return l;
    }
};


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
}